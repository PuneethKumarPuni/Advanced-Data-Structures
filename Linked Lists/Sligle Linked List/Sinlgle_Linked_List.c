#include<stdio.h>    
#include<stdlib.h>    

// Define the structure for the Linked List Node
struct Node {
    // Data part of the node
  int data;     
   // Pointer to the next node in the list        
  struct Node *next;    
};

// Function to delete the node at the start of the Linked List
void deleteStart (struct Node **head) {
  // Create a temporary pointer to the current head node
  struct Node *temp = *head;

  // If the Linked List is empty, print a message and exit the function
  if (*head == NULL) {
    printf ("Linked List Empty, nothing to delete");
    return;
  }

  // Move the head pointer to the next node, effectively removing the first node
  *head = (*head)->next;

  // Print the value of the deleted node
  printf ("\n%d deleted\n", temp->data);

  // Free the memory of the deleted node
  free (temp);
}

// Function to insert a new node at the start of the Linked List
void insertStart (struct Node **head, int data) {
  // Dynamically allocate memory for the new node
  struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));

  // Assign the data to the new node
  newNode->data = data;

  // Make the new node point to the current head node
  newNode->next = *head;

  // Update the head pointer to point to the new node
  *head = newNode;

  // Print the value of the inserted node
  printf ("\n%d Inserted\n", newNode->data);
}

// Function to display the contents of the Linked List
void display (struct Node *node) {
  printf ("\nLinked List: ");

  // Traverse the list until the end (NULL) is reached
  while (node != NULL) {
    // Print the data of the current node
    printf ("%d ", node->data);
    // Move to the next node
    node = node->next;
  }
  printf ("\n");
}

int main () {
  // Initialize the head of the Linked List as NULL (empty list)
  struct Node *head = NULL;

  // Insert nodes at the start of the Linked List
  // Note: '&head' is passed since the head is being modified
  insertStart (&head, 100);
  insertStart (&head, 80);
  insertStart (&head, 60);
  insertStart (&head, 40);
  insertStart (&head, 20);

  // Display the current state of the Linked List
  // No need to pass '&head' as the head is not being modified here
  display (head);

  // Delete nodes from the start of the Linked List
  deleteStart (&head);
  deleteStart (&head);

  // Display the Linked List after deletions
  display (head);

  return 0;  // End of the program
}
