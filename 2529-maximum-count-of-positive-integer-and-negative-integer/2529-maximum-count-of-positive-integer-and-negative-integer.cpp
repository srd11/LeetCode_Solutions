class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int l=0,r=n-1,m=-1;
        if(nums[0] > 0 || nums[n-1]<0)
            return n;
        
        while(l<=r){
             m = (l +r)/2;
            
            if(nums[m] < 0){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        
        int neg=l;
        cout<<"beg="<<neg;
        
       
           while(l < nums.size() && nums[l] == 0){
            l++;
         
        }
        

        
        cout<<" l = "<<l;
        int pos=n-l;
        
        cout<<" pos="<<pos;
        
        return max(neg,pos);
    }
};


