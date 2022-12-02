class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        if(word1.size()!=word2.size())
            return false;
        
        set<char> s1,s2;
        vector<int> cnt1(26,0),cnt2(26,0);
        
        for(int i=0;i<word1.size();i++){
            s1.insert(word1[i]);
            s2.insert(word2[i]);
            
            cnt1[word1[i]-'a']++;
            cnt2[word2[i]-'a']++;
            
        }
        
        sort(cnt1.begin(),cnt1.end());
        sort(cnt2.begin(),cnt2.end());
        
        if(s1==s2 && cnt1==cnt2 )
            return true;
        else 
            return false;
    }
       
};

 
