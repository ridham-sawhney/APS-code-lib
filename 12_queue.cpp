#include <iostream>
using namespace std;
struct node {
   int data;
   struct node *next;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;
struct node* NODE;
struct node* last;

void InsertElement() {
   int val;
   cout<<"Insert the element in queue : "<<endl;
   cin>>val;
   if (rear == NULL) {
      rear = (struct node *)malloc(sizeof(struct node));
      rear->next = NULL;
      rear->data = val;
      front = rear;
   } else {
      temp=(struct node *)malloc(sizeof(struct node));
      rear->next = temp;
      temp->data = val;
      temp->next = NULL;
      rear = temp;
   }
}

void findcycle()
{

    NODE=front;
    int x=0;
    int d;
    while(NODE->next!=NULL)
    {

        NODE=NODE->next;
        last=NODE;
    }

    NODE=front;
    int a=0;
    int t=0;
    while(NODE!=last && a==0)
    {
        temp=NODE;

        d=temp->data;

        temp=temp->next;

        while(temp != NULL && a==0)
        {
            x++;
            if(d==temp->data)
            {
                cout<<x<<endl;
                a=1;
                t=1;

            }
            temp=temp->next;

        }
          x=0;
        NODE=NODE->next;


    }
    if(t==0)
        {
            cout<<"0"<<endl;
        }


}

void DeleteElement() {
   temp = front;
   if (front == NULL) {
      cout<<"Underflow"<<endl;
      return;
   }
   else
   if (temp->next != NULL) {
      temp = temp->next;
      cout<<"Element deleted from queue is : "<<front->data<<endl;
      free(front);
      front = temp;
   } else {
      cout<<"Element deleted from queue is : "<<front->data<<endl;
      free(front);
      front = NULL;
      rear = NULL;
   }
}
void Display() {
   temp = front;
   if ((front == NULL) && (rear == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are: ";
   while (temp != NULL) {
      cout<<temp->data<<" ";
      temp = temp->next;
   }
   cout<<endl;
}

void EvenFunction() {
   temp = front;
   int count=0;
   if ((front == NULL) && (rear == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Count of Queue elements are: ";
   while (temp != NULL) {
        if(temp->data%2==0)
         count++;
      temp = temp->next;
   }
   cout<<count<<endl;
}

void DisplayMin() {
   temp = front;
   int Min=temp->data;
   if ((front == NULL) && (rear == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Minimum of Queue elements is: ";
   while (temp != NULL) {
      if(Min>temp->data)
      {
        Min=temp->data;
      }
      temp = temp->next;
   }
   cout<<Min<<endl;
}


int main() {
   int ch;

   do {
        cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Display Count of the even elements of queue"<<endl;
   cout<<"5) Display Minimum element of queue"<<endl;
   cout<<"6) Exit"<<endl;
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: InsertElement();
         break;
         case 2: DeleteElement();
         break;
         case 3: Display();
         break;
         case 4: EvenFunction();
         break;
         case 5: findcycle();
         break;
         case 6: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=6);
   return 0;
}

