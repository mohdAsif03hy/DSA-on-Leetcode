class Trie {
public:
    struct Node {
        unordered_map<char, Node*> children;
        bool endofword = false;
    };
    Node* root;
    Trie() {
        root = new Node();
    }
    void insert(string word) {
        Node* temp = root;
        for (int i = 0; i < word.length(); i++) {
            if (temp->children.count(word[i]) == 0) {
                temp->children[word[i]] = new Node();
            }
            temp = temp->children[word[i]];
        }
        temp->endofword = true;
    }
    bool search(string word) {
        Node* temp = root;
        for (int i = 0; i < word.length(); i++) {
            if (temp->children.count(word[i])) {
                temp = temp->children[word[i]];
            } 
            else {
                return false;
            }
        }
        return temp->endofword;
    }
    bool startsWith(string prefix) {
        Node* temp = root;
        for (int i = 0; i < prefix.length(); i++) {
            if (temp->children.count(prefix[i])) {
                temp = temp->children[prefix[i]];
            } 
            else {
                return false;
            }
        }
        return true;
    }
};