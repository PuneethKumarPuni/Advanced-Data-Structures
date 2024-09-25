// Standard input/output library
#include <stdio.h>  
// Standard library for memory allocation, process control
#include <stdlib.h> 

// Define a constant for the maximum size of the queue
#define MAX 100 

// Define a structure for the queue
typedef struct {
    // Array to hold the elements of the queue
    int items[MAX]; 
    // Variables to track the front and rear of the queue
    int front, rear; 
} Queue;

// Function to initialize the queue
void initializeQueue(Queue *q) {
    // Initialize front to -1 indicating the queue is empty
    q->front = -1; 
    // Initialize rear to -1 indicating the queue is empty
    q->rear = -1;  
}

// Function to check if the queue is empty
int isEmpty(Queue *q) {
    // Returns 1 (true) if front is -1, meaning the queue is empty
    return q->front == -1; 
}

// Function to check if the queue is full
int isFull(Queue *q) {
    // Returns 1 (true) if rear has reached the maximum index, meaning the queue is full
    return q->rear == MAX - 1; 
}

// Function to add an item to the queue
void enqueue(Queue *q, int item) {
    // Check if the queue is full before adding an item
    if (isFull(q)) {
        // Print a message if the queue is full
        printf("Queue is full!\n"); 
        // Exit the function
        return; 
    }
    
    // If the queue is empty, initialize the front to 0 (first position)
    if (isEmpty(q)) {
        q->front = 0;
    }
    // Increment rear and add the new item to the rear of the queue
    q->items[++(q->rear)] = item;
}

// Function to remove an item from the queue
int dequeue(Queue *q) {
    // Check if the queue is empty before attempting to dequeue
    if (isEmpty(q)) {
        // Print a message if the queue is empty
        printf("Queue is empty!\n"); 
        // Return -1 to indicate that the queue is empty
        return -1; 
    }
    
    // Store the front item to be returned
    int item = q->items[q->front];
    // If the front and rear are the same, the queue is now empty
    if (q->front >= q->rear) {
        // Reset the queue to empty state
        q->front = q->rear = -1; 
    } else {
        // Move the front forward to remove the item
        q->front++;
    }
    return item; // Return the dequeued item
}

// Function to display the contents of the queue
void displayQueue(Queue *q) {
    // Check if the queue is empty
    if (isEmpty(q)) {
        // Print a message if the queue is empty
        printf("Queue is empty!\n"); 
        return; // Exit the function
    }
    
    // Display the queue elements from front to rear
    printf("Queue elements:\n");
    for (int i = q->front; i <= q->rear; i++) {
        // Print each element
        printf("%d ", q->items[i]); 
    }
    // Print a newline after displaying all elements
    printf("\n"); 
}

int main() {
    // Declare a queue instance
    Queue q; 
    // Initialize the queue
    initializeQueue(&q); 

    // Enqueue some elements into the queue
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    // Display the current queue
    displayQueue(&q);

    // Dequeue an element and display the remaining queue
    // Dequeue and print the removed element
    printf("Dequeued: %d\n", dequeue(&q)); 
    // Display the queue after dequeuing
    displayQueue(&q); 
    // Return success status
    return 0; 
}
