/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode temp=head;
        int size=0;
        while(temp!=null){
            temp=temp.next;
            size++;
        }
        if(size==1){
            return head;
        }
        int mid;
        if(size%2!=0){
            mid=(size+1)/2;
        }
        else{
            mid=(size/2)+1;
        }
        ListNode tempN=head;
        int i=1;
        while(tempN!=null){
              tempN=tempN.next;
            i++;
          
            if(i==mid){
                return tempN;
            }
        }
        return null;
        
    }
}