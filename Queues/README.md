# Queue Implementation in C

## Overview

This repository contains a simple implementation of a **Queue** in C. A queue is a linear data structure that follows the **FIFO (First In, First Out)** principle. This means that the element that is added first will be the first one to be removed.

In this program, we have implemented the queue using a static array of fixed size, along with common queue operations such as:

- **Enqueue**: Adding an element to the rear of the queue
- **Dequeue**: Removing an element from the front of the queue
- **isEmpty**: Checking if the queue is empty
- **isFull**: Checking if the queue is full
- **Display**: Printing all elements in the queue

## Key Concepts

### What is a Queue?
A queue is a **linear data structure** that stores elements in a sequential manner. The operations are restricted as follows:

1. **Enqueue**: Adds an element to the rear of the queue.
2. **Dequeue**: Removes an element from the front of the queue.
3. **isEmpty**: Checks if the queue is empty.
4. **isFull**: Checks if the queue is full.

A queue can be visualized like a line of people waiting for their turn. The first person in line is the first to be served, and people can only join from the end of the line.

### How is a Queue Implemented?
There are multiple ways to implement a queue. In this program, we have implemented a queue using a **static array** of size `MAX` (defined as 100). The `front` and `rear` variables are used to keep track of where elements are dequeued and enqueued, respectively.

- `front`: Points to the front of the queue, where elements are dequeued.
- `rear`: Points to the last element in the queue, where elements are enqueued.

### Operations Implemented

- **initializeQueue()**: Initializes the queue by setting the `front` and `rear` to `-1`, indicating the queue is empty.
- **isEmpty()**: Checks if the queue is empty. Returns true if `front == -1`.
- **isFull()**: Checks if the queue is full. Returns true if `rear == MAX - 1`.
- **enqueue()**: Adds an element to the rear of the queue. If the queue is full, it prints an error message.
- **dequeue()**: Removes an element from the front of the queue. If the queue is empty, it prints an error message.
- **displayQueue()**: Displays all the elements in the queue from `front` to `rear`.

## Code Explanation

The program defines a `Queue` structure that stores the queue elements in an array and tracks the front and rear indices.

The main function demonstrates the following operations:
1. Initialize the queue.
2. Enqueue elements (10, 20, 30) into the queue.
3. Display the current state of the queue.
4. Dequeue an element and display the queue again.

## OUT PUT :
 Queue elements:

 10 20 30 

 Dequeued: 10

 Queue elements:
 
 20 30
