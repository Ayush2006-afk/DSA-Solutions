class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;

        // Count frequency
        for(char c : s) {
            mp[c]++;
        }

        // Store character and frequency
        vector<pair<char, int>> v(mp.begin(), mp.end());

        // Sort by decreasing frequency
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // Create answer
        string ans;

        for(auto &p : v) {
            ans.append(p.second, p.first);
        }

        return ans;
    }
};