#include <iostream>
using namespace std;

int main() {
    
    int studentNumber = 2230306;
    int sumofstdno = studentNumber;
    int sum = 0;
    while (sumofstdno > 0) {
        sum += sumofstdno % 10;    
        sumofstdno /= 10;          
    }

    bool isEvenorodd = (studentNumber % 2 == 0);
    int dividedby7 = studentNumber % 7;
    int multipliedby3 = studentNumber * 3;

    cout << "===================================" << endl;
    cout << "Arithmetic with Student Number" << endl;
    cout << "===================================" << endl;
    cout << "Student number: " << studentNumber << endl;
    cout << "Digit sum: " << sum << endl;
    cout << "Odd / Even:"  << (isEvenorodd ? "Even" : "Odd") << endl;
    cout << "Remainder ( % 7) : " << dividedby7 << endl;
    cout << "Multiplied by 3: " << multipliedby3 << endl;

    return 0;
}
