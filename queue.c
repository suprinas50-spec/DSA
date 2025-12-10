#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Enqueue (insert)
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1)
        front = 0;
    queue[rear] = value;
    printf("%d enqueued into queue\n", value);
}

// Dequeue (delete)
int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return -1;
    }
    return queue[front];
}

// Peek (front element)
int peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return -1;
    }
    return queue[front];
}

// Display
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements:\n");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    printf("Dequeued element: %d\n", dequeue());
    printf("Front element: %d\n", peek());
    display();

    return 0;
}
