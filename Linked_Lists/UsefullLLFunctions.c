#include<stdio.h>
#include<stdlib.h>

struct N{
    int data;
    struct N* next;
};
typedef struct N n;

n* h=NULL;
n* t=NULL;

// void PrintList(n * h){
//     n* p=h;
//     while(p!=NULL){
//         printf("%d->",p->data);
//         p=p->next;
//     }
// }


// void insertNode(int data){
//     n* n=NULL;
//     n=malloc(sizeof(n));
//     n->data=data;
//     if(h==NULL && t ==NULL){
//         h=n;
//         t=n;
//     }
//     else{
//         t->next=n;
//         t=t->next;
//     }
// }


int listLength(n* h){
    if(h==NULL){
        return 0;
    }
    else{
        int count=0;
        n *x=h;
        while(x!=NULL){
            x=x->next;
            count++;
        }
        return count;
    }
}

void insertNewNodeAtEnd(n *h){
    n *x=(n *)malloc(sizeof(n));
    if(x==NULL) exit(1);
    scanf("%d",&x->data);
    x->next=NULL;
    if(h==NULL) h=x;
    else{
        while(h->next!=NULL){
            h=h->next;
        }
        h->next=x;
    }
}

//error of some kind
void insertNodeATBeginning(n *h){
    n* x=(n*)malloc(sizeof(n));
    if(x==NULL) exit(1);
    scanf("%d",&x->data);
    x->next=NULL;
    if(h==NULL){
        h=x;
    }
    else{
        x->next=h;
        h=x;        
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


//     PrintList(h);

// }