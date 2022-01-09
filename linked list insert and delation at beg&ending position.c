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
    struct Node* insertAtBeg(struct Node* head, int data){
    struct Node* ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
    }
    struct Node* insertAtEnd(struct Node* head, int data){
    struct Node* ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node* p=head;
    while(p->next!=NULL){
    p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
    }
    struct Node* deleteAtBeg(struct Node* head){
    struct Node* ptr=head;
    head= head->next;
    free(ptr);
    return head;
    }
    struct Node* deleteAtEnd(struct Node* head){struct Node* p=head;
    struct Node* q= head->next;
    while(q->next!=NULL){
    p=p->next;
    q=q->next;
    }
    free(q);
    p->next=NULL;
    return head;
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
    head= insertAtBeg(head, 5);
    printf("After insertion at the beginning: \n ");
    traversal(head);
    head= insertAtEnd(head, 9);
    printf("After insertion at the end: \n ");
    traversal(head);
    head= deleteAtBeg(head);
    printf("After deletion at the beginning: \n ");
    traversal(head);head= deleteAtEnd(head);
    printf("After deletion at the end: \n ");
    traversal(head);
    return 0;
    }
