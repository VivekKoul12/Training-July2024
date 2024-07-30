Node *deleteNode(Node *head, int pos)
{
 if(head==NULL)
 return head;
 Node *tail=head;
 if(pos==0){
	 head=head->next;
	 return head;
 }
 Node* prev=NULL;
 while(pos--&&tail)
 {
	 prev=tail;
	 tail=tail->next;
 }
 if(tail!=NULL)
 prev->next=tail->next;
 delete(tail);
 return head;

 
}
