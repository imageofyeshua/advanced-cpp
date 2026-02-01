## Install SDL3

sudo apt update && sudo apt upgrade -y
sudo apt install build-essential cmake ninja-build libwayland-dev libx11-dev libxkbcommon-dev libegl1-mesa-dev libgles2-mesa-dev libdbus-1-dev libasound2-dev libpulse-dev libudev-dev libwayland-dev wayland-protocols libegl1-mesa-dev libgl1-mesa-dev x11-apps

$ git clone https://github.com/libsdl-org/SDL.git
$ cd SDL
$ cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
$ sudo cmake --build build --target install

$ echo $DISPLAY
$ xclock

## Compile System Header && Linking

g++ -std=c++23 -fmodules-ts -x c++-system-header SDL3/SDL.h
g++ -std=c++23 -fmodules-ts -o main.app main.cpp -lSDL3
./main.app
