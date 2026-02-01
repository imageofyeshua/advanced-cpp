import <SDL3/SDL.h>;
import <iostream>;
import <print>;

using namespace std;

int main(int argc, char* argv[]) {
    // SDL3 returns true (1) on success, false (0) on failure
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        println("SDL Init Error: {}", SDL_GetError());
        return -1;
    }

    // SDL3 window creation is slightly different from SDL2
    SDL_Window* window = SDL_CreateWindow(
        "C++23 Module Window", // Window title
        800,                   // Width
        600,                   // Height
        SDL_WINDOW_RESIZABLE   // Flags
    );

    if (!window) {
        println("Window Creation Error: {}", SDL_GetError());
        return -1;
        SDL_Quit();
        return -1;
    }

    // Main Loop
    bool running = true;
    SDL_Event event;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                running = false;
            }
        }
        
        // Just clear the screen to a nice color (Dark Gray)
        // SDL3 uses a slightly updated rendering API, but for a 
        // basic window, we can just poll events.
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
