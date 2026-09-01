class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0] = 1;
        int sum =0;
        int ans =0;
        for(int j=0;j<nums.size();j++){
                sum+=nums[j];
            if(m.count(sum-k)){
                ans += m[sum-k];
            }

            if(m.count(sum)){
                m[sum]++;
            }else{
                m[sum] = 1;
            }
        }
        return ans;
    }
};