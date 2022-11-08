#include "../inc/RationalNumber.h"
using namespace std;
int main() {
    string x = "9/10";
    string y = "5/6";
    RationalNumber rn1(x);

    cout << rn1 << endl;

    RationalNumber rn2(y);

    cout << rn2 << endl;


    RationalNumber rn3 = rn1 - rn2;

    cout << rn3 << endl;

    return 0;
}


