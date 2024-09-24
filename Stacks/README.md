# Stack Implementation Using Array in C

## Overview

This project implements a **stack** data structure using a static array in C. A stack is a linear data structure that follows the **Last In First Out (LIFO)** principle. In a stack, the element that is added last is the first to be removed. Stacks are commonly used in various applications, including function call management, expression evaluation, and undo mechanisms in software.

## Stack Operations

A stack generally supports the following operations:
- **Push**: Adds an element to the top of the stack.
- **Pop**: Removes the element from the top of the stack.
- **Peek** (not implemented in this code): Views the element at the top without removing it.
- **IsEmpty**: Checks whether the stack is empty.
- **IsFull**: Checks whether the stack is full.

## Program Explanation

This C program implements a stack using an array with a fixed size of 4. The program provides three main operations to manipulate the stack:
1. **Push**: Allows the user to insert elements into the stack, provided the stack is not full.
2. **Pop**: Allows the user to remove elements from the stack, provided the stack is not empty.
3. **Show**: Displays the current elements in the stack, from top to bottom.

### Code Breakdown

- **Global Variables**:
  - `top`: An integer variable that keeps track of the index of the top element in the stack. It is initialized to `-1` to indicate that the stack is initially empty.
  - `inp_array[SIZE]`: An array to store stack elements, where `SIZE` is the maximum number of elements the stack can hold (4 in this case).

- **Functions**:
  1. **push()**: 
     - Checks if the stack is full by comparing `top` with `SIZE - 1`. 
     - If the stack is not full, it prompts the user for an element, increments `top`, and adds the element to the stack.
  
  2. **pop()**:
     - Checks if the stack is empty by verifying if `top == -1`.
     - If the stack is not empty, it removes the element from the top and decrements `top`.
  
  3. **show()**:
     - Displays the elements present in the stack from the topmost element down to the bottom.
     - If the stack is empty, it prints an "Underflow" message.

- **Main Function**:
  - Continuously displays a menu with options to **Push**, **Pop**, **Show**, or **Exit**.
  - It takes user input for the choice and calls the respective function based on the user's selection.
  - If an invalid choice is entered, it displays an error message.

### Example Usage

Perform operations on the stack:
1. Push the element
2. Pop the element
3. Show
4. End

Enter the choice: 1
Enter the element to be added onto the stack: 10

Enter the choice: 3
Elements present in the stack: 
10

Enter the choice: 1
Enter the element to be added onto the stack: 20

Enter the choice: 3
Elements present in the stack: 
20
10

Enter the choice: 2
Popped element: 20

Enter the choice: 3
Elements present in the stack: 
10
