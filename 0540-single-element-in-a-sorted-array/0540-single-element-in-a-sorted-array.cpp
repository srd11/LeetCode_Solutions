class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low=0,high=n-1;
        unordered_map<int,int> mp;
        
        for(auto i : nums){
            
            mp[i]++;
                
        }
        
        for(auto i: mp){
            if(i.second == 1)
                return i.first;
        }
        
//         while(low<=high){
            
//             if(nums[low] != nums[low+1])
//             {
//                 return nums[low];
//             }
            
//             if(nums[high] != nums[high-1]){
//                 return nums[high-1];
//             }
            
//             low += 2;
//             high -= 2;
//         }
//         return low;
        
        return 0;
    }
};