class Solution {
public:
    string breakPalindrome(string palindrome) {
        
//         int flag=0,n=palindrome.length();
     
//             if(n==0 || n==1)
//                 return "";
//           n--;
//         if((n==2)&&(palindrome[n]!=palindrome[n-1])){
//             palindrome[n]=palindrome[n-1];
//             flag=1;
//         }
       
//         for(int i=1;i<=n;i++){
            
//             // if((i==n-1) && (palindrome[i]!=palindrome[i+1])){
//             //      palindrome[i+1]=palindrome[i];
//             //     flag=1;
//             // }
//             if((palindrome[i]!=palindrome[i-1])&&flag==0){
//                  palindrome[i]=palindrome[i-1];
//                 flag=1;
//                 break;
//             }
               
//         }
        
        
//         //      if((palindrome[n-2]=palindrome[n-1])&& flag==0){
//         //          palindrome[n-1]=palindrome[n-2];
//         //          flag==1;
//         //      }
//         if(flag==0){
//             char ch=palindrome[n];
//             ch++;
//             palindrome[n]=ch;
//         }
//         return palindrome;
        
        int n=palindrome.length();
        int m=n/2;
           if(n==0 || n==1)
                return "";
        for(int i=0;i<m;i++){
            if(palindrome[i]!='a'){
                palindrome[i]='a';
                return palindrome;
            }
        }
       char ch=palindrome[n-1];
        ch++;
        palindrome[n-1]=ch;
        return palindrome;
        
    }
};