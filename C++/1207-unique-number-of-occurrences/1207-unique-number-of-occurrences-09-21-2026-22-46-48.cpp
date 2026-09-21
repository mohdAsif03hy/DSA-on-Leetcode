class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int i = 0; i < arr.size(); i++) {
            freq[arr[i]]++;
        }
        unordered_set<int> seen;
        for (auto i : freq) {
            if (seen.count(i.second)) {
                return false;
            }
            seen.insert(i.second);
        }
        return true;
    }
};