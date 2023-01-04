class Solution {
public:
    string oddString(vector<string>& words) {
        
        int n=words.size();
        int n1=words[0].size();
        string ans;
        
        
        map<vector<int>,vector<string> > m;
        
        for(int i=0;i<n;i++){
            vector<int> v;
            for(int j=0;j<n1-1;j++){
                v.push_back(words[i][j+1] - words[i][j]);
            }
            
            m[v].push_back(words[i]);
        }
        
        
        for(auto &it:m){
            
            if(it.second.size()==1)
                ans=it.second[0];
        }
        return ans;
    }
};


