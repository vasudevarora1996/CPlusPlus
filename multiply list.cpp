// Given a number represented as the linked list, we were supposed to multiply this number by 4.

#include<iostream>
#include<vector>
using namespace std;

struct node{
int data;
struct node *next;
}*head;

node * create(int data){
struct node *ptr=(struct node *)malloc(sizeof(struct node));
ptr->data=data;
ptr->next=NULL;
return ptr;
}
struct node * insert(struct node *head,int data){
struct node *ptr=new node();
ptr->data=data;
if(head==NULL){
head=ptr;
head->next=NULL;
ptr->data=data;
}
else if(head->next==NULL){
head->next=ptr;
ptr->next=NULL;
ptr->data=data;
}
else{
struct node *temp=head;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=ptr;
ptr->next=NULL;
ptr->data=data;
}
   return head; 
}

void display(struct node *head,int num1){
    if(head==NULL){
        cout<<"\nLinked List not found\n";
    }
    else{
        struct node *temp=head;
        while(temp!=NULL){
            if(temp->data==num1) cout<<(temp->data)*4<<" ";
            else cout<<(temp->data)<<" ";
            temp=temp->next;
        }
    }
}
void sumlist(struct node *head){
    vector<int> arr;
    if(head==NULL){
        cout<<"\nLinked List not found\n";
    }
    else{
        while(head->next!=NULL){
            arr.push_back(head->data);
            head=head->next;
        }
    }
    auto ir=arr.crbegin();
    while(head->next!=NULL && ir!=arr.crend()){
        head->data=head->data-(*ir);
    }
}
int main(){
    int choice=0,num=0;
    struct node *head=NULL;
    do{
    cout<<"\n\n\n";
    cout<<"\nPress 1 to Insert elements in Linked List\n";
    cout<<"\nPress 2 to display\n";
    cout<<"\nPress 3 to find sum\n";
    cout<<"\nPress 4 to exit\n";
    cin>>choice;
        if(choice==1){
            cout<<"\nEnter the element you want to Insert\n";
            cin>>num;
            head=insert(head,num);
        }
        if(choice==2){
            display(head,50);
        }
        if(choice==3){
            struct node *temp;
            sumlist(head);
            display(head,50);
        }
    }
    while(choice!=4);
    return 0;
}
