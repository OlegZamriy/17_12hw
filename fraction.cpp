
#include "fraction.h"
#include <iostream>

int Fraction::gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void Fraction::simplify(int& numerator, int& denominator) {
    int commonDivisor = gcd(numerator, denominator);
    numerator /= commonDivisor;
    denominator /= commonDivisor;
}

Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {
    simplify(numerator, denominator);
}

void Fraction::input() {
    std::cout << "Enter numerator: ";
    std::cin >> numerator;
    std::cout << "Enter denominator: ";
    std::cin >> denominator;
    simplify(numerator, denominator);
}

void Fraction::display() const {
    std::cout << numerator << "/" << denominator;
}

Fraction Fraction::add(const Fraction& frac1, const Fraction& frac2) {
    int resultNumerator = frac1.numerator * frac2.denominator + frac2.numerator * frac1.denominator;
    int resultDenominator = frac1.denominator * frac2.denominator;
    return Fraction(resultNumerator, resultDenominator);
}

Fraction Fraction::subtract(const Fraction& frac1, const Fraction& frac2) {
    int resultNumerator = frac1.numerator * frac2.denominator - frac2.numerator * frac1.denominator;
    int resultDenominator = frac1.denominator * frac2.denominator;
    return Fraction(resultNumerator, resultDenominator);
}

Fraction Fraction::multiply(const Fraction& frac1, const Fraction& frac2) {
    int resultNumerator = frac1.numerator * frac2.numerator;
    int resultDenominator = frac1.denominator * frac2.denominator;
    return Fraction(resultNumerator, resultDenominator);
}

Fraction Fraction::divide(const Fraction& frac1, const Fraction& frac2) {
    int resultNumerator = frac1.numerator * frac2.denominator;
    int resultDenominator = frac1.denominator * frac2.numerator;
    return Fraction(resultNumerator, resultDenominator);
}
