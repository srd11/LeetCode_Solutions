class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        int n=tasks.size();
        for(int i=0;i<n;i++){
            mp[tasks[i]]++;
        }
        
          
        int ans=0;
        for(auto i:mp){
            if(i.second == 1 )
                return -1;
            if(i.second % 3==0){
                ans += i.second/3;
            }
            else{
                 ans += i.second/3+1;
            }
            
        }
        return ans;
    }
};