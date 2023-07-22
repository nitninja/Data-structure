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
    if(head==NULL && tail ==NULL){
        head=node;
        tail=node;
    }
    else{
        tail->next=node;
        tail=tail->next;
    }
}

void insertNewNodeAtEnd(node *head){
    node *temp=(node *)malloc(sizeof(node));
    if(temp==NULL) exit(1);
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL) head=temp;
    else{
        while(head->next!=NULL){
            head=head->next;
        }
        head->next=temp;
    }
}


void insertNodeATBeginning(node *head){
    node* temp=(node*)malloc(sizeof(node));
    if(temp==NULL) exit(1);
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        temp->next=head;
        head=temp;        
    }
}

int main(){
    freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
    freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);

    insertNode(1);
    insertNode(2);
    insertNode(3);
    insertNode(4);
    insertNode(5);
    insertNode(6);

    insertNewNodeAtEnd(head);
    insertNodeATBeginning(head);
    PrintList(head);

// INPUT
// 7 0
// OUTPUT
// 1->2->3->4->5->6->7->

}