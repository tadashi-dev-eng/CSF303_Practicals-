#include <iostream>
using namespace std;

int main() {
    // hardcoded student details
    string studentName = "Tashi";
    int studentNumber = 2230306;

    int mark;

    cout << "Enter your mark (0-100): ";
    cin >> mark;

    // validate input range
    if (mark < 0 || mark > 100) {
        cout << "Error: mark must be between 0 and 100." << endl;
        return 1;
    }

    // classification
    string classification;
    if (mark >= 75) {
        classification = "Distinction";
    } else if (mark >= 60) {
        classification = "Merit";
    } else if (mark >= 40) {
        classification = "Congratulations, " + studentName + "! You have passed!";
    } else {
        classification = "Fail";
    }

    // output personalized result
    cout << "Student: " << studentName << " (" << studentNumber << ")" << endl;
    cout << "Mark   : " << mark << endl;
    cout << "Result : " << classification << endl;

    return 0;
}
