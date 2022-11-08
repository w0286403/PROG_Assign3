//
// Created by Zack Glenen on 2022-11-07.
//

#include "../inc/RationalNumber.h"

RationalNumber::RationalNumber() {
    cout << "DEFAULT CONSTRUCTOR FIRED" << endl;
    numerator = 0;
    denominator = 1;
}

RationalNumber::RationalNumber(int p_numerator) {
    cout << "1 ARG CONSTRUCTOR FIRED" << endl;
    numerator = p_numerator;
    denominator = 1;
}

RationalNumber::RationalNumber(int p_numerator, int p_denominator) {
    cout << "2 ARG CONSTRUCTOR FIRED" << endl;
    numerator = p_numerator;
    denominator = p_denominator;
}

RationalNumber::RationalNumber(string number) {
    cout << "STRING CONSTRUCTOR FIRED" << endl;

    string delimiter = "/";
    size_t pos = number.find(delimiter);
    numerator = stoi(number.substr(0,pos));
    number.erase(0,pos + delimiter.length());
    denominator = stoi(number);
}

RationalNumber RationalNumber::operator+(RationalNumber num) const {
    cout << "+ OPERATOR FIRED" << endl;

    int newNumerator = ((numerator*num.denominator)+(denominator*num.numerator));
    int newDenominator = denominator * num.denominator;
    int lcd = gcd(newNumerator,newDenominator);
    newNumerator = newNumerator / lcd;
    newDenominator = newDenominator / lcd;

    return {newNumerator,newDenominator};
}

RationalNumber RationalNumber::operator-(RationalNumber num) const {
    cout << "- OPERATOR FIRED" << endl;

    int newNumerator = ((numerator*num.denominator)-(denominator*num.numerator));
    int newDenominator = denominator * num.denominator;
    int lcd = gcd(newNumerator,newDenominator);
    newNumerator = newNumerator / lcd;
    newDenominator = newDenominator / lcd;

    return {newNumerator,newDenominator};
}

RationalNumber RationalNumber::operator*(RationalNumber num) const {
    cout << "* OPERATOR FIRED" << endl;

    int newNumerator = numerator * num.numerator;
    int newDenominator = denominator * num.denominator;

    int lcd = gcd(newNumerator,newDenominator);
    newNumerator = newNumerator / lcd;
    newDenominator = newDenominator / lcd;

    return {newNumerator,newDenominator};
}

RationalNumber RationalNumber::operator/(RationalNumber num) const {
    cout << "/ OPERATOR FIRED" << endl;

    int newNumerator = numerator * num.denominator;
    int newDenominator = denominator * num.numerator;

    int lcd = gcd(newNumerator,newDenominator);
    newNumerator = newNumerator / lcd;
    newDenominator = newDenominator / lcd;

    return {newNumerator,newDenominator};
}

ostream &operator<<(ostream &output, RationalNumber &num) {
    cout << "OUTPUT OPERATOR FIRED" << endl;

    output << "Rational Number: \n";
    output << num.numerator << "/" << num.denominator;
    return output;
}

bool RationalNumber::operator>(RationalNumber num) const {
    cout << "> OPERATOR FIRED" << endl;

    float leftNum = (float)numerator / (float)denominator;
    float rightNum = (float)num.numerator / (float)num.denominator;

    return leftNum > rightNum;
}

bool RationalNumber::operator<(RationalNumber num) const  {
    cout << "< OPERATOR FIRED" << endl;

    float leftNum = (float)numerator / (float)denominator;
    float rightNum = (float)num.numerator / (float)num.denominator;

    return leftNum < rightNum;
}

bool RationalNumber::operator==(RationalNumber num) const {
    cout << "== OPERATOR FIRED" << endl;

    float leftNum = (float)numerator / (float)denominator;
    float rightNum = (float)num.numerator / (float)num.denominator;

    return leftNum == rightNum;
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}




