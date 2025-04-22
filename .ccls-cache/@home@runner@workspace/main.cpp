#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;

    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return 1;
    }

    vector<string> names;
    string name;
    while (getline(file, name)) {
        names.push_back(name);
    }

    file.close();

    sort(names.begin(), names.end());

    cout << "Names in alphabetical order:" << endl;
    for (const auto& n : names) {
        cout << n << endl;
    }

    return 0;
}