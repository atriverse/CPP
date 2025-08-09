#include <bits/stdc++.h>
struct State {
    int cur;           // current sum mod 10
    int idx;           // index in config string matched so far
    string seq;        // current built final configuration string
};

string minConfig(const string& config, int x, int y) {
    int n = (int)config.size();
    
    // Check first character of config matches either x or y digit
    char first = config[0];
    vector<int> starts;
    int x_digit = x % 10;
    int y_digit = y % 10;
    if (first == char('0'+x_digit)) starts.push_back(x);
    if (first == char('0'+y_digit) && y != x) starts.push_back(y);
    if (starts.empty()) return "-1"; // no valid start matches

    // BFS queue
    queue<State> q;
    // map to store minimal sequence string for a state (cur, idx)
    map<pair<int,int>, string> visited;

    for (int startAdd : starts) {
        int cur = startAdd % 10;
        string seq = to_string(cur);
        int idx = 1; // first character matched as per problem statement
        q.push({cur, idx, seq});
        visited[{cur, idx}] = seq;
    }

    while(!q.empty()) {
        State s = q.front(); q.pop();

        // If matched whole given config
        if (s.idx == n) {
            // We found a valid final configuration string (s.seq) with digits after additions
            // Now search for minimal decimal value solution in BFS order guarantees minimal length,
            // but we must ensure lex smallest among equal lengths. We stored and pruned that below.
            return s.seq;
        }

        // Try adding x
        int nextCur = (s.cur + x) % 10;
        char nextDigit = '0' + nextCur;
        string nextSeq = s.seq + nextDigit;
        int nextIdx = s.idx;

        // If nextDigit matches the current config character, advance config index
        if (nextIdx < n && config[nextIdx] == nextDigit) nextIdx++;

        auto key = make_pair(nextCur, nextIdx);
        // Keep track of lex minimal sequence for same state
        if (!visited.count(key) || nextSeq < visited[key]) {
            visited[key] = nextSeq;
            q.push({nextCur, nextIdx, nextSeq});
        }

        // Try adding y
        nextCur = (s.cur + y) % 10;
        nextDigit = '0' + nextCur;
        nextSeq = s.seq + nextDigit;
        nextIdx = s.idx;
        if (nextIdx < n && config[nextIdx] == nextDigit) nextIdx++;

        key = make_pair(nextCur, nextIdx);
        if (!visited.count(key) || nextSeq < visited[key]) {
            visited[key] = nextSeq;
            q.push({nextCur, nextIdx, nextSeq});
        }
    }
    return "-1";
}