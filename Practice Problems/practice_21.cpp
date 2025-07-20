#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxBalancedShipments(vector<int>& weights) {
    int count = 0;
    int n = weights.size();
    int i = 0;

    while (i < n) {
        int maxVal = weights[i];
        bool found = false;

        // Try to form a valid balanced shipment starting from i
        for (int j = i + 1; j < n; ++j) {
            maxVal = max(maxVal, weights[j]);

            // Check if last element is not max (i.e., balanced)
            if (weights[j] != maxVal) {
                count++;
                i = j + 1; // Move to the next parcel
                found = true;
                break;
            }
        }

        // If no valid shipment was found, break
        if (!found) break;
    }

    return count;
}

int main() {
    vector<vector<int>> testCases = {
        {1, 2, 3, 2, 6, 3},
        {7, 7, 7},
        {5, 3, 5},
        {3, 6, 3}
    };
    vector<int> expected = {2, 0, 1, 1};

    for (int i = 0; i < testCases.size(); ++i) {
        int result = maxBalancedShipments(testCases[i]);
        cout << "Test Case " << i + 1 << ": ";
        cout << "Output = " << result << ", Expected = " << expected[i];
        cout << (result == expected[i] ? " ✅" : " ❌") << endl;
    }

    return 0;
}
