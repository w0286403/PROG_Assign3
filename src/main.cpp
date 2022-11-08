#include "../inc/RationalNumber.h"
using namespace std;
int main() {
    string x = "4/6";
    string y = "1/2";
    RationalNumber rn1(x);

    cout << rn1 << endl;

    RationalNumber rn2(y);

    cout << rn2 << endl;


    RationalNumber rn3 = rn1 - rn2;

    if (rn1 == rn2){
        cout << "Huzzah" << endl;
    }

    cout << rn3 << endl;

    return 0;
}


