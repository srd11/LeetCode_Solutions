class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       vector<int>::iterator it;
        
//             int j=nums.size();
//             int i=0;
//             while(j!=0)
//             {
//                 /* code */
//                 if(nums[i]==0 && i<nums.size()){
//                 it = nums.begin()+i;
//                 nums.erase(it);
//                 nums.push_back(0);
    
//                 }
//                 else
//                     i++;
//                 j--;
//             }
        
        
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j] !=0){
                swap(nums[j],nums[i++]);
            }
        }
    }
};