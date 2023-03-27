class Trie {
public:
    Trie* children[26];
    bool leaf = false;
    Trie() {
        fill(children, children+26, nullptr);
    }
    
    void insert(string_view word) {
        if (word.size() == 0){
            leaf = true;
            return;
        }
            
        char curr_char = word.at(0);
        if (!children[curr_char - 'a']) {
            children[curr_char - 'a'] = new Trie();
        } 
        word.remove_prefix(1);
        children[curr_char - 'a']->insert(word);
    }
    
    bool search(string_view word) {
        if (word.size() == 0)
            return leaf;
        
        char curr_char = word.at(0);
        if (!children[curr_char - 'a'])
            return false;
        
        word.remove_prefix(1);
        return children[curr_char-'a']->search(word);
    }
    
    bool startsWith(string_view prefix) {
        if (prefix.size() == 0)
            return true;
        
        char curr_char = prefix.at(0);
        if (!children[curr_char - 'a'])
            return false;
        
        prefix.remove_prefix(1);
        return children[curr_char-'a']->startsWith(prefix);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */