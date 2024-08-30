

class TrieNode {
public:
    char data;
    TrieNode* children[26];
    int childCount;
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        childCount = 0;
        isTerminal = false;
    }
};

class Solution {
public:
    TrieNode* root;

    Solution() {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word) {
        if (word.length() == 0) {
            root->isTerminal = true;
            return;
        }

        int index = tolower(word[0]) - 'a'; // Convert to lowercase
        TrieNode* child;

        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->childCount++;
            root->children[index] = child;
        }

        insertUtil(child, word.substr(1));
    }

    void insertWord(string word) {
        insertUtil(root, word);
    }

    string lcp(TrieNode* node, string str, string &ans) {
        TrieNode* current = node;

        for (int i = 0; i < str.length(); i++) {
            char ch = tolower(str[i]); // Convert to lowercase
            if (current->childCount == 1) {
                ans.push_back(ch);
                int index = ch - 'a';
                current = current->children[index];
            } else {
                break;
            }
            if (current->isTerminal) {
                break;
            }
        }
        return ans;
    }

    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        for (const auto& word : strs) {
            if (word.empty()) return ""; // Handle empty string
        }

        for (int i = 0; i < strs.size(); i++) {
            insertWord(strs[i]);
        }

        string first = strs[0];
        string ans = "";
        return lcp(root, first, ans);
    }
};
