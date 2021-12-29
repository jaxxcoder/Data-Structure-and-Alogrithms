/*In here i covered: 
                    (1)how to delete the first element in Linked List.
                    (1)how to delete the last element in Linked List.
*/
 
#include<stdio.h>
#include<stdlib.h> //Using for memory allocation


//Creating the blueprint for our node
struct node{

    int data;
    struct node * next;

};

//Funtion for our LInked List Traversal or printing our Linked list
void Traversal(struct node * ptr)
{
    //Runs till ptr->next==NULL
    while(ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

//Function to remove the first element from our Linked List
struct node * deletionAtFirst(struct node* head)
{
    //Deleting the first element
    struct node * Pointer=head;
    head=head->next;

    free(Pointer);

    return head;
}

//Function to remove the last element from our Linked List
struct node * deletionAtLast(struct node * head){
    
    struct node * Pointer1=head;
    struct node * Pointer2=Pointer1->next;

    while(Pointer2->next!=NULL){

        Pointer1=Pointer1->next;
        Pointer2=Pointer1->next;
    }

    //Deleting the last element
    Pointer1->next=NULL;
    free(Pointer2);

    return head;
}

int main()
{
    //Creating our nodes and allocating memory for our nodes according to their size
    struct node * head=(struct node*)malloc(sizeof(struct node));
    struct node * second=(struct node*)malloc(sizeof(struct node));
    struct node * third=(struct node*)malloc(sizeof(struct node));
    struct node * fourth=(struct node*)malloc(sizeof(struct node));
    
    //Linking and setting data for our nodes
    head->data=11;
    head->next=second;

    second->data=15;
    second->next=third;

    third->data=17;
    third->next=fourth;

    fourth->data=20;
    fourth->next=NULL;

    printf("Printing the values of nodes without performing any deletion operations\n");
    Traversal(head);
    printf("*************************************************\n");


    printf("Printing the values of our Linked List after deleting the first element\n");
    //Deleting the first element using our coustom function deletionAtFirst()
    head=deletionAtFirst(head);
    Traversal(head);

    printf("*************************************************\n");
    printf("Printing the values of our Linked List after deleting the last element\n");
    //Deleting the last element using our coustom function deletionAtLast()
    head=deletionAtLast(head);
    Traversal(head);




    return 0;
}

//***************************************Written by jaxxcoder***************************************
