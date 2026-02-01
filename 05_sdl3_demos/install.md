## Install Dependencies && SDL3

sudo apt update && sudo apt upgrade -y
sudo apt install -y \
build-essential \
cmake \
ninja-build \
libwayland-dev \
libx11-dev \
xorg-dev \
libxkbcommon-dev \
libegl1-mesa-dev \
libgles2-mesa-dev \
libdbus-1-dev \
libasound2-dev \
libpulse-dev \
libudev-dev \
libgbm-dev \
wayland-protocols \
x11-apps \
libpng-dev \
libjpeg-dev \
libwebp-dev \
libtiff-dev \
libavif-dev \
libstd-dev \
libflac-dev \
libvorbis-dev \
libopus-dev \
libwavpack-dev \
libgme-dev \
libxmp-dev \
libmodplug-dev \
libfluidsynth-dev

## Check GUI

// if it says wayland or x11, the system is ready
$ echo $XDG_SESSION_TYPE

$ git clone https://github.com/libsdl-org/SDL.git
$ cd SDL
$ cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
$ sudo cmake --build build --target install

$ echo $DISPLAY
$ xclock

## Install SDL3_image

git clone https://github.com/libsdl-org/SDL_image.git
cd SDL_image
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
sudo cmake --build build --target install

## Dynamic Linker Setup

echo "/usr/local/lib" | sudo tee /etc/ld.so.conf.d/sdl3.conf
sudo ldconfig -v | grep SDL3

## Compile System Header && Linking

g++ -std=c++23 -fmodules-ts -x c++-system-header SDL3/SDL.h
g++ -std=c++23 -fmodules-ts -o main.app main.cpp -lSDL3
./main.app
