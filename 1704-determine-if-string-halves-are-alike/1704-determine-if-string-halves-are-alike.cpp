class Solution {
public:
    
//     bool check(char c){
//         if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c== 'E' || c=='I' || c=='O' || c=='U')
//             return true;
//         else
//             return false;
//     }
    
//     bool halvesAreAlike(string s) {
//         int f_cnt=0,s_cnt=0;
//         int i=0,j=s.size()-1;
        
//         for(int k=0;k=s.size()/2;k++){
//             if(check(s[i++])){
//                 f_cnt++;
//             }
//             if(check(s[j--])){
//                 s_cnt++;
//             }
//         }
//         return f_cnt==s_cnt;
    bool halvesAreAlike(string s) {
        int t=0;
        for(int i=0;i<s.size();i++)
        {   
            s[i]=tolower(s[i]);
            if(i<s.size()/2)
            {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                      t++;                  // counting for the first half of the string
            }
            else
            {
                if(s[i]==97 || s[i]==101 || s[i]==105 || s[i]==111 || s[i]==117)
                     t--;            // reducing the count if occures in second half of the string 
            }     
        } 
       return (t==0);
    }
};