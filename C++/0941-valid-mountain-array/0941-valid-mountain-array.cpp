class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n <=2){
            return false;
        }
        int j = 0;
        for(int i =1 ;i<n;i++){
            if(arr[i] > arr[j]){
                j++;
            }else {
                break;
            }
            
        }
        if(j == 0 || j == n-1){
            return false;
        }
        
        for(int i =j+1;i< n;i++){
            if(arr[i] < arr[j]){
                j++;
            }else{
                return false;
            }
            
        }
        return true;
        
    }
};