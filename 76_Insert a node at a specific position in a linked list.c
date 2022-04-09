

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
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) 
{ SinglyLinkedListNode *cur,*temp,*prev;
    int i=0;
    cur=head;
    prev=NULL;
    temp=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    temp->data=data;
    temp->next=NULL;
    if(head==NULL && position==0)
    {
        head=temp;
    }
    else {
    if(position==0)
    {
        temp->next=head;
        head=temp;
    }
    else {
        while (i<position) {
            prev=cur;
        cur=cur->next;
        i++;
        }
        prev->next=temp;
        temp->next=cur;
    }
    }
return head;
}

