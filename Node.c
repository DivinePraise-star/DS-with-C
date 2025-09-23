#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node {
    int data;          // Data part
    struct Node* next; // Pointer to the next Node
};

// Function to create a new Node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    // Example usage
    struct Node* head = createNode(1);
    head->next = createNode(2);
    
    // Print the linked list
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Free memory (not shown)
    return 0;
}