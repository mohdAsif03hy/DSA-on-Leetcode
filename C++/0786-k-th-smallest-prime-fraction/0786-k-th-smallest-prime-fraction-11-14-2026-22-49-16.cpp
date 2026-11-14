class Solution {
public:

    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n = arr.size();
        auto cmp = [&](pair<int,int>& a, pair<int,int>& b) {
            return arr[a.first] * arr[b.second] >
                   arr[b.first] * arr[a.second];
        };
        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            decltype(cmp)
        > pq(cmp);
        // Initially smallest fraction of each numerator
        for(int i = 0; i < n - 1; i++) {
            pq.push({i, n - 1});
        }
        // Extract k-1 smallest fractions
        while(k > 1) {

            auto p = pq.top();
            pq.pop();

            int i = p.first;
            int j = p.second;

            if(j - 1 > i) {
                pq.push({i, j - 1});
            }

            k--;
        }

        auto ans = pq.top();

        return {arr[ans.first], arr[ans.second]};
    }
};