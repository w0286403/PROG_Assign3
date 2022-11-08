#include "../inc/RationalNumber.h"

using namespace std;
int main() {
    string num1,num2;
    bool willContinue = false;

    while (!willContinue) {
        try {
            cout << "Please enter the first fraction or a whole number to be processed. (e.g. 1/2,-12/4,42)" << endl;
            cout << "Please note decimal numbers are forbidden." << endl;
            getline(cin, num1);

            if (!regex_match(num1, regex("(-?[0-9]*)(/(-?[1-9][0-9]*))?")) || num1 == "-")
                throw invalid_argument("You have entered an invalid character. Fractions or whole numbers only.");


            if (num1.find('/') != string::npos)
                RationalNumber leftNumber(num1);
            else
                RationalNumber leftNumber(stoi(num1));

            cout << "Please enter the second fraction or a whole number to be processed. (e.g. 1/2,-12/4,42)" << endl;
            getline(cin, num2);

            if (!regex_match(num1, regex("(-?[0-9]*)(/(-?[1-9][0-9]*))?")) || num1 == "-" )
                throw invalid_argument("You have entered an invalid character. Fractions or whole numbers only.");


            if (num2.find('/') != string::npos)
                RationalNumber rightNumber(num2);
            else
                RationalNumber rightNumber(stoi(num2));

            willContinue = true;

        } catch (const invalid_argument &e) {
            cout << e.what() << endl;
        } catch (...) {
            cout << "An unknown error occurred." << endl;
        }
    }
    return 0;
}


