#include <iostream>
#include <algorithm>  // for max_element/min_element
using namespace std;


int main() {

    int tashi_marks[5] = {72, 85, 63, 90, 77};

    int size = 5;

    // displaying all marks with index
    cout << "Marks with index:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Index " << i << ": " << tashi_marks[i] << '\n';
    }
    cout << '\n';

    // finding highest and lowest using std algorithms
    int highest = *max_element(tashi_marks, tashi_marks + size);
    int lowest  = *min_element(tashi_marks, tashi_marks + size);

    // calculating average
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += tashi_marks[i];
    }
    double average = static_cast<double>(sum) / size;

    // counting above average
    int aboveCount = 0;
    for (int i = 0; i < size; ++i) {
        if (tashi_marks[i] > average) {
            ++aboveCount;
        }
    }

    // displaying statistics
    cout << "Highest mark: " << highest << '\n';
    cout << "Lowest  mark: " << lowest << '\n';
    cout << "Average mark: " << average << '\n';
    cout << "Marks above average: " << aboveCount << '\n';

    return 0;

    }

    
