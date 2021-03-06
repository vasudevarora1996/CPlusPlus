#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*head;

struct node* create(int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=NULL;
    ptr->data=data;
    return ptr;
}

void beginsert(int data){
    struct node *ptr;
    ptr=create(data);
    if(ptr==NULL){
        cout<<"\nNo Memory\n";
    }
    else{
        ptr->next=head;
        head=ptr;
    }
    }
void lastinsert(int data){
    struct node *ptr;
    ptr=create(data);
    if(ptr==NULL){
        cout<<"\nNo Memory\n";
    }
    else{
        if(head==NULL){
            head=ptr;
            ptr->next=NULL;
        }
        else if(head->next==NULL){
            head->next=ptr;
            ptr->next=NULL;
        }
        else{
        struct node *temp;
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=NULL;
        }
    }
}
void posinsert(int data,int pos){
    struct node *ptr;
    ptr=create(data);
    if(ptr==NULL){
        cout<<"\nNo Memory\n";
    }
    else{
        struct node *temp;
        temp=head;
        for(int i=0;i<pos;i++){
            temp=temp->next;
        }
        struct node *z;
        z=temp->next;
        temp->next=ptr;
        ptr->next=z;
    }
}
void display()
{
    if(head==NULL){
        cout<<"\nLinked List Not Exist\n";
    }
    else if(head->next==NULL){
        cout<<head->data;
        cout<<"\nOnly 1 node is there.\n";
    }
    else{
        struct node *temp;
        temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}
int main(){
    int choice=0;
    cout<<"\n\nLinked List Insertion Program";
    cout<<"\n---------------------------------\n\n\n";
    while(choice!=5){
    cout<<"\nPress 1 for insertion at beginning\n";
    cout<<"\nPress 2 for insertion at the end\n";
    cout<<"\nPress 3 for insertion at current position\n";
    cout<<"\nPress 4 for displaying the linked list\n";
    cout<<"\nPress 5 for exit\n";
    cin>>choice;
        switch(choice){
                int data;
            case 1:
                cout<<"\nEnter the data\n";
                cin>>data;
                beginsert(data);
                break;
            case 2:
                cout<<"\nEnter the data\n";
                cin>>data;
                lastinsert(data);
                break;
            case 3:
                 int pos;
                cout<<"\nEnter the data\n";
                cin>>data;
                cout<<"\nEnter the position\n";
                cin>>pos;
                posinsert(data,pos);
                break;
            case 4:
                display();
                break;
            case 5:
                cout<<"\n";
                return 0;
        }
}
    cout<<"\n";
    return 0;
}