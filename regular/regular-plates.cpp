#include <iostream>
#include <fstream>
#include <iomanip>
#include <array>

int main() {
    std::ofstream regularPlatesFile("regular-plates.txt");
    
    if (!regularPlatesFile) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    const std::array<char, 7> plateChars = {'A', 'E', 'O', 'J', 'K', 'M', 'T'};

    for (const auto& firstChar : plateChars) {
        for (int num1 = 0; num1 < 100; ++num1) {
            for (const auto& secondChar : plateChars) {
                for (int num2 = 0; num2 < 1000; ++num2) {
                    regularPlatesFile << firstChar
                                      << std::setw(2) << std::setfill('0') << num1
                                      << '-' << secondChar << '-'
                                      << std::setw(3) << std::setfill('0') << num2
                                      << '\n';
                }
            }
        }
    }

    regularPlatesFile.close();
    return 0;
}