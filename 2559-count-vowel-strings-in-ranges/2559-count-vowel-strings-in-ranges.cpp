class Solution {
public:
    bool isVowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' ||
        x == 'o' || x == 'u' || x == 'A' ||
        x == 'E' || x == 'I' || x == 'O' || x == 'U')
        return true;
    else
        return false;
}
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>pref(words.size()+1);
        int i=0;
        for(auto x:words){
            
                pref[i+1]=pref[i]+(isVowel(x[0]) and isVowel(x[x.size()-1]));
            i++;
           
        }
        vector<int> ans;
        for (int i = 0; i < queries.size(); i++) {
            ans.push_back(pref[queries[i][1] + 1] - pref[queries[i][0]]);
        }
        return ans;
        
    }
};
























// class Solution {
// public:
//     vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        
//         int  n = words.size();
//         int m = queries.size();
//         vector<int> ans1(n,0);
//         vector<int> ans(m);

//         for(int j=0;j<n;j++){
//                 string s = words[j];
//                 if(s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u'){
//                     int n1 = s.size();
//                     n1--;
//                     if(s[n1] == 'a' || s[n1] == 'e' || s[n1] == 'i' || s[n1] == 'o' || s[n1] == 'u'){
//                         ans1[j]++;
//                     }
//                 }
//             }
        
//         for(int i=1;i<n;i++){
//             ans1[i]=ans1[i-1]+ans1[i];
//         }
        
//         for(int i=0;i<m;i++){
//             int l = queries[i][0];
//             int r = queries[i][1];
            
            
        
//             int temp = ans1[r];
//             if(l == 0){
//                 ans[i] = temp;
//             }
//             else if( l == r){
//                     int num = ans1[l]-ans1[l-1];
//                     ans[i] = num;

//             }
//             else
//             {
//                 int num = ans1[l]-ans1[l-1];
//                 if(num == 0 && ans1[l]>0){
//                       ans[i] = temp - 1;
//                 }
//                 else
//                 ans[i] = temp-num;
//             }
//         }
//         return ans;
        
        
// //         for(int i=0;i<m;i++){
// //             int l = queries[i][0];
// //             int r = queries[i][1];
            
// //             for(int j=l;j<=r;j++){
// //                 string s = words[j];
// //                 if(s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u'){
// //                     int n1 = s.size();
// //                     n1--;
// //                     if(s[n1] == 'a' || s[n1] == 'e' || s[n1] == 'i' || s[n1] == 'o' || s[n1] == 'u'){
// //                         ans[i]++;
// //                     }
// //                 }
// //             }
// //         }
// //         return ans;
//     }
// };