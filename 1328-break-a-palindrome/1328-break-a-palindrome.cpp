class Solution {
public:
    string breakPalindrome(string palindrome) {
              
        
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
       // char ch=palindrome[n-1];
       //  ch++;
       //  palindrome[n-1]=ch;
       //  return palindrome;
        palindrome[n-1]='b';
             return palindrome;
        
    }
};
