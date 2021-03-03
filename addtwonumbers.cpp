/*ou are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.*/

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
        ListNode preNode(-1), *p = &preNode;
        int carry = 0, sum;
        
        while(l1 || l2 || carry){
            sum = (l1?l1->val:0) + (l2?l2->val:0) + carry;
            p->next = new ListNode(sum%10);
            carry = sum/10;
            
            p = p->next;
            l1 = l1?l1->next:l1;
            l2 = l2?l2->next:l2;
        }
        return preNode.next;
    }
};
