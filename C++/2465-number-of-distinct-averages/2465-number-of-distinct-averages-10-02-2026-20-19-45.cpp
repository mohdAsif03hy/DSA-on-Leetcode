class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i =0;
        int j = nums.size()-1;
        set<float>ans;
        while(i<j){
           float  temp = ( nums[i] + nums[j]) / 2.0f;
           ans.insert(temp);
           i++;
           j--;
        }
        return ans.size();
    }
};