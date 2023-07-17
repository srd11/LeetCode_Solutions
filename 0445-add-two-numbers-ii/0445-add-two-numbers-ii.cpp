/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         stack<int> s1,s2,sans;
        while(l1){
            s1.push(l1->val);
            l1=l1->next;
        }
        
        while(l2){
            s2.push(l2->val);
            l2=l2->next;
        }
        
        int carry=0;
        ListNode *n = NULL;
        ListNode *ans = NULL;
        
        while(s1.size() != 0 && s2.size()!=0){
            int tmp = s1.top() + s2.top()+carry;
            // cout<<"TMP = "<<tmp<<endl;
            cout<<carry<<endl;
            s1.pop();
            s2.pop();
            
            // if(!ans){
            //     ans = new ListNode(tmp);
            //     n=ans;
            //     // n=n->next;
            // }
            
             if(tmp > 9 ){
                carry = tmp / 10;
                cout<<"in if"<<carry<<endl;
                tmp = tmp % 10;
               // n->next = new ListNode(tmp);
               //  n=n->next;
                
                sans.push(tmp);
                
            }
                            

            else if(tmp <= 9){
                // n->next = new ListNode(tmp);                
                carry=0;
                cout<<"in 0" <<tmp<<endl;
                // n=n->next;
                sans.push(tmp);

                
            }
        }
        
        while(s1.size() != 0){
            int tmp = s1.top()+carry;
            carry = tmp / 10;
            tmp = tmp % 10;
            sans.push(tmp);
            s1.pop();
        }
        
         while(s2.size() != 0){
            int tmp = s2.top()+carry;
            carry = tmp / 10;
            tmp = tmp % 10;
            sans.push(tmp);
            s2.pop();
        }
         if(carry >= 1)  sans.push(carry);
        while(sans.size()!=0){
           if(!ans){
                ans = new ListNode(sans.top());
                n=ans;
               cout<<"sans"<<sans.top();
                 sans.pop();
                // n=n->next;
            }
            else{
            n->next = new ListNode(sans.top());
            n=n->next;
            sans.pop();
                
            }            
            
        }
        // if(carry == 1) n->next = new ListNode(carry) ;
        return ans;
    }
};