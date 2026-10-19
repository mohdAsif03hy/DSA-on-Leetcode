class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        map<int, int> temp;
        for (int i : arr) {
            temp[i]++;
        }
        sort(arr.begin(), arr.end(),
             [](int a, int b) { return abs(a) < abs(b); });
        for (int i = 0; i < arr.size(); i++) {
            if (temp[arr[i]] == 0) {
                continue;
            }
            if (temp[arr[i]] == 0 || temp[2 * arr[i]] == 0) {
                return false;
            } else {
                temp[arr[i]]--;
                temp[2 * arr[i]]--;
            }
        }
        return true;
    }
};