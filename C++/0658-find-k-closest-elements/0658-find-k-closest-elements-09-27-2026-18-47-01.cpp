class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        vector<pair<int,int>> v;
        for (int i = 0; i < arr.size(); i++) {
            v.push_back({abs(arr[i] - x), i});
        }
        sort(v.begin(), v.end());
        int i = 0;
        for (auto it : v) {
            if (i >= k)
                break;

            ans.push_back(arr[it.second]);
            i++;
        }
        sort(ans.begin(), ans.end());

        return ans;
    }
};