import <SDL3/SDL.h>;
import tetris_logic;

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO);
    
    SDL_Window* window = SDL_CreateWindow("C++23 Tetris", 300, 600, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, nullptr);

    Tetris::GameBoard game;
    bool quit = false;
    SDL_Event e;
    Uint64 lastTime = SDL_GetTicks();

    while (!quit) {
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) quit = true;
            if (e.type == SDL_EVENT_KEY_DOWN) {
                if (e.key.key == SDLK_LEFT) game.move(-1, 0);
                if (e.key.key == SDLK_RIGHT) game.move(1, 0);
                if (e.key.key == SDLK_DOWN) game.move(0, 1);
            }
        }

        // Automatic gravity every 500ms
        if (SDL_GetTicks() - lastTime > 500) {
            game.move(0, 1);
            lastTime = SDL_GetTicks();
        }

        SDL_SetRenderDrawColor(renderer, 20, 20, 20, 255);
        SDL_RenderClear(renderer);
        
        game.draw(renderer);
        
        SDL_RenderPresent(renderer);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
