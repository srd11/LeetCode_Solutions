class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        map<int,int> mp;
        set<int> unq;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        
        for(auto i:mp){
             for (auto& c : mp) 
                 unq.insert(c.second); 
        }
        return mp.size()==unq.size();
    }
};