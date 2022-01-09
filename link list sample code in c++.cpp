 #include<iostream>
 using namespace std;
 struct node
{
    int data;
    struct node* next;
};

void travers(struct node* ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Data:"<<ptr->data<<endl;
       ptr=ptr->next;
    }
}


int main()
{
    struct node* head;
     struct node* secound;
     struct node* third;
     head=(struct node*)malloc(sizeof(struct node));
     secound=(struct node*)malloc(sizeof(struct node));
     third=(struct node*)malloc(sizeof(struct node));

    head->data=5;
    head->next=secound;

     secound->data=6;
    secound->next=third;

     third->data=7;
    third->next=NULL;

    travers(head);

}
