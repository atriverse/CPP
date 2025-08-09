#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> processOperationsOptimized(int n, vector<vector<int>>& operations) {
        vector<int> arr(n, 0);
        vector<int> result;

        // Initial count of consecutive duplicates ignoring zeros
        int consecutiveCount = 0;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] != 0 && arr[i] == arr[i + 1]) {
                consecutiveCount++;
            }
        }

        for (auto& op : operations) {
            int index = op[0];
            int newValue = op[1];
            int oldValue = arr[index];

            // Before update: remove pairs including old value if non-zero and duplicates
            if (index > 0 && arr[index - 1] != 0 && arr[index - 1] == oldValue) {
                consecutiveCount--;
            }
            if (index < n - 1 && arr[index + 1] != 0 && arr[index + 1] == oldValue) {
                consecutiveCount--;
            }

            // Update the value
            arr[index] = newValue;

            // After update: add pairs including new value if non-zero and duplicates
            if (index > 0 && arr[index - 1] != 0 && arr[index - 1] == newValue) {
                consecutiveCount++;
            }
            if (index < n - 1 && arr[index + 1] != 0 && arr[index + 1] == newValue) {
                consecutiveCount++;
            }

            result.push_back(consecutiveCount);
        }

        return result;
    }
};

int main() {
    Solution sol;

    int n = 5;
    vector<vector<int>> operations = {{2, 5}, {1, 5}, {0, 2}, {2, 2},{1,6}};
    vector<int> result = sol.processOperationsOptimized(n, operations);

    for (int count : result) {
        cout << count << " ";
    }
    cout << endl;

    return 0;
}
