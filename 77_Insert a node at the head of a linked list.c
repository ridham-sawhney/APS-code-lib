

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) 
{
SinglyLinkedListNode* cur,*temp;
cur=llist;
temp=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
temp->data=data;
temp->next=NULL;
if(llist==NULL)
{
   llist=temp;
}
else
 {
   temp->next=llist;
   llist=temp;
}
return llist;
}

