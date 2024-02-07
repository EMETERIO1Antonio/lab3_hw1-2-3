#include <iostream>

int main() {
    double woodDensity;
    char treeSize;

    std::cout << "Enter wood density: ";
    std::cin >> woodDensity;

    std::cout << "Enter inferred tree size (L/M/S): ";
    std::cin >> treeSize;

    if (treeSize == 'L') {
        if (woodDensity >= 0.500 && woodDensity <= 0.600) {
            std::cout << "Tree Name: Dao" << std::endl;
        } else if (woodDensity >= 0.601 && woodDensity <= 0.700) {
            std::cout << "Tree Name: Katmon" << std::endl;
        } else if (woodDensity >= 0.701) {
            std::cout << "Tree Name: Yakal" << std::endl;
        } else {
            std::cout << "Uncertain" << std::endl;
        }
    } else if (treeSize == 'M') {
        if (woodDensity >= 0.601 && woodDensity <= 0.700) {
            std::cout << "Tree Name: Katmon" << std::endl;
        } else if (woodDensity >= 0.701) {
            std::cout << "Tree Name: Kamagong" << std::endl;
        } else {
            std::cout << "Uncertain" << std::endl;
        }
    } else if (treeSize == 'S') {
        if (woodDensity >= 0.701) {
            std::cout << "Tree Name: Gisok-Gisok" << std::endl;
        } else {
            std::cout << "Uncertain" << std::endl;
        }
    } else {
        std::cout << "Invalid tree size input." << std::endl;
    }

    return 0;
}

