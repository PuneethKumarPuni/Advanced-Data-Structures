
# Doubly Linked List in C

## Introduction

A **Doubly Linked List** is a type of linked list in which each node has three parts:
1. **Data**: Stores the value (an integer in this case).
2. **Pointer to the Next Node**: A reference (or link) to the next node in the list.
3. **Pointer to the Previous Node**: A reference (or link) to the previous node in the list.

Each node can thus navigate both **forwards** and **backwards** through the list. This two-way navigation makes a doubly linked list more flexible than a singly linked list.

## Key Concepts

### 1. **Node Structure**
Each node in a doubly linked list contains:
- An integer `data` (or any other type depending on the implementation).
- A pointer `next` to the next node in the list.
- A pointer `prev` to the previous node in the list.

In C, the structure can be represented as:
```c
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
```

### 2. **Head Pointer**
The `head` pointer keeps track of the first node in the list. The last node in the list will have its `next` pointer set to `NULL`, indicating the end of the list. Similarly, the first node will have its `prev` pointer set to `NULL`.

### 3. **Operations on a Doubly Linked List**

#### a. **Insertion at the Start**
New nodes can be inserted at the beginning of the list by:
- Creating a new node.
- Setting the `next` pointer of the new node to the current `head`.
- Setting the `prev` pointer of the current `head` to the new node (if the list is not empty).
- Updating the `head` pointer to the new node.

Example of inserting a node at the start:
```c
void insertStart(struct Node** head, int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    newNode->prev = NULL;

    if (*head != NULL) {
        (*head)->prev = newNode;
    }

    *head = newNode;
}
```

#### b. **Traversal**
To print the elements in the doubly linked list, you can traverse it in both **forward** and **backward** directions.

- **Forward Traversal**: Start at the head and move towards the end of the list using the `next` pointer.
- **Backward Traversal**: After reaching the last node, traverse back towards the head using the `prev` pointer.

Example of traversal:
```c
void display(struct Node* node) {
    struct Node* end;

    printf("\nIn Forward Direction\n");
    while (node != NULL) {
        printf(" %d ", node->data);
        end = node;
        node = node->next;
    }

    printf("\nIn Backward Direction\n");
    while (end != NULL) {
        printf(" %d ", end->data);
        end = end->prev;
    }
}
```

### 4. **Advantages of Doubly Linked List**
- **Bidirectional Navigation**: You can traverse the list in both directions.
- **Easier Deletions**: Deleting a node is more efficient as you have access to the previous node as well.
- **Efficient Insertions/Deletions**: Inserting or deleting nodes at both the head and tail is easier due to the presence of both `prev` and `next` pointers.

### 5. **Disadvantages**
- **Extra Memory**: Requires extra memory to store the `prev` pointers in addition to the `next` pointers.
- **Complexity**: Slightly more complex compared to singly linked lists due to the management of two pointers.



### Explanation of the Program:

1. **Node Structure**: 
   - Each node contains three parts: the `data`, the pointer to the next node (`next`), and the pointer to the previous node (`prev`).
   
2. **Insertion Function (`insertStart()`)**: 
   - Creates a new node with the given data and inserts it at the beginning of the list.
   - If the list is not empty, the previous head’s `prev` pointer is updated to point to the new node.
   - The new node becomes the new head of the list.

3. **Display Function (`display()`)**:
   - Traverses the list in two directions:
     - **Forward direction**: From the head to the last node using the `next` pointers.
     - **Backward direction**: From the last node back to the head using the `prev` pointers.

4. **Main Function**:
   - Initializes an empty list and inserts three nodes at the start.
   - Displays the list contents in both forward and backward directions.

### Output Example:
```
In Forward Direction
 3  2  1 
In Backward Direction
 1  2  3 
```

## Conclusion

A **Doubly Linked List** provides a flexible data structure that supports two-way traversal, making it efficient for various operations like insertion, deletion, and traversal. While it uses more memory than a singly linked list, the added flexibility makes it valuable in applications where bidirectional navigation is required.
