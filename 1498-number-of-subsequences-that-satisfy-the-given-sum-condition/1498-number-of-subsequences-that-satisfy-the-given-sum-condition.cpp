class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        const int MOD = 1000000007;
        vector<int> exponents(nums.size(), 1);
        for(int i = 1; i < exponents.size(); ++i) {
            exponents[i]  = (2 * exponents[i - 1]) % MOD;
        }
        
       
        sort(nums.begin(), nums.end());
        
        int left = 0, right = nums.size() - 1, count = 0;
        
        while(left <= right) {
            if(nums[left] + nums[right] > target) {
                right--;
            }
            else {
                
                
                count = (count + exponents[right - left] )% MOD;
                left++;
            }
        }
        return (int) count;
    }
};