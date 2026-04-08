#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> toppings = {"olive", "Mushrooms", "Onions", "pineapple"};
    vector<int> prices = {5, 2, 3, 4};
    int budget = 8;
    int n = toppings.size();

    cout << "Topping combinations within Rs " << budget << ": \n";

    // Iterate over all 2^n masks
    for (int mask = 0; mask < (1 << n); mask++) {
        int total_price = 0;
        vector<string> chosen_toppings;

        // Check each bit of the mask
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) { // Is the i-th topping included?
                total_price += prices[i];
                chosen_toppings.push_back(toppings[i]);
            }
        }

        if (total_price <= budget && !chosen_toppings.empty()) {
            cout << " Combo: ";
            for (const auto& t : chosen_toppings) cout << t << " ";
            cout << " | Price: Rs " << total_price << endl;
        }
    }

    return 0;
}