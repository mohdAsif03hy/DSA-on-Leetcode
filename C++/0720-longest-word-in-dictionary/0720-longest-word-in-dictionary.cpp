class Solution {
public:

    struct Node {
        char data;
        bool isEnd;
        vector<pair<char, Node*>> children;

        Node(char ch) {
            data = ch;
            isEnd = false;
        }
    };

    void insert(Node* root, string word) {

        for (char ch : word) {

            Node* next = nullptr;

            for (auto child : root->children) {
                if (child.first == ch) {
                    next = child.second;
                    break;
                }
            }

            if (next == nullptr) {
                next = new Node(ch);
                root->children.push_back({ch, next});
            }

            root = next;
        }

        root->isEnd = true;
    }

    void longestHelper(Node* root, string &ans, string temp) {

        for (auto child : root->children) {

            if (child.second->isEnd) {

                temp += child.first;

                if (temp.size() > ans.size() ||
                   (temp.size() == ans.size() && temp < ans)) {
                    ans = temp;
                }

                longestHelper(child.second, ans, temp);

                temp = temp.substr(0, temp.size() - 1);
            }
        }
    }

    string longestWord(vector<string>& words) {

        Node* root = new Node('#');

        for (string word : words) {
            insert(root, word);
        }

        string ans = "";
        string temp = "";

        longestHelper(root, ans, temp);

        return ans;
    }
};