void DeleteList(struct node** headRef) {
 if( (*headRef)->next == NULL )
 {
    cout<<"deleting: "<<(*headRef)->data<<" node"<<endl;
    free(*headRef);
    *headRef = NULL;
 }
 else{    
    struct node* temp = *headRef;    
    *headRef = (*headRef)->next;
    cout<<"deleting: "<<temp->data<<" node"<<endl;
    free(temp);
    DeleteList(headRef);
 }
}
