class Solution {
public:
    int calculate(string s) {
        
        int result=0;
        int sum=0;
        int sign=1;
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                sum=s[i]-'0';
                while(i+1<s.size() && isdigit(s[i+1])){
                    sum = sum*10+(s[i+1]-'0');
                    i++;
                }
                result+=sum*sign;
            }
            else if(s[i]=='+')
                sign=1;
            else if(s[i]=='-')
                sign=-1;
            else if(s[i]=='(')
            {
                st.push(result);
                st.push(sign);
                result=0;
                sign=1;
            }
            else if(s[i]==')'){
                int xsign=st.top();
                st.pop();
                int xresult=st.top();
                st.pop();
                result=result*xsign+xresult;
          }
        }   
        return result;
        

    }
};

