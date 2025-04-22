#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cctype>

bool isYear(int value) {
    return value > 1800 && value < 2100; 
}

int main() {
    std::string townName, fileName;
    std::ifstream file;

    std::cout << "Enter the name of the town: ";
    std::getline(std::cin, townName);

    std::cout << "Enter the name of the data file: ";
    std::getline(std::cin, fileName);

    file.open(fileName);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open the file.\n";
        return 1;
    }

    std::vector<int> values;
    int value;
    std::string line;

    if (std::getline(file, line)) {
        std::istringstream iss(line);
        while (iss >> value) {
            values.push_back(value);
        }
    }

    file.close();

    if (values.empty()) {
        std::cerr << "Error: No data found in the file.\n";
        return 1;
    }

    int baseYear, interval;
    std::vector<int> populations;

    if (isYear(values[0])) {
        baseYear = values[0];
        std::cout << "Base year detected in file: " << baseYear << std::endl;
        for (size_t i = 1; i < values.size(); ++i) {
            populations.push_back(values[i]);
        }
        std::cout << "Enter the year interval between population recordings (e.g., 20): ";
        std::cin >> interval;
    } else {
        populations = values;
        std::cout << "Enter the starting year: ";
        std::cin >> baseYear;
        std::cout << "Enter the year interval between population recordings (e.g., 20): ";
        std::cin >> interval;
    }

    std::cout << "\n" << townName << " Population Growth\n";
    std::cout << "(each * represents 1,000 people)\n";

    for (size_t i = 0; i < populations.size(); ++i) {
        int year = baseYear + static_cast<int>(interval * i);
        std::cout << year << " ";
        int stars = populations[i] / 1000;
        for (int j = 0; j < stars; ++j) {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    return 0;
}
