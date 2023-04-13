class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size();
        stack<int> st;
        st.push(pushed[0]);
        int j=0,i=1;
        while(i<n){
            if(st.size() > 0 && popped[j] == st.top())
            {
                st.pop();
                j++;
            }
            else{
                st.push(pushed[i++]);
            }
        }
        
        
        while(!st.empty()){
            if(st.top() != popped[j++]){
                 return false;
            }
            cout<<st.top()<<" ";
             st.pop();
        }
        return true;
    }
    
};