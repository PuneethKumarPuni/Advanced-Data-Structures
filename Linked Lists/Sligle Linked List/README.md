
# Singly Linked List in C

## Introduction

A **Singly Linked List** is a type of data structure that consists of nodes, where each node contains two parts:
1. **Data**: Stores the value or information.
2. **Pointer**: A reference (or link) to the next node in the list.

The **head** pointer points to the first node in the list, and the last node points to `NULL`, indicating the end of the list. Unlike arrays, a linked list doesn't require contiguous memory locations, which makes it more flexible for dynamic memory management.

## Key Concepts

### 1. **Node Structure**
Each node in a singly linked list contains:
- An integer `data` (or any other type depending on the implementation).
- A pointer `next` that points to the next node in the list.

In C, the structure can be represented as:
```c
struct Node {
    int data;
    struct Node* next;
};
```

### 2. **Head Pointer**
The `head` pointer keeps track of the first node in the list. It’s essential because it allows you to traverse the list, starting from the first node.

### 3. **Operations on Singly Linked List**

#### a. **Insertion**
New nodes can be inserted at different positions in the linked list:
- At the **start** of the list: Insert the new node before the current head and make it the new head.
- At the **end** of the list: Traverse to the last node and append the new node.
- At a **specific position**: Insert the node between two existing nodes.

Example of inserting a node at the start:
```c
void insertStart(struct Node** head, int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;  // Point the new node's next to the current head
    *head = newNode;        // Update the head pointer to the new node
}
```

#### b. **Deletion**
Nodes can be removed from the list by adjusting the pointers. Common deletion operations:
- Delete from the **start**: Remove the head node and move the head pointer to the next node.
- Delete from the **end**: Traverse to the second-to-last node, set its `next` pointer to `NULL`, and free the last node.
- Delete a node by **value**: Find the node with the desired value and adjust pointers to remove it.

Example of deleting a node at the start:
```c
void deleteStart(struct Node** head) {
    if (*head == NULL) {
        printf("Linked List is empty!
");
        return;
    }
    struct Node* temp = *head;  // Store the current head
    *head = (*head)->next;      // Move the head to the next node
    free(temp);                 // Free the memory of the old head node
}
```

#### c. **Traversal**
To print or access nodes in the list, start from the head and move to the next node using the `next` pointer, until `NULL` is encountered.

Example:
```c
void display(struct Node* head) {
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL
");
}
```

### 4. **Advantages**
- **Dynamic Size**: Linked lists can grow or shrink at runtime, as memory is allocated dynamically.
- **Efficient Insertions/Deletions**: Inserting or deleting nodes at the start or in the middle is more efficient compared to arrays, as you don't need to shift elements.

### 5. **Disadvantages**
- **Extra Memory**: Each node requires additional memory for storing the pointer (`next`).
- **Sequential Access**: To access a specific node, you need to traverse from the head, unlike arrays where you can directly access elements by index.

