//
// Created by Zack Glenen on 2022-11-07.
//
#include <iostream>

#ifndef ASSIGNMENT_3_RATIONALNUMBER_H
#define ASSIGNMENT_3_RATIONALNUMBER_H
using namespace std;
class RationalNumber {
public:
    RationalNumber();
    explicit RationalNumber(int);
    RationalNumber(int, int);
    explicit RationalNumber(string);
    RationalNumber operator+(RationalNumber);
    RationalNumber operator-(RationalNumber);
    RationalNumber operator*(RationalNumber);
    RationalNumber operator/(RationalNumber);
    bool operator>(RationalNumber);
    bool operator<(RationalNumber);
    bool operator==(RationalNumber);
private:
    int numerator;
    int denominator;
    friend ostream& operator<<(ostream&, RationalNumber&);
};


#endif //ASSIGNMENT_3_RATIONALNUMBER_H
