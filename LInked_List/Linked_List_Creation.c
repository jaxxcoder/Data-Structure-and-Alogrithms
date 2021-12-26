#include<stdio.h>
#include<stdlib.h> //Using for memory allocation

//Creating the blueprint for our node
struct node{

    int data;
    struct node * next;

};

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


    return 0;
}


//***************************************Written by jaxxcoder***************************************
