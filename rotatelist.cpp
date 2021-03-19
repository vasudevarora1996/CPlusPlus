/* rotate a linked list by Kth node.
Given a singly linked list of size N. The task is to rotate the linked list counter-clockwise by k nodes, where k is a given positive integer smaller than or equal to length of the linked list.
*/

class Solution
{
    public:
    Node* rotate(Node* head, int k)
    {
      if (k == 0)
       return head;
 
    struct Node *current = head;
  
    int count = 1;
    while (count < k && current != NULL)
    {
        current = current->next;
        count++;
    }
  
    if (current == NULL)
        return head;
  
    struct Node *kthNode = current;
  
    while (current->next != NULL)
        current = current->next;
  
    current->next = head;
  
    head = kthNode->next;
    kthNode->next = NULL;
    return head;
    }
};
