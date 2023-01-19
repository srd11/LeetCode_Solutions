class Solution {
    public int maxSubarraySumCircular(int[] nums) {
        int n=nums.length;
        int total=0;
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        int minSum=kadaneMin(nums);
        int maxSum=kadaneMax(nums);
        
        if(minSum==total)
            return maxSum;
        else
            return Math.max(maxSum,total-minSum);
        
    }
    
    int kadaneMin(int arr[]){
        int curr=arr[0];
        int min=arr[0];
        
        for(int i=1;i<arr.length;i++){
            if(curr+arr[i] < arr[i]){
                curr += arr[i];
            }
            else{
                curr=arr[i];
            }
            min=Math.min(min,curr);
        }
        
        return min;
    }
    
    int kadaneMax(int arr[]){
        int curr=arr[0];
        int max=arr[0];
        
        for(int i=1;i<arr.length;i++){
            if(curr+arr[i] > arr[i]){
                curr += arr[i];
            }
            else{
                curr=arr[i];
            }
            max=Math.max(max,curr);
        }
        
        return max;
    }
}