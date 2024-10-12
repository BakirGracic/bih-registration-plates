#include <iostream>
#include <fstream>
#include <iomanip>
#include <array>
#include <string>

std::string formatNumber(int num) {
    std::ostringstream oss;
    oss << std::setw(3) << std::setfill('0') << num;
    return oss.str();
}

int main() {
    const std::array<std::string, 4> plateChars = {"A", "C", "M", "E"};
    const std::array<std::string, 92> plateDiplomaticCodes = {
        "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", 
        "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", 
        "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", 
        "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", 
        "90", "91", "92", "93", "94", "95", "96", "97", "0100", "0102", "0103", "0119"
    };

    std::ofstream DiplomaticPlatesFile("diplomatic-plates.txt");

    if (!DiplomaticPlatesFile) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    for (const auto& code : plateDiplomaticCodes) {
        for (const auto& ch : plateChars) {
            for (int k = 0; k < 1000; ++k) {
                DiplomaticPlatesFile << code << '-' << ch << '-' << formatNumber(k) << '\n';
            }
        }
    }

    DiplomaticPlatesFile.close();
    return 0;
}
