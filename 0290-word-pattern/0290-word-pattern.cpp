class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,int> pa;
        unordered_map<string,int> str;
        
        istringstream in(s);
        
        string word;
        int i=0;
        int n=pattern.size();
        
        for(word;in>>word;i++){
            if(i==n || pa[pattern[i]] != str[word])
                return false;
            
            pa[pattern[i]]=str[word]=i+1;
        }
        return i==n;
    }
};

