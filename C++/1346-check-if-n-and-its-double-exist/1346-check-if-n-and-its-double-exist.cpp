class Solution {
public:
    bool isMultipleofTwo(int n, int current, vector<int>& arr) {
        for (int j = 0; j < arr.size(); j++) {

            if (j == current)
                continue;

            if (2 * n == arr[j])
                return true;
        }

        return false;
    }

    bool checkIfExist(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {

            if (isMultipleofTwo(arr[i], i, arr))
                return true;
        }

        return false;
    }
};