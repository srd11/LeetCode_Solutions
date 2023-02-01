
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int n = nums1.size();
        int m = nums2.size();
        vector<int> mergeVec(n+m);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),mergeVec.begin());
        
        sort(mergeVec.begin(),mergeVec.end());
        
        if((m+n) % 2 == 0){
            int num = (m+n)/2;
            double ans;
            double a = mergeVec[num];
            double b = mergeVec[num-1];
                // ans = (mergeVec[num]+mergeVec[num-1])/2;
            ans = (a+b)/2;

            // cout<<ans;
            return ans ;
        }
        else{
            return mergeVec[((m+n)/2)];

        }
        
        
    }
};