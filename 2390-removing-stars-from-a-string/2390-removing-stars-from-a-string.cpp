class Solution {
public:
    string removeStars(string s) {
        string str="";
        for(auto i:s)
        {
            if(str.length()>0 && i=='*')
                str.pop_back();
            else
                str+=i;
        }
        return str;
    }
    
};