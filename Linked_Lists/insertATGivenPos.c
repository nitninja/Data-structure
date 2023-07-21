#include<stdio.h>
#include<stdlib.h>
#include"NodeCount.c"
#include"UsefullLLFunctions.c"

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

void insertAtPos(node *head,int pos){
    int length=listLength(head);
    if(pos<=0||pos>length+1) printf("Invalid Postion");
    else if(pos==1) insertNodeATBeginning(head);
    else if(pos==length+1) insertNewNodeAtEnd(head);
    else{
        int k=1;
        node *p=head;
        node *temp=(node *)malloc(sizeof(node));
        if(temp==NULL) exit(1);
        scanf("%d",&temp->data);
        while(k<pos-1){
            p=p->next;
            k++;
        }
        temp->next=p->next;
        p->next=temp;
        p=NULL;
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

    insertAtPos(head,6);

    PrintList(head);

}