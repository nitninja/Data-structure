#include<stdio.h>
#include<stdlib.h>

void createNode();
struct Node{
    int data;
    struct Node* next;
};
typedef struct Node node;

node* head=NULL;
node* tail=NULL;

void PrintList(node * head){
    node* p=head;
    printf("LinkedList Output: ");
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

int main(){
    // freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
    // freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);

    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        createNode();
    }

    PrintList(head);

// OUTPUT
// LinkedList Output: 1->2->3->4->5

}

void createNode(){
    node * temp=(node*)malloc(sizeof(node));
    if (temp==NULL) exit(1);
    printf("Input daal: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else {
        node*p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=temp;
        p=NULL;
    }
    temp=NULL;

    // PrintList(head);
}