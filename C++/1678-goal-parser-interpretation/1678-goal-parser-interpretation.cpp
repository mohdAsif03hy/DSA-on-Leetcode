class Solution {
public:
    string interpret(string command) {
        int i = 0;
        string ans = "";
        while (i < command.length()) {
            if (command[i] == 'G'){
                char ch = command[i];
                i++;
                ans.push_back(ch);
            }else if(command[i] == '(' && command[i+1] == ')'){
                ans.push_back('o');
                i +=2;
            }else if(command[i] == '(' && command[i+1] == 'a'){
                ans += "al";
                i +=4;
            }
        }
        return ans;
    }
};