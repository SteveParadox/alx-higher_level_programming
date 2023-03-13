#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

/* Define the structure of a single node in the linked list */
typedef struct Node {
    int data;
    struct Node* next;
} Node;

/* Define the structure of the linked list */
typedef struct LinkedList {
    Node* head;
    int size;
} LinkedList;

/* Function declarations */

/* Creates a new linked list and returns a pointer to it */
LinkedList* create_list();

/* Adds a new node to the end of the linked list */
void add_node(LinkedList* list, int data);

/* Removes the first node with the specified data from the linked list */
void remove_node(LinkedList* list, int data);

/* Prints the contents of the linked list */
void print_list(LinkedList* list);

/* Frees the memory allocated to the linked list */
void free_list(LinkedList* list);

#endif /* LIST_H */
