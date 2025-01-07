#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int longestWordChain(vector<string>& words) {
//         unordered_set<string> wordSet(words.begin(), words.end());
//         int maxChain = 1;
        
//         for (const string& word : words) {
//             maxChain = max(maxChain, findChainLength(word, wordSet));
//         }
        
//         return maxChain;
//     }
    
// private:
//     int findChainLength(const string& word, const unordered_set<string>& wordSet) {
//         string current = word;
//         int chainLength = 1;
        
//         while (true) {
//             current += 'a';  // Add any character temporarily
//             bool found = false;
            
//             for (char c = 'a'; c <= 'z'; c++) {
//                 current.back() = c;
//                 if (wordSet.find(current) != wordSet.end()) {
//                     chainLength++;
//                     found = true;
//                     break;
//                 }
//             }
            
//             if (!found) break;
//         }
        
//         return chainLength;
//     }
// };

// // Driver code
// int main() {
//     Solution sol;
    
//     // Test Case 1
//     vector<string> words1 = {"ben", "bent", "dew", "dents", "dent", "bet", "den"};
//     cout << "Test Case 1: " << sol.longestWordChain(words1) << endl;  // Expected: 3
    
//     // Test Case 2
//     vector<string> words2 = {"a", "ab", "abc", "abcd"};
//     cout << "Test Case 2: " << sol.longestWordChain(words2) << endl;  // Expected: 4
    
//     // Test Case 3
//     vector<string> words3 = {"cat", "cats", "catch"};
//     cout << "Test Case 3: " << sol.longestWordChain(words3) << endl;  // Expected: 3
    
//     return 0;
// }



vector<string> findWordChain(vector<string>& words) {
    vector<string> resultChain;
    
    if (words.empty()) {
        return resultChain;
    }

    // Sort words by length for easier processing
    sort(words.begin(), words.end(), 
        [](const string& a, const string& b) { 
            return a.length() < b.length(); 
        });

    // Find the shortest word length
    int baseLength = words[0].length();
    
    // Try each word as potential start of chain
    for (const string& word : words) {
        vector<string> currentChain;
        currentChain.push_back(word);
        
        string currentWord = word;
        for (const string& nextWord : words) {
            if (nextWord.length() == currentWord.length() + 1 && 
                nextWord.substr(0, currentWord.length()) == currentWord) {
                currentChain.push_back(nextWord);
                currentWord = nextWord;
            }
        }
        
        if (currentChain.size() > resultChain.size()) {
            resultChain = currentChain;
        }
    }
    
    return resultChain;
}

int main() {
    vector<string> input = {"ben", "bet", "bent", "bets", "den", "dent", "dents", "dets"};
    
    vector<string> result = findWordChain(input);
    
    cout << "Longest word chain: ";
    for (const string& word : result) {
        cout << word << " ";
    }
    cout << endl;
    
    return 0;
}
