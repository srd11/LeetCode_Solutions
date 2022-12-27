class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int ans=0;
        vector<int> count;
         for (int i = 0; i < capacity.size(); ++i) 
            count.push_back(capacity[i] - rocks[i]);
        
         sort(count.begin(),count.end());
         
         for(int i=0;i<count.size() && additionalRocks >= count[i];i++){
             additionalRocks -= count[i];
             ans++;
                 
         }
        
//         for(int i=0;i<capacity.size();i++){
           
//             for(int j=0;j<capacity[i];j++){
//                 if(additionalRocks==0)
//                     break;
                
//                 if(rocks[i]<capacity[i]){
//                     rocks[i]++;
//                     additionalRocks--;
//                 }                
//             }
//             if(capacity[i]==rocks[i]){
//                 ans++;
//             }
//         }
        return ans;
    }
};