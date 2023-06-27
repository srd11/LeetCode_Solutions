class Solution {
public:
     pair<int,vector<vector<int>>> p;
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
       

        vector<vector<int>> ans;
        int n = nums1.size();
        int m = nums2.size();
        
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        
        for(int i=0;i<n && i<k;i++){
            pq.push({nums1[i]+nums2[0],{i,0}});
        }
        
        while(k-- > 0 && !pq.empty()){
            int i = pq.top().second.first;
            int j = pq.top().second.second;
            
            pq.pop();
            
            vector<int> tmp = {nums1[i],nums2[j]};
            ans.push_back(tmp);
            
            if(j+1 == m)
                continue;
            
            pq.push({nums1[i]+nums2[j+1],{i,j+1}});
            // k--;
            // cout<<k<<" ";
        }
        return ans;
    }
};