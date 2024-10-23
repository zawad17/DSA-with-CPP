#include <iostream>

using namespace std;

class Queue {
private:
    int *queueArray;
    int front;
    int rear;
    int size;

public:
    
    Queue(int size) {
        this->size = size;
        queueArray = new int[size];
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == size - 1) {
            cout << "Error Queue is full. Cannot enqueue." << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear++;
        queueArray[rear] = value;
    }

    int dequeue() {
        if (front == -1) {
            cout << "Error: Queue is empty. Cannot dequeue." << endl;
            return -1; 
        }
        int frontElement = queueArray[front];
        front++;
        if (front > rear) {
            front = -1;
            rear = -1;
        }
        return frontElement;
    }

   
    void printQueue() {
        cout<<"Current Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << queueArray[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5); 
    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(25);
    q.enqueue(35);
    q.enqueue(45);
    q.enqueue(10);
    cout << "Front element dequeued: " << q.dequeue() << endl;

    q.printQueue();
    return 0;
}