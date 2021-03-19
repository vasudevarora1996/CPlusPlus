/* Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists. */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head=new ListNode(0);
        ListNode *p=head;
        p=head;
        ListNode *ptr1=l1,*ptr2=l2;
        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1->val < ptr2->val){
               p->next=ptr1;
               ptr1=ptr1->next;
            }
            else{
                p->next=ptr2;
                ptr2=ptr2->next;
            }
            p=p->next;
        }
        if(ptr1!=NULL){
                p->next=ptr1;
        }
        if(ptr2!=NULL){
                p->next=ptr2;
        }
        return head->next;
        }
};
