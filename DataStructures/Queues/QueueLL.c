#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the queue
struct Node {
    int data;
    struct Node* next;
};

// Define a structure for the queue
struct Queue {
    struct Node *front, *rear;
};

// Function to create a new node with the given data
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Function to create a new empty queue
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;
    return queue;
}

// Function to enqueue an element into the queue
void enqueue(struct Queue* queue, int data) {
    struct Node* temp = newNode(data);
    if (queue->rear == NULL) {
        queue->front = queue->rear = temp;
        return;
    }
    queue->rear->next = temp;
    queue->rear = temp;
}

// Function to dequeue an element from the queue
int dequeue(struct Queue* queue) {
    if (queue->front == NULL) {
        printf("Queue is empty\n");
        return -1; // Return -1 for an empty queue (assuming -1 is not a valid element)
    }
    int data = queue->front->data;
    struct Node* temp = queue->front;
    queue->front = queue->front->next;
    free(temp);
    if (queue->front == NULL) {
        queue->rear = NULL;
    }
    return data;
}

// Function to check if the queue is empty
int isEmpty(struct Queue* queue) {
    return queue->front == NULL;
}

// Function to display the elements of the queue
void display(struct Queue* queue) {
    struct Node* current = queue->front;
    if (current == NULL) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Queue* queue = createQueue();

    // Enqueue elements into the queue
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);

    // Display the queue elements
    display(queue);

    // Dequeue elements from the queue and print them
    printf("Dequeued element: %d\n", dequeue(queue));
    printf("Dequeued element: %d\n", dequeue(queue));
    printf("Dequeued element: %d\n", dequeue(queue));

    // Display the queue elements after dequeue operations
    display(queue);

    // Check if the queue is empty
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
    } else {
        printf("Queue is not empty\n");
    }

    return 0;
}
