class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        vector<int> mp(26,0);
        for(auto t: words){
            for(auto i : t){
                mp[i-'a']++;
            }
        }
        
        for(int i=0;i<26;i++){
            if(mp[i] % words.size() != 0)
                return false;
        }
        return true;
    }
};

