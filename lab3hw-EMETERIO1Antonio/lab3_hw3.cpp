#include <iostream>
#include <cmath>
#include <iomanip>

void displayTransmutationTable(int passingScore) {

    passingScore = static_cast<int>(passingScore);

    double k = static_cast<double>(100 - passingScore) / 7;

    std::cout << "\nTransmutation Table for Passing Score " << passingScore << ":\n";
    std::cout << "Score Range    Equivalent Grade\n";

    for (int i = 0; i <= 7; ++i) {
        int lowerBound = passingScore + static_cast<int>(std::ceil(i * k));
        int upperBound = passingScore + static_cast<int>(std::ceil((i + 1) * k)) - 1;

        std::cout << std::setw(4) << lowerBound << " - " << std::setw(3) << upperBound;

        char equivalentGrade = 'A' - i;
        if (equivalentGrade >= 'F') {
            std::cout << "   " << equivalentGrade << std::endl;
        } else {
            std::cout << "   F\n";
        }
    }
}

void displayEquivalentGrade(int passingScore, int finalGrade) {

    passingScore = static_cast<int>(passingScore);
    double k = static_cast<double>(100 - passingScore) / 7;
    char equivalentGrade = 'A' - static_cast<int>((finalGrade - passingScore) / k);

    std::cout << "\nEquivalent Grade for Final Grade " << finalGrade << ": " << equivalentGrade << std::endl;
}

int main() {

    int passingScore;
    std::cout << "Enter the passing score (between 50 and 70): ";
    std::cin >> passingScore;

    if (passingScore < 50 || passingScore > 70) {
        std::cout << "Invalid passing score. Please enter a passing score between 50 and 70.\n";
        return 1;
    }

    displayTransmutationTable(passingScore);

    int finalGrade;
    std::cout << "\nEnter your final grade: ";
    std::cin >> finalGrade;

    displayEquivalentGrade(passingScore, finalGrade);

    return 0;
}

