//
// Created by Zack Glenen on 2022-11-07.
//
#include <iostream>
#include <cstring>
#include <regex.h>

#ifndef ASSIGNMENT_3_RATIONALNUMBER_H
#define ASSIGNMENT_3_RATIONALNUMBER_H
using namespace std;
class RationalNumber {
public:
    RationalNumber();
    explicit RationalNumber(int);
    RationalNumber(int, int);
    explicit RationalNumber(string);
    RationalNumber operator+(RationalNumber) const;
    RationalNumber operator-(RationalNumber) const;
    RationalNumber operator*(RationalNumber) const;
    RationalNumber operator/(RationalNumber) const;
    bool operator>(RationalNumber) const;
    bool operator<(RationalNumber) const;
    bool operator==(RationalNumber) const;
private:
    int numerator;
    int denominator;
    friend ostream& operator<<(ostream&, RationalNumber&);
};

int gcd(int a, int b);

#endif //ASSIGNMENT_3_RATIONALNUMBER_H
