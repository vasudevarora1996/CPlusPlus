// Level Order Traversal on a Binary Search Tree with All 3 DFS Traverals.

#include<iostream>
#include<queue>
using namespace std;

struct node{
int data;
struct node *left;
struct node *right;
};

struct node * create(int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}

struct node * insert(struct node *head,int data){
    struct node *ptr=create(data);
    if(head==NULL){
        head=ptr;
    }
    else if(data < head->data){
        head->left=insert(head->left,data);
    }
    else{
        head->right=insert(head->right,data);
    }
    return head;
}

void inorder(struct node *head){
    if(head==NULL) return;
    inorder(head->left);
    cout<<head->data<<" ";
    inorder(head->right);
}

void preorder(struct node *head){
    if(head==NULL) return;
    cout<<head->data<<" ";
    preorder(head->left);
    preorder(head->right);
}

void postorder(struct node *head){
    if(head==NULL) return;
    postorder(head->left);
    postorder(head->right);
    cout<<head->data<<" ";
}

void levelorder(struct node *head){
    if(head==NULL) return;
    queue<struct node *> q;
    q.push(head);
    while(!q.empty()){
        struct node *temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
}

}
int main(){
    struct node *head=NULL;
    int choice=0;
    do{
    cout<<"\nEnter the elements in BST Tree\n";
    cout<<"\nPress 1 for Insertion\n";
    cout<<"\nPress 2 for PREORDER Traversal\n";
    cout<<"\nPress 3 for INORDER Traversal\n";
    cout<<"\nPress 4 for POSTORDER traversal\n";
    cout<<"\nPress 5 for LEVEL-ORDER traversal\n";
    cout<<"\nPress 6 for exit\n";
    cin>>choice;
        if(choice==1){
            int data=0;
            cout<<"\nEnter the data\n";
            cin>>data;
            head=insert(head,data);
        }
        if(choice==2) preorder(head);
        if(choice==3) inorder(head);
        if(choice==4) postorder(head);
        if(choice==5) levelorder(head);
        if(choice==6) break;
    }
    while(choice<6);
    cout<<"\n";
return 0;    
}
