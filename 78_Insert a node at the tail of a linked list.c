

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

SinglyLinkedListNode *temp, *cur=head;
    temp=(SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
   // printf("Enter the number: ");
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        //printf("\n List is: \t");
        while(cur->next!=NULL)
        {
        cur=cur->next;
        }
        cur->next=temp;
    }
     return head;

}

