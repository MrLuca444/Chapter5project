#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::ifstream file("LineUp.txt"); 
    std::vector<std::string> names;
    std::string name;

    if (file.is_open()) {
        while (std::getline(file, name)) {
            if (!name.empty()) {
                names.push_back(name);
            }
        }
        file.close();

        
        std::sort(names.begin(), names.end());

        
        std::cout << "Names in alphabetical order:\n";
        for (const auto& n : names) {
            std::cout << n << std::endl;
        }
    } else {
        std::cerr << "Failed to open file" << std::endl;
    }

    return 0;
}


