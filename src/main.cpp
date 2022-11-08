#include "../inc/RationalNumber.h"

using namespace std;
int main() {
    string num1,num2;
    bool willContinue = false;
    RationalNumber x(-42);
    RationalNumber y(12,-3);
    RationalNumber z;

    while (!willContinue) {
        try {
//FIRST NUMBER ENTRY
            cout << "Please enter the first fraction or a whole number to be processed. (e.g. 1/2,-12/4,42)" << endl;
            cout << "Please note decimal numbers are forbidden." << endl;
            getline(cin, num1);

            if (!regex_match(num1, regex("(-?[0-9]*)(/(-?[1-9][0-9]*))?")) || num1 == "-")
                throw invalid_argument("You have entered an invalid character. Fractions or whole numbers only.");


            if (num1.find('/') == string::npos) num1.append("/1");

            RationalNumber leftNumber(num1);
 //SECOND NUMBER ENTRY
            cout << "Please enter the second fraction or a whole number to be processed. (e.g. 1/2,-12/4,42)" << endl;
            getline(cin, num2);

            if (!regex_match(num1, regex("(-?[0-9]*)(/(-?[1-9][0-9]*))?")) || num1 == "-" )
                throw invalid_argument("You have entered an invalid character. Fractions or whole numbers only.");


            if (num2.find('/') == string::npos) num2.append("/1");

            RationalNumber rightNumber(num2);

 //OPERATIONS
            cout << "You Typed:" << endl;
            cout << leftNumber << endl;
            cout << rightNumber << endl;

            z = leftNumber + rightNumber;
            cout << z << endl;

            z = leftNumber - rightNumber;
            cout << z << endl;

            z = leftNumber * rightNumber;
            cout << z << endl;

            z = leftNumber / rightNumber;
            cout << z << endl;

            if (leftNumber > rightNumber) cout << "Left number is greater!" << endl;

            if (leftNumber < rightNumber) cout << "Right number is greater!" << endl;

            if (leftNumber == rightNumber) cout << "They are the same value!" << endl;

        } catch (const invalid_argument &e) {
            cout << e.what() << endl;
        } catch (...) {
            cout << "An unknown error occurred." << endl;
        }

        cout << "Do you wish to go again? (Y/N)" << endl;
        string goAgain;
        cin >> goAgain;
        goAgain == "Y" ? willContinue = false : willContinue = true;
    }
    cout << x << "\n" << y << "\n" << z << "\n" << endl;

    return 0;
}


