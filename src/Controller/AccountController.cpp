#include "AccountController.h"
#include <iostream>

// id(5) title(15) login(15) password (15)


namespace PM_Controller {

    const int WITDH = 55;
    const char SEPARATOR = '|';

    void AccountController::printHead() {
        std::cout << this->minusLine(55) << std::endl;
        std::cout << SEPARATOR + this->centerWord("id", 5) + SEPARATOR + this->centerWord("Title", 15) + SEPARATOR +
                this->centerWord("Name", 15) + SEPARATOR + this->centerWord("Login", 15) + SEPARATOR +
                this->centerWord("Password", 15) << std::endl;
        std::cout << this->minusLine(WITDH) << std::endl;
        std::cout << "" << std::endl;
    }

    void AccountController::printFooter() {
        std::cout << this->minusLine(WITDH) << std::endl;
    }

    string AccountController::minusLine(int quantity) {
        string result;
        do {
            result += "-";
        } while (result.length() < quantity);
        return result;
    }

    string AccountController::centerWord(string word, int cellWidth) {
        int spaces = (cellWidth - word.length()) / 2;
        string result;

        do {
            result += " ";
        } while (result.length() < spaces);

        result += word;

        do {
            result += " ";
        } while (result.length() < cellWidth);

        return result;
    }

//    char minusLine(int quantity) {
//        char result[quantity];
//        for (int i = 0; i < quantity; i++) {
//            result[i] = '-';
//        }
//        result[quantity] = '\0';
//        return *result;
//    }

}
