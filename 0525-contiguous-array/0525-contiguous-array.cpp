class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        mp.insert({0,-1});
        int preSum=0,ans=0;
        
        for(int i=0;i<n;i++){
            
            preSum += (nums[i]== 0 ? -1:1);
            if(mp.find(preSum) != mp.end()){
                ans = max(ans,i-mp[preSum]);
            }
            else{
                mp.insert({preSum,i});
            }
        }
        return ans;
    }
};



