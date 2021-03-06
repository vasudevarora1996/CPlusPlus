#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
}*head;
//stack LIFO last insertion first deletion
//push = insertion at beginnning & pop = deletion at beginning.
void push(int data){
struct node *ptr=new node(); // ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL){
        cout<<"\nNo Memory\n";
    }
    else{
        if(head==NULL){
            head=ptr;
            ptr->next=NULL;
            ptr->data=data;
        }
        else{
            ptr->next=head;
            ptr->data=data;
            head=ptr;
        }
    }
}
void pop()
{
    if(head==NULL){
        cout<<"\nStack Underflow\n";
    }
    else if(head->next==NULL){
        cout<<head->data<<" popped out successfully\n";
        head=head->next;
        cout<<"\nStack is Empty now\n";
    }
    else{
        cout<<head->data<<" popped out successfully\n";
        head=head->next;
    }
}
void display(struct node *temp)
{
    temp=head;
    if(temp==NULL){
        cout<<"\nStack is Empty\n";
    }
    else{
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
}
int main(){
    int choice=0;
    cout<<"\n\nStack Program\n";
    cout<<"\n---------------\n\n\n";
    while(choice!=5){
    cout<<"\nPress 1 for PUSH\n";
    cout<<"\nPress 2 for POP\n";
    cout<<"\nPress 3 for displaying Stack\n";
    cout<<"\nPress 4 for exit\n\n\n";
    cin>>choice;
        switch(choice){
                int data;
            case 1:
                cout<<"\nEnter the data\n\n";
                cin>>data;
                push(data);
                cout<<data<<" pushed successfully\n";
                display(head);
                break;
            case 2:
                pop();
                break;
            case 3:
                display(head);
                break;
            case 4:
                cout<<"\n";
                return 0;
        }
}
    cout<<"\n";
    return 0;
}