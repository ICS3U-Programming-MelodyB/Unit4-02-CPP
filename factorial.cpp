// Copyright (c) 2021 Melody Berhane All rights reserved.
//
// Created by: Melody Berhane
// Date: Jan 06, 2022
// This program asks the user for a positive integer. It
// then calculates the factorial of that number
#include <iostream>

int main() {
  // initialize the loop counter and sum
  int loopCounter = 0;
  int factorialAnswer = 1;
  int userNum;
  std::string userNumString;

  // get the user number as a string
  std::cout << "Enter a postive number: ";
  std::cin >> userNumString;
  std::cout << std::endl;

  try {
        // convert the user's guess to an int
        userNum = std::stoi(userNumString);
        std::cout << "" << std::endl;

        // check if the guess is correct
        if (userNum > 0) {
            // calculate the sum of all numbers from 0 to user number
            do {
                loopCounter = loopCounter + 1;
                factorialAnswer = factorialAnswer * loopCounter;
                std::cout << "Tracking " << loopCounter <<
                          " times through the loop.\n";
            } while (loopCounter < userNum);
            // display the sum to the user
            std::cout << userNum <<"! = " << factorialAnswer << std::endl;
        } else {
            std::cout << "You entered a negative number, please try again.";
    }
        // Tells the user that they didn't input an integer
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout << userNumString << " \033[1;35;38mis "
                                              "not an integer.\n";
        std::cout << "" << std::endl;
        std::cout << "\033[1;35;38mThanks for Playing.";
    }
}
