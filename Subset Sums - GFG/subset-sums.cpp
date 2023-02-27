//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

    void sumSol(int index,vector<int> &ans, int sum,int n,vector<int> &arr){
        
        if(index==n){
            ans.push_back(sum);
            return;
        }
        
        // ds.push_back(arr[index]);
        sumSol(index+1,ans,sum+arr[index],n,arr);
        // ds,pop_back();
        sumSol(index+1,ans,sum,n,arr);
        
        
        
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;        
        sumSol(0,ans,0,N,arr);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends