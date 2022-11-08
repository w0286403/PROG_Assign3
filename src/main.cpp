#include "../inc/RationalNumber.h"
using namespace std;
int main() {
    string x = "1/2";
    string y = "1/6";
    RationalNumber rn1(x);

    cout << rn1 << endl;

    RationalNumber rn2(y);

    cout << rn2 << endl;


    RationalNumber rn3 = rn1 / rn2;

    cout << rn3 << endl;

    return 0;
}


