#include<stdio.h>
#include<stdlib.h>

// Define the structure for a doubly linked list node
struct Node {
  // Stores the data value (integer)
    int data;      
     // Pointer to the next node in the list     
    struct Node *next; 
    // Pointer to the previous node in the list
    struct Node *prev;  
};

// Function to insert a new node at the start of the doubly linked list
void insertStart(struct Node **head, int data) {
    // Dynamically create memory for a new node
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    
    // Assign the data to the new node
    newNode->data = data;
    
    // Make the new node's next pointer point to the current head (old first node)
    newNode->next = *head;

    // Since this node is being inserted at the start, its previous pointer is NULL
    newNode->prev = NULL;

    // If the list already has nodes, update the current head's previous pointer to this new node
    if (*head != NULL) {
        (*head)->prev = newNode;
    }

    // Change the head pointer to point to this new node (new first node)
    *head = newNode;
}

// Function to display the doubly linked list both forward and backward
void display(struct Node *node) {
    struct Node *end;

    // Traverse the list in forward direction and print the data
    printf("\nIn Forward Direction\n");
    while (node != NULL) {
      // Print current node's data
        printf(" %d ", node->data); 
         // Save the current node to start backward traversal later 
        end = node;          
        // Move to the next node       
        node = node->next;           
    }

    // Now traverse the list in backward direction starting from the last node (saved in 'end')
    printf("\nIn Backward direction \n");
    while (end != NULL) {
      // Print the data of the node
        printf(" %d ", end->data); 
        // Move to the previous node 
        end = end->prev;            
    }
}

int main() {
    struct Node *head = NULL;  // Initialize the head of the doubly linked list as NULL (empty list)

    // Insert nodes at the start of the list
    // Insert node with data 1
    insertStart(&head, 1);  
    // Insert node with data 2
    insertStart(&head, 2);  
    // Insert node with data 3
    insertStart(&head, 3);  

    // Display the list both in forward and backward direction
    display(head);

    return 0;
}
