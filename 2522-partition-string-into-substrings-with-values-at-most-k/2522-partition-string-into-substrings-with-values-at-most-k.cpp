class Solution {
public:
    int minimumPartition(string s, int k) {
        int ans=0;
        string str;
        int n=s.size();
        for(int i=0;i<n;i++){
            str.push_back(s[i]);
            if(stol(str)>k){
                str="";
                str.push_back(s[i]);
                if(stoi(str)>k){
                    return -1;
                }
                ans++;
            }
        }
        return ans+1;
    }
};