#include <iostream>
using namespace std;

int main() {
    // variables for user input
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    long long studentNumber;
    cout << "Enter your student number: ";
    cin >> studentNumber;

    int age;
    cout << "Enter your age: ";
    cin >> age;

    // current year using C time library
    time_t t = time(nullptr);
    tm *now = localtime(&t);
    int currentYear = now->tm_year + 1900;

    // birth year and year when user turns 100
    int birthYear = currentYear - age;
    int hundredYear = birthYear + 100;

    // display summary in formatted manner
    cout << "====================================" << endl;
    cout << "Summary" << endl;
    cout << "====================================" << endl;
    cout << "Name            : " << name << '\n';
    cout << "Student No  : " << studentNumber << '\n';
    cout << "Year of Birth      : " << birthYear << '\n';
    cout << "Year you turn 100: " << hundredYear << '\n';

    return 0;
}
