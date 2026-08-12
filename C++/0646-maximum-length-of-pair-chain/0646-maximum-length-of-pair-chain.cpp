class Solution {
public:

    bool compare(vector<int> p1, vector<int> p2)
    {
        return p1[1] < p2[1];
    }

    int findLongestChain(vector<vector<int>>& pairs)
    {
        int n = pairs.size();

        sort(pairs.begin(), pairs.end(),
             [this](vector<int> p1, vector<int> p2) {
                 return compare(p1, p2);
             });

        int ans = 1;
        int currEnd = pairs[0][1];

        for (int i = 1; i < n; i++)
        {
            if (pairs[i][0] > currEnd)
            {
                ans++;
                currEnd = pairs[i][1];
            }
        }

        return ans;
    }
};