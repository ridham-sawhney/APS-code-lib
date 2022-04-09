

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
SinglyLinkedListNode *t,*list,*q;
list=head;
position=position+1;
t=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
t->data=data;
t->next=NULL;
for(int i=0;i<position-2;i++)
{
    list=list->next;
}
q=list->next;
list->next=t;
t->next=q;

return head;
}

