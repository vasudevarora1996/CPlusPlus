/* Remove Nth Node From End of List.
Given the head of a linked list, remove the nth node from the end of the list and return its head.

Follow up: Could you do this in one pass? */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return head;
        ListNode *fast=head;
        ListNode *slow=head;
        for(int i=1;i<=n;i++){
            fast=fast->next;
        }
        if(fast==NULL) return head->next;
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};
