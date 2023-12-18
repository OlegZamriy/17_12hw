
#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    static int gcd(int a, int b);
    static void simplify(int& numerator, int& denominator);

public:
    int numerator;
    int denominator;

    Fraction();
    Fraction(int num, int denom);

    void input();
    void display() const;

    static Fraction add(const Fraction& frac1, const Fraction& frac2);
    static Fraction subtract(const Fraction& frac1, const Fraction& frac2);
    static Fraction multiply(const Fraction& frac1, const Fraction& frac2);
    static Fraction divide(const Fraction& frac1, const Fraction& frac2);
};

#endif // FRACTION_H
