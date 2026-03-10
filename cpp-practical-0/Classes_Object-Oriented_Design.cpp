#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
private:
    string name;
    int studentNumber;
    vector<float> marks;

public:
    // parameterised constructor
    Student(const string &n, int num)
        : name(n), studentNumber(num) {}

    // add a mark to the record
    void addMark(float m) {
        marks.push_back(m);
    }

    float getAverage() const {
        if (marks.empty()) return 0.0f;
        float sum = 0;
        for (float m : marks) sum += m;
        return sum / marks.size();
    }

    float getHighest() const {
        if (marks.empty()) return 0.0f;
        return *max_element(marks.begin(), marks.end());
    }

    float getLowest() const {
        if (marks.empty()) return 0.0f;
        return *min_element(marks.begin(), marks.end());
    }

    void printReport() const {
        cout << "Academic report for " << name << " ("
                  << studentNumber << ")\n";
        cout << "Marks: ";
        for (float m : marks) cout << m << ' ';
        cout << "\n";
        cout << "Average: " << getAverage() << "\n";
        cout << "Highest: " << getHighest() << "\n";
        cout << "Lowest : " << getLowest() << "\n";
    }
};

int main() {
    Student s("Tashi Penjor", 2230306);
    s.addMark(78.5);
    s.addMark(92.0);
    s.addMark(64.5);
    s.addMark(81.0);
    s.addMark(55.5);

    s.printReport();
    return 0;
}