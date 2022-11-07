#include "../inc/RationalNumber.h"
using namespace std;
int main() {
    string x = "3/4";
    RationalNumber Z(x);

    cout << Z << endl;

    RationalNumber y("5/6");

    y + Z;

    cout << y << endl;

    return 0;
}
