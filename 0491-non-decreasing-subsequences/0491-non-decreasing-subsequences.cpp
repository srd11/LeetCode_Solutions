class Solution {
public:
    
    void subsequences(vector<int> &nums,vector<int> &subsequence, set<vector<int>> &ansSet,int size,int index){
        if(size >= 2)
            ansSet.insert(subsequence);
            
        for(int i=index;i<nums.size();i++){
            if(subsequence.size() == 0 || nums[i] >= subsequence[subsequence.size()-1]){
                subsequence.push_back(nums[i]);
                subsequences(nums,subsequence,ansSet,size+1,i+1);
                subsequence.pop_back();
            }
        }
        
        
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> ansSet;
        int n = nums.size();
        vector<int> subsequence;
        subsequences(nums,subsequence,ansSet,0,0);
        vector<vector<int>> ans(ansSet.begin(),ansSet.end());
        return ans;
    }
};