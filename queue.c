#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int queue[SIZE];
int front = -1, rear = -1;

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    peek();
    dequeue();
    display();
    peek();
    return 0;
}