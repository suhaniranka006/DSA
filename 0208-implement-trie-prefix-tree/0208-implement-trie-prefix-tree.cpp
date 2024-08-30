class TrieNode {
public:
    TrieNode *children[26];
    char data;
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }

    ~TrieNode() {
        for (int i = 0; i < 26; i++) {
            if (children[i] != NULL) {
                delete children[i];
            }
        }
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode('\0');
    }

    ~Trie() {
        delete root;
    }

    void insertUtil(TrieNode* root, const std::string& word) {
        if (word.length() == 0) {
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'a';
        if (index < 0 || index >= 26) return; // Handle non-lowercase alphabet

        TrieNode* child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        insertUtil(child, word.substr(1));
    }

    void insert(const std::string& word) {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode* root, const std::string& word) const {
        if (word.length() == 0) {
            return root->isTerminal;
        }

        int index = word[0] - 'a';
        if (index < 0 || index >= 26) return false; // Handle non-lowercase alphabet

        TrieNode* child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            return false;
        }

        return searchUtil(child, word.substr(1));
    }

    bool search(const std::string& word) const {
        return searchUtil(root, word);
    }

    bool stUtil(TrieNode* root, const std::string& prefix) const {
        if (prefix.length() == 0) {
            return true;
        }

        int index = prefix[0] - 'a';
        if (index < 0 || index >= 26) return false; // Handle non-lowercase alphabet

        TrieNode* child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            return false;
        }

        return stUtil(child, prefix.substr(1));
    }

    bool startsWith(const std::string& prefix) const {
        return stUtil(root, prefix);
    }
};


/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */