#include<iostream>
#include "fraction.h"

int main() {
    Fraction fraction1, fraction2, result;

    std::cout << "Enter fraction 1:\n";
    fraction1.input();

    std::cout << "\nEnter fraction 2:\n";
    fraction2.input();

    result = Fraction::add(fraction1, fraction2);
    std::cout << "\nSum: ";
    result.display();

    result = Fraction::subtract(fraction1, fraction2);
    std::cout << "\nDifference: ";
    result.display();

    result = Fraction::multiply(fraction1, fraction2);
    std::cout << "\nProduct: ";
    result.display();

    result = Fraction::divide(fraction1, fraction2);
    std::cout << "\nQuotient: ";
    result.display();

    return 0;
}
