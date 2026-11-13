// Copyright (c) 2026
// All rights reserved.

#include <iostream>
#include <stdexcept>
#include <string>

int main() {
    std::string userInput;
    int sum = 0;
    int counter = 0;

    std::cout << "Enter a positive integer: ";
    std::cin >> userInput;

    try {
        size_t pos;
        int positiveInteger = std::stoi(userInput, &pos);

        // Rejects inputs with decimals or extra characters (like "5.5")
        if (pos != userInput.length()) {
            throw std::invalid_argument("Not an integer");
        }

        if (positiveInteger < 0) {
            std::cout << positiveInteger
                    << " is not a positive integer." << std::endl;
        } else {
            while (counter <= positiveInteger) {
                std::cout << "Tracking " << counter
                << " time through the loop." << std::endl;
                sum = sum + counter;
                counter = counter + 1;
            }
            std::cout << "The sum of the numbers from 0 to " << positiveInteger
                << " is " << sum << "." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << userInput << " is not a valid integer." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
