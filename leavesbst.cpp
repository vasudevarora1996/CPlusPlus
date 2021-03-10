#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node* create(int data){
    struct node *new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->left=NULL;
    new_node->right=NULL;
    return new_node;
}
struct node* insert(struct node *head,int data){
    if(head==NULL){
        return create(data);
    }
        if(data<head->data){
            head->left=insert(head->left,data);
        }
        else{
            head->right=insert(head->right,data);
        }
        return head;
}
void display(struct node *head){
    struct node *temp=head;
    if(head==NULL){
        return;
} 
    if(temp->left==NULL && temp->right==NULL){
        cout<<temp->data<<" ";
}
    display(temp->left);
    display(temp->right);
}
int main(){
    struct node *root=NULL;
    int num,ch,count;
    cout<<"Enter number of elements you want to insert in BST\n";
    cin>>count;
    cout<<"Enter "<<count<<" number of elements\n";
    for(int i=0;i<count;i++){
        cin>>num;
        root=insert(root,num);
    }
    cout<<"Leaf Nodes are\n";
    display(root);
    cout<<"\n";
    return 0;
}