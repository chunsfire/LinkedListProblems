void createNode(struct node** head, int data){
 struct node* temp=(struct node*)malloc(sizeof(node));
 temp->data=data;
 temp->next=*head;
 *head=temp;
}

void InsertNth(struct node** headRef, int index, int data) {
 if( (index<0) || (index>displayLength(*headRef)))
 return;
 
 if(index == 0)
 createNode(headRef,data);
 
 else{
 struct node *temp = *headRef;
 int pos=0;
 while(pos != (index-1)){
    temp = temp->next;
    pos++;
 }
 createNode(&(temp->next),data);
 }
}
