//
// Created by Zack Glenen on 2022-11-07.
//

#include "../inc/RationalNumber.h"

RationalNumber::RationalNumber() {
    numerator = 0;
    denominator = 1;
}

RationalNumber::RationalNumber(int p_numerator) {
    numerator = p_numerator;
    denominator = 1;
}

RationalNumber::RationalNumber(int p_numerator, int p_denominator) {
    numerator = p_numerator;
    denominator = p_denominator;
}

RationalNumber::RationalNumber(string number) {
    string delimiter = "/";
    size_t pos;
    pos = number.find(delimiter);
    numerator = stoi(number.substr(0,pos));
    number.erase(0,pos + delimiter.length());
    denominator = stoi(number.substr(0,pos));
}

RationalNumber RationalNumber::operator+(RationalNumber) {
    return RationalNumber();
}

RationalNumber RationalNumber::operator-(RationalNumber) {
    return RationalNumber();
}

RationalNumber RationalNumber::operator*(RationalNumber) {
    return RationalNumber();
}

RationalNumber RationalNumber::operator/(RationalNumber) {
    return RationalNumber();
}

ostream &operator<<(ostream &output, RationalNumber &num) {
    output << "Rational Number: \n";
    output << num.numerator << "/" << num.denominator;
    return output;
}

bool RationalNumber::operator>(RationalNumber) {
    return false;
}

bool RationalNumber::operator<(RationalNumber) {
    return false;
}

bool RationalNumber::operator==(RationalNumber) {
    return false;
}


