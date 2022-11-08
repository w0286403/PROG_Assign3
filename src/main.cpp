#include "../inc/RationalNumber.h"
using namespace std;
int main() {
    string num1,num2;

    cout << "Please enter the first fraction or a whole number to be processed. (e.g. 1/2,-12/4,42)" << endl;
    cout << "Please note decimal numbers are forbidden." << endl;
    getline(cin,num1);
    if (num1.find('/') != string::npos) {
        RationalNumber leftNumber(num1) ;
    }else{
        RationalNumber leftNumber(stoi(num1));
    }


    return 0;
}


