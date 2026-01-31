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

FLAGS="-std=c++23 -fmodules-ts"

# List of the most common/stable STL headers
# Note: We exclude 'cwctype' to avoid the wint_t conflict you encountered
CORE_HEADERS=(
    "memory"
    "thread"
    "chrono"
    "iomanip"
    "iostream"
    "fstream"
    "sstream"
    "locale"
    "format"
    "ranges"
    "print"
    "string"
    "string_view"
    "vector"
    "stdexcept"
    "charconv"
    "utility"
    "algorithm"
    "numeric"
    "cmath"
    "random"
    "map"
    "span"
    "optional"
    "variant"
    "unordered_map"
    "list"
    "forward_list"
    "deque"
    "array"
    "set"
    "stack"
    "queue"
    "typeinfo"
)

echo "--- Starting STL Module Cache Generation (GCC 14.2) ---"

# 1. Clean old cache to prevent metadata conflicts
if [ -d "gcm.cache" ]; then
    echo "[1/3] Cleaning existing gcm.cache..."
    rm -rf gcm.cache
fi

# 2. Build the headers
echo "[2/3] Compiling headers into gcm.cache..."
for header in "${CORE_HEADERS[@]}"; do
    echo "  -> Compiling <$header>..."
    $CXX $FLAGS -x c++-system-header "$header"
    
    if [ $? -ne 0 ]; then
        echo "  [!] Warning: Failed to compile <$header>. Skipping..."
    fi
done

# 3. Final Verification
echo "[3/3] Verification..."
if [ -d "gcm.cache" ]; then
    COUNT=$(find gcm.cache -name "*.gcm" | wc -l)
    echo "--- Success! ---"
    echo "Compiled $COUNT STL modules into ./gcm.cache"
    echo "You can now use 'import <header>;' in your code."
else
    echo "--- Error: gcm.cache was not created. ---"
fi
