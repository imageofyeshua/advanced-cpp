import <SDL3/SDL.h>;
import <SDL3/SDL_main.h>;
import <SDL3_image/SDL_image.h>;
import <print>;
import <chrono>;

using namespace std;
using namespace std::chrono;

struct SDLState
{
  SDL_Window *window;
  SDL_Renderer *renderer;
  int width, height, logW, logH;
};

bool initialize(SDLState &state);
void cleanup(SDLState &state);

int main(int argc, char *argv[])
{
  SDLState state;

  state.width = 1200;
  state.height = 600;
  state.logW = 640;
  state.logH = 320;

  println("### Platformer Game Project ###");

  if (!initialize(state))
  {
    return 1;
  }

  // load game assets
  SDL_Texture *idleTex = IMG_LoadTexture(state.renderer, "data/idle.png");
  SDL_SetTextureScaleMode(idleTex, SDL_SCALEMODE_NEAREST);

  // setup game data
  const bool *keys = SDL_GetKeyboardState(nullptr);
  float playerX = 150.0f;
  const float speed = 200.0f;
  const float floor = state.logH;
  bool flipHorizontal = false;
  milliseconds previousTime{ SDL_GetTicks() };

  // start the game loop
  bool running = true;
  while (running)
  {
    milliseconds currentTime{ SDL_GetTicks() };
    auto durationElapsed = currentTime - previousTime;
    float dt = duration<float>(durationElapsed).count();

    SDL_Event event{ 0 };
    while (SDL_PollEvent(&event))
    {
      switch (event.type)
      {
        case SDL_EVENT_QUIT:
          {
            running = false;
            break;
          } 
        case SDL_EVENT_WINDOW_RESIZED:
          {
            state.width = event.window.data1;
            state.height = event.window.data2;
            break;
          }
      } 
    }

    // handle movement
    if (keys[SDL_SCANCODE_A])
    {
      playerX -= speed * dt;
      flipHorizontal = true;
    }
    if (keys[SDL_SCANCODE_D])
    {
      playerX += speed * dt;
      flipHorizontal = false;
    }

    static float timer = 0;
    timer += dt;
    if (timer > 1.0f) {
      println("FPS: {:.1f} | Player X: {:.2f}", 1.0f / dt, playerX);
      timer = 0;
    }

    // perform drawing commands
    SDL_SetRenderDrawColor(state.renderer, 20, 10, 30, 255);
    SDL_RenderClear(state.renderer);

    const float spriteSize = 32;
    SDL_FRect src{
      .x = 0,
        .y = 0,
        .w = spriteSize,
        .h = spriteSize
    };

    SDL_FRect dst{
      .x = playerX,
        .y = floor - spriteSize,
        .w = spriteSize,
        .h = spriteSize
    };

    SDL_RenderTextureRotated(state.renderer, idleTex, &src, &dst, 0, nullptr,
        (flipHorizontal) ? SDL_FLIP_HORIZONTAL : SDL_FLIP_NONE);

    // swap buffers and present
    SDL_RenderPresent(state.renderer);
    previousTime = currentTime;
  }

  SDL_DestroyTexture(idleTex);
  cleanup(state);
  return 0;
}

bool initialize(SDLState &state)
{
  bool initSuccess = true;

  if (!SDL_Init(SDL_INIT_VIDEO))
  {
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Error", "Error Initializing SDL3", nullptr);
    initSuccess = false;
  }

  // create the window
  int width = 800;
  int height = 600;
  state.window = SDL_CreateWindow("SDL3 Demo", state.width, state.height, SDL_WINDOW_RESIZABLE);

  if (!state.window)
  {
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Error", "Error Creating Window", nullptr);
    cleanup(state);
    initSuccess = false;
  }

  // create the renderer
  state.renderer = SDL_CreateRenderer(state.window, nullptr);
  if (!state.renderer)
  {
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Error", "Error Creating Renderer", state.window);
    cleanup(state);
    initSuccess = false;
  }

  // configure presentation
  int logW = 640;
  int logH = 320;
  SDL_SetRenderLogicalPresentation(state.renderer, state.logW, state.logH, SDL_LOGICAL_PRESENTATION_LETTERBOX);
  return initSuccess;
}

void cleanup(SDLState &state)
{
  SDL_DestroyRenderer(state.renderer);
  SDL_DestroyWindow(state.window);
  SDL_Quit();
}
