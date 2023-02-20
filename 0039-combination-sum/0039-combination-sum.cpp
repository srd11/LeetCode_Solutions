class Solution {
public:
    
    void findCombinations(int index, int target, vector<int> &arr, vector<vector<int>> &res, vector<int> &seq ){
        if(index == arr.size()){
            if(target == 0)
                res.push_back(seq);
            return;
        }
        
        if(arr[index] <= target){
            seq.push_back(arr[index]);
            findCombinations(index,target - arr[index],arr,res,seq);
            seq.pop_back();
        }
        
        findCombinations(index+1,target,arr,res,seq);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> seq;
        findCombinations(0,target,candidates,res,seq);
            
        return res;
    }
};