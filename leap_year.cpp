#include <iostream>

//program to check if it is a leap year
int main() {

    int year = 0;

    std::cout << "Enter year: ";
    std::cin >> year;

    //if entered year is out of range
    if (year < 1000 || year > 9999) {

        std::cout << "Invalid entry.\n";

    }
    //if it is a leap year
    else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {

        std::cout << year;
        std::cout << " falls on a leap year.\n";

    }
    else {

        std::cout << year;
        std::cout << " is not a leap year.\n";

    }

    return 0;

}