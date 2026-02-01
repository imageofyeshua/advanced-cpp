module;
import <vector>;
import <SDL3/SDL.h>;

export module tetris_logic;

namespace Tetris {
  const int COLS = 10;
  const int ROWS = 20;
  const int TILE_SIZE = 30;

  struct Point { int x, y; };

  // Tetromino shapes defined as offsets from a center point
  const std::vector<std::vector<Point>> SHAPES = {
    {{0,1}, {1,1}, {2,1}, {3,1}}, // I
    {{0,0}, {0,1}, {1,1}, {1,0}}, // O
    {{1,0}, {0,1}, {1,1}, {2,1}}  // T
  };

  export class GameBoard {
    public:
      int grid[ROWS][COLS] = {0};
      Point pos{4, 0};
      int currentShape = 0;

      void move(int dx, int dy) {
        pos.x += dx;
        pos.y += dy;
        if (pos.y >= ROWS - 1) lockAndReset();
      }

      void lockAndReset() {
        grid[pos.y][pos.x] = 1;
        pos = {4, 0};
      }

      void draw(SDL_Renderer* renderer) {
        // Draw locked blocks
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        for(int y=0; y<ROWS; ++y) {
          for(int x=0; x<COLS; ++x) {
            if(grid[y][x]) {
              SDL_FRect r{ (float)x*TILE_SIZE, (float)y*TILE_SIZE, TILE_SIZE-1, TILE_SIZE-1 };
              SDL_RenderFillRect(renderer, &r);
            }
          }
        }
        // Draw current falling block
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_FRect r{ (float)pos.x*TILE_SIZE, (float)pos.y*TILE_SIZE, TILE_SIZE-1, TILE_SIZE-1 };
        SDL_RenderFillRect(renderer, &r);
      }
  };
}
