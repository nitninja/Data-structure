// #include"NodeCount"
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

int listLength(node* head){
    if(head==NULL){
        return 0;
    }

    else{
        int count=0;
        node *temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        return count;
    }
}

// int main(){
//     freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
//     freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);

//     insertNode(1);
//     insertNode(2);
//     insertNode(3);
//     insertNode(4);
//     insertNode(5);
//     insertNode(6);


//     PrintList(head);
//     printf("\n%d",listLength(head));

// }