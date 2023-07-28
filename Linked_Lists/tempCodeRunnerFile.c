void insertAtPos(node *head,int pos){
//     int length=listLength(head);
//     printf("%d\n",length);
//     if(pos<=0||pos>length+1) printf("Invalid Postion");
//     else if(pos==1) insertNodeATBeginning(head);
//     else if(pos==length+1) insertNewNodeAtEnd(head);
//     else{
//         int k=1;
//         node *p=head;
//         node *temp=(node *)malloc(sizeof(node));
//         if(temp==NULL) exit(1);
//         scanf("%d",&temp->data);
//         while(k<pos-1){
//             p=p->next;
//             k++;
//         }
//         temp->next=p->next;
//         p->next=temp;
//         p=NULL;
//     }
// }