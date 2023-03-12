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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // ListNode* ans = NULL;
        // while((!list1) && (!list2)){
        //     if(list1 -> val > list2 -> val){
        //         ans -> next = list2;
        //         list2 = list2 -> next;
        //     }
        //     else{
        //         ans -> next = list1;
        //         list1 = list1 -> next;
        //     }
        // }
        // return ans;
        
        if(list1 == NULL)
            return list2;
        
        if(list2 == NULL)
            return list1;
        
        ListNode* tmp = list1;
        
        if(list1 -> val > list2 -> val){
            tmp = list2;
            list2 = list2 -> next;
        }
        else
            list1 = list1 -> next;
        
        
        ListNode* ans = tmp;
        while(list1 && list2){
            
            if(list1 ->  val > list2 ->  val){
                ans -> next = list2;
                list2 = list2 -> next;
            }
            else{
                ans -> next = list1;
                list1 = list1 -> next;
            }
            ans = ans -> next;
        }
        
        if(!list1)
            ans -> next = list2;
        else
            ans -> next = list1;
        
        return tmp;
    }
};