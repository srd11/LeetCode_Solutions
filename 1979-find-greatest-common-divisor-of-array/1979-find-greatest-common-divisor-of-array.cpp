class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = *min_element(nums.begin(),nums.end());
        int m  = *max_element(nums.begin(),nums.end());
        int max=0;
        for( int i=1;i<=n;i++){
            if(n%i==0 && m%i==0)
            {
                if(i>max)
                    max=i;
            }
        }
        // return gcd(n,m);
        return max;

    }
};