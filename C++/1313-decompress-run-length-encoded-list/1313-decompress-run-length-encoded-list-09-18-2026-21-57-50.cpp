class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>ans;
        for(int i = 0; i < nums.size(); i += 2){
            int k = nums[i];
            int temp = nums[i+1];
            for(int l = 0 ;l <k;l++){
                ans.push_back(temp);
            }
        }
        return ans;
    }
};