
#include <stdio.h>
    #include <stdlib.h>
    struct Node
        {

        int data;
        struct Node *next;
        };
    void traversal(struct Node *ptr)
    {
            while (ptr != NULL)
            {
                printf("Element: %d\n", ptr->data);
                ptr = ptr->next;
            }
    }
    struct Node* insertAtMiddle(struct Node* head,int position, int data)

{


         struct Node* temp=head;
         int count=0;
          while(temp!=NULL)
            {

              if(count==position)
              { struct Node* ptr=(struct Node *)malloc(sizeof(struct Node));



                ptr->data=data;
                ptr->next=temp;
                temp->next=ptr;

              }
               temp=temp->next;

             count++;

        return head;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    // Link first and second nodes
    head->data = 7;
    head->next = second;
    // Link second and third nodes
    second->data = 11;
    second->next = third;
    // Link third and fourth nodes
    third->data = 15;
    third->next = fourth;
    fourth->data= 17;
    fourth->next= NULL;
    traversal(head);
    head= insertAtMiddle(head,2,9);
    printf("After insertion at the middle: \n ");
    traversal(head);

   /* head= deleteAtBeg(head);
    printf("After deletion at the beginning: \n ");
    traversal(head);
    return 0;*/
}
