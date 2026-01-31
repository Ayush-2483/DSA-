class Trie {
public:
    struct TrieNode{
        TrieNode* child[26];
        bool flag;
        TrieNode(){
            flag=false;
            for(int i=0;i<26;i++){
                child[i]=nullptr;
            }
        }
    };
    TrieNode* root;
    Trie() {
        root=new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* node=root;
        for(char ch : word){
            int idx=ch-'a';
            if(node->child[idx]==nullptr){
                node->child[idx]=new TrieNode();
            }
            node=node->child[idx];
            
        }
        node->flag=true;
    }
    
    bool search(string word) {
        TrieNode *node=root;
        for(char ch: word){
            int idx=ch-'a';
            if(node->child[idx]==nullptr){
                return false;
            }
            node=node->child[idx];
        }
        return node->flag;
    }
    
    bool startsWith(string prefix) {
    TrieNode* node = root;
    for (char ch : prefix) {
        int idx = ch - 'a';
        if (node->child[idx] == nullptr) {
            return false;
        }
        node = node->child[idx];
    }
    return true;
}
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */