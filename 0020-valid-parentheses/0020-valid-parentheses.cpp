class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        
        stack<char> st;
        
        for(int i=0;i<n;i++){
            if(s[i] == '(' || s[i] == '{' || s[i]=='['){
                st.push(s[i]);  
            }
            else
            {
                if(st.size() == 0)
                    return false;
                
                char c = st.top();
                if((c == '(' && s[i] != ')') || (c == '{' && s[i] != '}') || (c == '[' && s[i] != ']') )
                    return false;
                st.pop();
            }
        } 
        if(st.size()>=1)
            return false;
        
        return true;
            
            
    }
};