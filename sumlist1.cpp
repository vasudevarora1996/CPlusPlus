// Given a linked list were supposed to update the value of each node by the sum of the node itself and the sum of (n-k)th node.

#include<iostream>
#include<vector>
using namespace std;

struct node{
int data;
struct node *next;
}*head;
vector<int> arr;
node * create(int data){
struct node *ptr=(struct node *)malloc(sizeof(struct node));
ptr->data=data;
ptr->next=NULL;
return ptr;
}

struct node * insert(struct node *head,int data){
struct node *ptr=new node();
arr.push_back(data);
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
         int size=arr.size();
         auto i=arr.rbegin();
    while(head!=NULL && size>0){
        head->data=head->data -(*i);
        i++;
        cout<<head->data<<" ";
        size--;
        head=head->next;
    }
}
int main(){
    int choice=0,num=0;
    struct node *head=NULL;
    do{
    cout<<"\n\n\n";
    cout<<"\nPress 1 to Insert elements in Linked List\n";
    cout<<"\nPress 2 to display\n";
    cout<<"\nPress 3 to find \n";
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
            sumlist(head);
        }
    }
    while(choice!=4);
    return 0;
}
