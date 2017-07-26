// Linked Lists

#include <stdio.h>
#include <stdlib.h>

typedef struct node *nodePtr;

struct node{
    int data;
    nodePtr next;
    // can also make a nodePtr that points backwards so you can delete.
};

typedef struct node node;

int main()
{
    // sets the head of the linked list
    nodePtr first = NULL;

    first = malloc( sizeof(node) );
    first->next = NULL; // Sets up a list of length 1?

    // setting the first node's data
    first->data = 61;

    first->next = malloc( sizeof(node));
    (first->next)->next = NULL;
    (first->next)->data = 62;

    // with a temporary
    nodePtr temp;                   // temp's a ptr for the data
    temp = malloc( size(node) );    // assigning data for temp ptr
    temp->next = first;             // temp's node points to first
    first = temp;                   // first takes over temp's Node.


    printf("Good Morning America!\n");
    return 0;
}
