#include<iostream>
using namespace std;

struct node{
int data;
struct node *next;
};
struct node *head=NULL;

void insert(int data)
{
struct node *new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=data;
new_node->next=head;
head=new_node;
}

void display()
{
struct node* ptr;
ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main()
{
    int num=0;
    cout<<"Enter the numbers to be inserted into Linked List\n";
    cin>>num;
    insert(num);
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    cout<<"Entered elements in the linked list are as follows\n";
    display();
    return 0;
    }