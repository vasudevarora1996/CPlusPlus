/* Program to Left shift rotate the values in Singly Linked List*/

#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};

struct node * create(int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=NULL;
    return ptr;
}

struct node * insert(struct node *head,int data){
    struct node *ptr=create(data);
    if(head==NULL) head=ptr;
    else if(head->next==NULL){
        head->next=ptr;
    }
    else{
        struct node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=ptr;
    }
    return head;
}

void display(struct node *head){
    if(head==NULL) return;
    else{
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
    }
}

struct node * leftshift(struct node *head){
    if(head==NULL) return head;
    if(head->next==NULL) return head;
    if(head->next->next==NULL) {
        int t=head->data;
        head->data=head->next->data;
        head->next->data=t;
        return head;
    }
    else{
        struct node *temp=head;
        while(temp->next!=NULL){
            int z=temp->data;
            temp->data=temp->next->data;
            temp->next->data=z;
            temp=temp->next;
        }
    }
    return head;
}

int main(){
    struct node *head=NULL;
    int choice=0;
    do{
    cout<<"\nEnter the elements in Linked List\n";
    cout<<"\nPress 1 for Insertion\n";
    cout<<"\nPress 2 for displaying the Linked List\n";
    cout<<"\nPress 3 for Left-Shifting of Nodes in Linked List\n";
    cout<<"\nPress 4 for Exit\n";
    cin>>choice;
    if(choice==1){
        int data=0;
        cout<<"\nEnter the data\n";
        cin>>data;
        head=insert(head,data);
    }
    if(choice==2){
        display(head);
    }
    if(choice==3) {
        head=swap(head);
        cout<<"\nSwapping done\n";
        display(head);
    }
    if(choice==4) break;
}
    while(choice<4);
    cout<<"\n";
    return 0;
}
