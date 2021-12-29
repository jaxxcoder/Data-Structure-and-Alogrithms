/*In here i covered: 
                    (1)how to insert a new node at first in Linked List.
                    (1)how to insert a new node at last in Linked List.
*/


#include<stdio.h>
#include<stdlib.h>

//Creating the blueprint for our node
struct node
{
    int data;
    struct node * next;

};

//Funtion for our Linked List Traversal or printing our Linked list
void Traversal(struct node * ptr)
{
    while(ptr!=NULL)
    {
        printf("element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}


//Function to add a new node to our Liked List at first
struct node * insertionAtFirst(struct node * head,int data)
{
    struct node * ptr=(struct node*) malloc(sizeof(struct node));

    //initializing our node
    ptr->data=data;
    ptr->next=head;

    return ptr;

}


//Function to add a new node to our Liked List at last
struct node * insertionAtLast(struct node * head,int data){

    struct node * ptr=(struct node*) malloc(sizeof(struct node));
    ptr->data=data;

    struct node * counter=head;

    while(counter->next!=NULL){
        counter=counter->next;
    }
    counter->next=ptr;
    ptr->next=NULL;

    return head;
}





int main()
{
    //making our nodes by requesting in heap
    struct node * head=(struct node*) malloc(sizeof(struct node));
    struct node * second=(struct node*) malloc(sizeof(struct node));
    struct node * third=(struct node*) malloc(sizeof(struct node));
    struct node * fourth=(struct node*) malloc(sizeof(struct node));

    //first node
    head->data=9;
    head->next=second;
    //second node
    second->data=13;
    second->next=third;
    //third node
    third->data=30;
    third->next=fourth;
    //fourth node
    fourth->data=40;
    fourth->next=NULL;


    printf("Printing the values of nodes without performing any insertion operations\n");
    Traversal(head);
    printf("*************************************************\n");


    printf("Printing the values of our Linked List after inserting a new node at first\n");
    //Inserting a new node at first using our coustom function insertionAtFirst()
    head=insertionAtFirst(head,2);
    Traversal(head);

    printf("*************************************************\n");
    printf("Printing the values of our Linked List after inserting a new node at last\n");
    //Inserting a new node at last using our coustom function insertionAtLast()
    head=insertionAtLast(head,50);
    Traversal(head);


    return 0;
}

//***************************************Written by jaxxcoder***************************************
