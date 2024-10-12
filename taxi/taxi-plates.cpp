#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
    std::ofstream TaxiPlatesFile("taxi-plates.txt");

    if (!TaxiPlatesFile) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    for (int i = 0; i <= 999999; ++i) {
        TaxiPlatesFile << "TA-" << std::setw(6) << std::setfill('0') << i << '\n';
    }

    TaxiPlatesFile.close();
    return 0;
}
