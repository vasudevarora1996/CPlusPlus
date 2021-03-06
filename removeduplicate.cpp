/*
struct Node {
  int data;
  struct Node *next;
};*/

// root: head node
Node *removeDuplicates(Node *head)
{
 if (head == NULL) {
        return head;
    }
 
    struct Node* current = head;
    while (current->next != NULL)
    {
        if (current->data == current->next->data)
        {
            struct Node* nextNext = current->next->next;
            free(current->next);
            current->next = nextNext;
        }
        else {
            current = current->next;    // only advance if no deletion
        }
    }
    return head;
}
