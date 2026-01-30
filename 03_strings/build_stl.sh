#!/bin/bash

# Define the compiler and flags
CXX="g++"
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
