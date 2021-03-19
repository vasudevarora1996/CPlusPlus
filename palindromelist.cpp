/* To check whether linked list is palindrome or not.

Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

*/
#include<vector>
bool isPalindrome(Node *head)
{
    vector<int> arr;
    vector<int> arr1;
    while(head!=NULL){
        arr.push_back(head->data);
        head=head->next;
    }
    for(auto i=arr.rbegin();i<arr.rend();i++){
        arr1.push_back(*i);
    }
    if(arr==arr1) return 1;
    else return 0;

}
