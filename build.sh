#!/bin/zsh

# 1. Detect OS and Architecture
OS_TYPE=$(uname -s)
ARCH_TYPE=$(uname -m)

if [[ "$OS_TYPE" == "Darwin" ]]; then
    # Determine Homebrew path based on Mac Architecture
    if [[ "$ARCH_TYPE" == "arm64" ]]; then
        BREW_PREFIX="/opt/homebrew"
    else
        BREW_PREFIX="/usr/local"
    fi
    CXX="$BREW_PREFIX/gcc-14.2/bin/g++-14.2"
elif [[ "$OS_TYPE" == "Linux" ]]; then
    CXX="g++"
fi

# 2. Verify Compiler
if ! command -v $CXX &> /dev/null; then
    echo "Error: $CXX not found."
    exit 1
fi

echo "Using Compiler: $CXX"

# 3. Define Headers
headers=( memory chrono thread iomanip iostream fstream sstream locale format ranges random print string string_view vector stdexcept charconv utility algorithm numeric cmath map span optional variant unordered_map list forward_list deque array set stack queue typeinfo limits numbers bitset )

# 4. Compile Header Units
# IMPORTANT: No quotes around the flags. They must be separate arguments.
for h in $headers; do
    echo "Caching <$h>..."
    $CXX -std=c++23 -fmodules-ts -x c++-system-header $h
done

echo "Successfully created gcm.cache for $OS_TYPE"
