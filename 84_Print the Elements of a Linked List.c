

// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {


    SinglyLinkedListNode *cur=head;
    if(cur==NULL)
    {
        printf("List is empty");
    }
    else
    {
        //printf("List is: \n");
        while(cur!=NULL)
        {
            printf("%d\n", cur-> data);
            cur=cur->next;
        }
    }
}


