#include <iostream>
using namespace std;

int main() {
    // first name variable (hardcoded)
    string firstName = "Tashi";

    // 1. print first name N times where N = length of first name
    int n = firstName.length();
    cout << "Printing first name " << n << " times:\n";
    for (int i = 0; i < n; ++i) {
        cout << firstName << '\n';
    }
    cout << '\n';

    // 2. nested loop to print right-angled triangle of asterisks
    int height = firstName.length();
    cout << "Triangle of height " << height << ":\n";
    for (int row = 1; row <= height; ++row) {
        for (int col = 0; col < row; ++col) {
            cout << '*';
        }
        cout << '\n';
    }
    cout << '\n';

    // 3. multiplication table for last digit of student number
    int studentNumber = 2230306;
    int lastDigit = studentNumber % 10;
    cout << "Multiplication table for " << lastDigit << ":\n";
    for (int i = 1; i <= 10; ++i) {
        cout << lastDigit << " x " << i << " = " << (lastDigit * i) << '\n';
    }

    return 0;
}