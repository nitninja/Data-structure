#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
typedef struct Node node;

node* head=NULL;
node* tail=NULL;

void PrintList(node * head){
    node* p=head;
    while(p!=NULL){
        printf("%d->",p->data);
        p=p->next;
    }
}


void insertNode(int data){
    node* node=NULL;
    node=malloc(sizeof(node));
    node->data=data;
    // tail->next=node;
    // tail=tail->next;
    if(head==NULL && tail ==NULL){
        head=node;
        tail=node;
    }
    else{
        tail->next=node;
        tail=tail->next;
    }
}

int main(){
    freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
    freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);

    // node* first=NULL;
    // node* second =NULL;
    // node* third =NULL;

    // first=malloc(sizeof(node));
    // second=malloc(sizeof( node));
    // third=malloc(sizeof( node));


    // first->data=10;
    // first->next=second;

    // second->data=20;
    // second->next=third;
    
    // third->data=30;
    // third->next=NULL;

    // head=first;
    insertNode(1);
    insertNode(2);
    insertNode(3);
    insertNode(4);
    insertNode(5);
    insertNode(6);


    PrintList(head);

}