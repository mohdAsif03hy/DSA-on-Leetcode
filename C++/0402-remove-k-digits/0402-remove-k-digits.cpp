class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans = "";
        // Step 1: Remove bigger previous digits
        for (int i = 0; i < num.length(); i++) {
            while (!ans.empty() &&
                   k > 0 &&
                   ans.back() > num[i]) {
                ans.pop_back();
                k--;
            }
            ans.push_back(num[i]);
        }
        // Step 2: Agar k abhi bhi bacha hai
        // Example: "12345", k = 2
        // koi decreasing pair nahi mila,
        // to last ke digits remove karenge.
        while (k > 0 && !ans.empty()) {
            ans.pop_back();
            k--;
        }
        // Step 3: Leading zeros remove
        int i = 0;
        while (i < ans.length() && ans[i] == '0') {
            i++;
        }
        ans = ans.substr(i);
        // Step 4: Agar pura number 0 ho gaya
        if (ans.empty()) {
            return "0";
        }

        return ans;
    }
};