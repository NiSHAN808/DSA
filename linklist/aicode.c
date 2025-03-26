#include <stdio.h>
#include <stdlib.h>

// Define a node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to print the linked list
void traverseLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to create a new node
 struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
//In C, the -> operator is called the arrow operator, and it is used to access members of a structure
//Why Use ->?
/*
Simplifies syntax: Instead of (*ptr).member, you can just write ptr->member.

Improves readability: The arrow notation is clearer when working with pointers to structures. */
int main() {
    // Creating nodes
    struct Node* head = createNode(1);
    struct Node* second = createNode(2);
    struct Node* third = createNode(3);

    // Linking nodes
    head->next = second;
    second->next = third;

    // Traversing and printing the linked list
    printf("Linked List: ");
    traverseLinkedList(head);

    // Free allocated memory
    free(head);
    free(second);
    free(third);
    
    return 0;
}
