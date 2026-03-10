#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 

using namespace std;
int main() {
    vector<int> v2230306;

    cout << "Enter 6 integer values:\n";
    for (int i = 0; i < 6; ++i) {
        int x;
        cin >> x;
        v2230306.push_back(x);
    }

    auto printVec = [&](const vector<int>& v) {
        for (int num : v) cout << num << ' ';
        cout << '\n';
    };

    cout << "Initial contents: ";
    printVec(v2230306);

    // sort ascending
    sort(v2230306.begin(), v2230306.end());
    cout << "After sorting:    ";
    printVec(v2230306);

    // min, max, sum
    if (!v2230306.empty()) {
        int minv = *min_element(v2230306.begin(), v2230306.end());
        int maxv = *max_element(v2230306.begin(), v2230306.end());
        int sum  = accumulate(v2230306.begin(), v2230306.end(), 0);
        double avg = static_cast<double>(sum) / v2230306.size();

        cout << "Minimum value: " << minv << '\n';
        cout << "Maximum value: " << maxv << '\n';
        cout << "Sum of values: " << sum << '\n';
        cout << "Average: " << avg << '\n';

        // remove values below average
        v2230306.erase(
            remove_if(v2230306.begin(), v2230306.end(),
                           [&](int val){ return val < avg; }),
            v2230306.end());

        cout << "After removing below-average: ";
        printVec(v2230306);
    }

    return 0;
}
