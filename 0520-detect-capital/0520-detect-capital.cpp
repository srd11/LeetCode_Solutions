class Solution {
public:
    bool detectCapitalUse(string word) {
        int flag=0;
        unordered_map<char,int> capital;
        unordered_map<char,int> small;
        if(word[0]>='A' && word[0]<='Z'){
            flag=1;
        }
         
        
        for(int i=1;i<word.size();i++){
            if(word[i]>='A' && word[i]<='Z')
            {
                capital[word[i]]++;
               
            }
            else{
                small[word[i]]++;
            }
        }
        cout<<"Capital size="<<capital.size()<<endl;
     if(capital.size()>=1 && small.size()>=1){
         return false;
     }else if(flag==0 && capital.size()>=1)
     {
         return false; 
     }    
    else{
        return true;
    }
        return true;
    }
    
};