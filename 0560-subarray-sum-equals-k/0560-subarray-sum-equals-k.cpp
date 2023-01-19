class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> cnt; 
        int sum=0;
        cnt[sum] = 1;

        int ans = 0;
        for (int ele : nums) {
            sum += ele;
            if (cnt[sum-k] > 0){
                ans += cnt[sum-k];
                // cout<<"ele="<<ele<<"Sum= "<<sum<<"Ans="<<ans<<"\n";

            }
            cnt[sum] ++;
        }
        return ans;
    }
};