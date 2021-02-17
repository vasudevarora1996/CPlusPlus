#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;

void push(int data){
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=top;
    top=new_node;
}

void pop()
{
    if(top==NULL) cout<<"\nStack underflow\n";
    else{
        cout<<"\nTop element "<<top->data<<" successfully popped\n";
        top=top->next;
    }
}
void display()
{
    struct node *ptr;
    if(top==NULL) cout<<"\nStack is empty\n";
    else{
        ptr=top;
        while(ptr!=NULL){
            cout<<ptr->data<<"\t";
            ptr=ptr->next;
        }
    }
}

int main()
{
    int ch=0;
    do{

    cout<<"\nPress 1 for PUSH\n";
    cout<<"\nPress 2 for POP\n";
    cout<<"\nPress 3 for DISPLAY STACK\n";
    cout<<"\nPress 4 for EXIT\n";
    cin>>ch;
    switch(ch){
        case 1:{
            int num=0;
            cout<<"\nEnter the element to be pushed\n";
            cin>>num;
            push(num);
            break;
        }
        case 2:{
            pop();
            cout<<"\nPOP successfully carried out\n";
            break;
        }
        case 3:{
            display();
            break;
    }
    case 4:{
        cout<<"\nExiting\n";
        break;
    }
    default:{
        int n;
        cout<<"\nInvalid Choice\n";
        goto a;
        break;
    }
    }
}while(ch!=4);
return 0;
}