// Implementing stack using an array
#include <stdio.h>
#include <stdlib.h>

// Define the size of the stack
#define SIZE 4 

// Global variables: top keeps track of the top of the stack, inp_array is the array that stores stack elements
int top = -1, inp_array[SIZE]; 
// Function to push an element onto the stack
void push(); 
// Function to pop an element from the stack
void pop(); 
// Function to display all elements in the stack
void show(); 

int main()
{
    // Variable to store user choice
    int choice; 

    // Infinite loop to perform stack operations until the user exits
    while (1)
    {
        // Displaying the available stack operations
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter the choice: ");
        // Taking user input for the operation choice
        scanf("%d", &choice); 

        // Perform the corresponding operation based on user's choice
        switch (choice)
        {
        case 1:
            // Call push function to add element to the stack
            push(); 
            break;
        case 2:
            // Call pop function to remove element from the stack
            pop(); 
            break;
        case 3:
            // Call show function to display the stack elements
            show(); 
            break;
        case 4:
            // Exit the program
            exit(0); 

        default:
            // Print error message for invalid choice
            printf("\nInvalid choice!!"); 
        }
    }
}

// Function to add an element to the stack
void push()
{
    // Variable to store the element to be pushed
    int x; 

    // Check if the stack is full
    if (top == SIZE - 1)
    {
        // Print overflow error if stack is full
        printf("\nOverflow!!"); 
    }
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        // Take user input for the element to be pushed
        scanf("%d", &x); 
        // Increment the top pointer
        top = top + 1; 
        // Add the element to the stack
        inp_array[top] = x; 
    }
}

// Function to remove an element from the stack
void pop()
{
    // Check if the stack is empty
    if (top == -1)
    {
        // Print underflow error if stack is empty
        printf("\nUnderflow!!"); 
    }
    else
    {
        // Display the element being popped
        printf("\nPopped element: %d", inp_array[top]); 
        // Decrement the top pointer
        top = top - 1; 
    }
}

// Function to display the elements in the stack
void show()
{
    // Check if the stack is empty
    if (top == -1)
    {
        // Print underflow message if stack is empty
        printf("\nUnderflow!!"); 
    }
    else
    {
        printf("\nElements present in the stack: \n");
        // Loop through the stack elements from top to bottom
        for (int i = top; i >= 0; --i)
            // Print each element in the stack
            printf("%d\n", inp_array[i]); 
    }
}
