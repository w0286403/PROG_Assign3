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

RationalNumber RationalNumber::operator+(RationalNumber num) const {

    //https://prepinsta.com/cpp-program/to-add-two-fractions/
    int lcm = (denominator*num.denominator)/ findGCD(denominator,num.denominator);
    int sum = (numerator*(lcm/denominator)) + (num.numerator*(lcm/num.denominator));

    int numer = sum/ findGCD(sum,lcm);
    int denom = lcm / findGCD(sum,lcm);

    return {numer,denom};
}

RationalNumber RationalNumber::operator-(RationalNumber num) const {
    int lcm = (denominator*num.denominator)/ findGCD(denominator,num.denominator);
    int sum = (numerator*(lcm/denominator)) - (num.numerator*(lcm/num.denominator));

    int numer = sum/ findGCD(sum,lcm);
    int denom = lcm / findGCD(sum,lcm);

    return {numer,denom};
}

RationalNumber RationalNumber::operator*(RationalNumber num) const {
    int newNumerator = numerator * num.numerator;
    int newDenominator = denominator * num.denominator;

    int lcd = gcd(newNumerator,newDenominator);
    newNumerator = newNumerator / lcd;
    newDenominator = newDenominator / lcd;

    return {newNumerator,newDenominator};
}

RationalNumber RationalNumber::operator/(RationalNumber num) const {
    int newNumerator = numerator * num.denominator;
    int newDenominator = denominator * num.numerator;

    int lcd = gcd(newNumerator,newDenominator);
    newNumerator = newNumerator / lcd;
    newDenominator = newDenominator / lcd;

    return {newNumerator,newDenominator};
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

int findGCD(int n1, int n2)
{
    //https://prepinsta.com/cpp-program/to-add-two-fractions/
    int gcd;
    for(int i=1; i <= n1 && i <= n2; i++)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    return gcd;
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}




