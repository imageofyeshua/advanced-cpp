#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // For std::setw
#include <algorithm> // For std::max

int main() {
    std::vector words{ "Hello" };
    std::string word;
    size_t maxLength = 0;

    std::cout << "Enter words (enter '*' to stop):" << std::endl;

    // 1. Input loop
    while (std::cin >> word && word != "*") {
        words.push_back(word);
        // Track the longest word length as we go
        if (word.length() > maxLength) {
            maxLength = word.length();
        }
    }

    if (words.empty()) {
        std::cout << "No words were entered." << std::endl;
        return 0;
    }

    // 2. Output loop
    const int wordsPerRow = 5;
    const int colWidth = maxLength + 2; // Add padding for centering

    std::cout << "\nFormatted Output:\n";
    
    for (size_t i = 0; i < words.size(); ++i) {
        // Centering logic: calculate left padding
        int totalPadding = colWidth - words[i].length();
        int leftPadding = totalPadding / 2;
        int rightPadding = totalPadding - leftPadding;

        // Print word with | separator
        std::cout << std::string(leftPadding, ' ') << words[i] << std::string(rightPadding, ' ') << "|";

        // Start a new line every 5 words
        if ((i + 1) % wordsPerRow == 0) {
            std::cout << "\n";
        }
    }
    
    std::cout << std::endl;

    return 0;
}
