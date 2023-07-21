#include<bits/stdc++.h>
using namespace std;

class node{
public:

    int data;
    node* next;

};


class Linked_list{

    node* head=NULL;
    node* tail=NULL;

    
// public:Linked_list(){

//     head=NULL;
//     tail=NULL;

// }

public: void display(){

     while (head!=NULL)
    {
        
        cout<< head->data<<" ";
        head=head->next;

    }
}

void next_node(int n){

    node* temp=new node();

    temp->data=n;
    temp->next=NULL;

    if(head==NULL and tail ==NULL){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=tail->next;
    }
    }
      };

int main(){
//   freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
  // freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);
    

    node* head=NULL;
    node* second=NULL;
    node* third=NULL;

    head=new node();
    second=new node();
    third=new node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    
    while (head!=NULL)
    {
        
        cout<< head->data<<" ";
        head=head->next;

    }
    cout<<endl;

    Linked_list linked_list;
    int num;
    
        for(int i=0;i<10;i++){
            cin>>num;
            linked_list.next_node(num);
        }

        


    linked_list.display();
  
  return 0;  
}
