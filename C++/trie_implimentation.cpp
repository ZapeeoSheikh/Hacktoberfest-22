    class TrieNode {
    public:
        char content;   // the character included
        bool isend;     // if the node is the end of a word
        int shared;     // the number of the node shared ,convenient to implement delete(string key), not necessary in this problem
        vector<TrieNode*> children; // the children of the node
        // Initialize your data structure here.
        TrieNode():content(' '), isend(false), shared(0) {}
        TrieNode(char ch):content(ch), isend(false), shared(0) {}
        TrieNode* subNode(char ch) {
            if (!children.empty()) {
                for (auto child : children) {
                    if (child->content == ch)
                        return child;
                }
            }
            return nullptr;
        }
        ~TrieNode() {
            for (auto child : children)
                delete child;
        }
    };
    
    class Trie {
    public:
        Trie() {
            root = new TrieNode();
        }
    
        // Inserts a word into the trie.
        void insert(string s) {
            if (search(s)) return;
            TrieNode* curr = root;
            for (auto ch : s) {
                TrieNode* child = curr->subNode(ch);
                if (child != nullptr) {
                    curr = child;
                } else {
                    TrieNode *newNode = new TrieNode(ch);
                    curr->children.push_back(newNode);
                    curr = newNode;
                }
                ++curr->shared;
            }
            curr->isend = true;
        }
    
        // Returns if the word is in the trie.
        bool search(string key) {
            TrieNode* curr = root;
            for (auto ch : key) {
                curr = curr->subNode(ch);
                if (curr == nullptr)
                    return false;
            }
            return curr->isend == true;
        }
    
        // Returns if there is any word in the trie
        // that starts with the given prefix.
        bool startsWith(string prefix) {
            TrieNode* curr = root;
            for (auto ch : prefix) {
                curr = curr->subNode(ch);
                if (curr == nullptr)
                    return false;
            }
            return true;
        }
        ~Trie() {
            delete root;
        }
    private:
        TrieNode* root;
    };
