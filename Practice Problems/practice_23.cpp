#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

// Memo to store max chain length starting from each word
unordered_map<string, int> dp;

// Function to find the length of the chain starting from a word
int getChainLength(string word, unordered_set<string>& wordSet) {
    if (dp.count(word)) return dp[word];

    int maxLen = 1;

    for (int i = 0; i < word.length(); i++) {
        string smaller = word.substr(0, i) + word.substr(i + 1);
        if (wordSet.count(smaller)) {
            maxLen = max(maxLen, 1 + getChainLength(smaller, wordSet));
        }
    }

    dp[word] = maxLen;
    return maxLen;
}

// Count how many starting words can form a chain
int countValidChains(vector<string>& words) {
    unordered_set<string> wordSet(words.begin(), words.end());
    int count = 0;

    for (string word : words) {
        // Try building a chain from this word
        if (getChainLength(word, wordSet) > 0) {
            count++;
        }
    }

    return count;
}

int main() {
    vector<string> words = {"a", "b", "ba", "bca", "bda","x", "bdca"};
    cout << "Number of valid chains: " << countValidChains(words) << endl;
    return 0;
}