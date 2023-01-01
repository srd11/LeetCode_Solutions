class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        
        vector<int> ans,ans1;
        int flag=0;
        
        
        
        vector<long long int> primeno(right+1,0);
        primeno[0]=primeno[1]=1;
        
        for(long long int i=2;i<=right;i++){
            if(primeno[i]==0){
                for(long long int j=i*i;j<=right;j+=i)
                    primeno[j]=1;
            }
            
        }
        
        for(long long int i=left;i<=right;i++){
            if(primeno[i]==0){
                ans.push_back(i);
            }
        }
        // for(int i=left;i<=right;i++){
        //     flag=0;
        //     for(int j=2;j<=i/2;j++){
        //         if(i%j == 0)
        //         {
        //             flag=1;
        //             break;
        //         }
        //     }
        //     if(flag==0){
        //         ans.push_back(i);
        //     }
        // }
        
        if(ans.size()==1 || ans.size()==0)
            return {-1,-1};
        
        int temp=INT_MAX;
        int n=ans.size();
        
        
        for(long long int i=n-1;i>0;i--)
        {
            if(ans[i] - ans[i-1]<=temp)
            {
                temp=ans[i]-ans[i-1];
                ans1.clear();
                ans1.push_back(ans[i-1]);
                ans1.push_back(ans[i]);
            }
        }
        return ans1;
    }
};

