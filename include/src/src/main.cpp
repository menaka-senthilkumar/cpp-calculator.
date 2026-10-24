#include <iostream>
#include <limits>
#include <stdexcept>

#include "calculator.h"

namespace {

void printMenu() {
    std::cout << "\n===== Console Calculator =====\n"
              << "1. Add\n"
              << "2. Subtract\n"
              << "3. Multiply\n"
              << "4. Divide\n"
              << "5. Exit\n"
              << "Choose an option: ";
}

double readNumber(const char* prompt) {
    double value;
    std::cout << prompt;
    while (!(std::cin >> value)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a number: ";
    }
    return value;
}

}  // namespace

int main() {
    int choice = 0;

    while (true) {
        printMenu();
        if (!(std::cin >> choice)) {
            if (std::cin.eof()) break;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid choice. Try again.\n";
            continue;
        }

        if (choice == 5) {
            std::cout << "Goodbye!\n";
            break;
        }
        if (choice < 1 || choice > 4) {
            std::cout << "Invalid choice. Try again.\n";
            continue;
        }

        double a = readNumber("Enter first number: ");
        double b = readNumber("Enter second number: ");

        try {
            double result = 0;
            switch (choice) {
                case 1: result = calc::add(a, b); break;
                case 2: result = calc::subtract(a, b); break;
                case 3: result = calc::multiply(a, b); break;
                case 4: result = calc::divide(a, b); break;
            }
            std::cout << "Result: " << result << "\n";
        } catch (const std::invalid_argument& e) {
            std::cout << "Error: " << e.what() << "\n";
        }
    }
    return 0;
}
