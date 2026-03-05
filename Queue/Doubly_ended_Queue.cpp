#include <iostream>
using namespace std;

class Dequeue {
    int *arr;
    int size;
    int front;
    int rear;

public:
    Dequeue(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    ~Dequeue() {
        delete[] arr; // Free allocated memory
    }

    void pushBack(int val) {
        if ((front == 0 && rear == size - 1) || (rear == front - 1)) {
            cout << "Overflow" << endl;
            return;
        }
        if (front == -1 && rear == -1) {
            front = rear = 0;
        } else if (rear == size - 1 && front != 0) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = val;
    }

    void pushFront(int val) {
        if ((front == 0 && rear == size - 1) || (rear == front - 1)) {
            cout << "Overflow" << endl;
            return;
        }
        if (front == -1 && rear == -1) {
            front = rear = 0;
        } else if (front == 0) {
            front = size - 1;
        } else {
            front--;
        }
        arr[front] = val;
    }

    void popFront() {
        if (front == -1 && rear == -1) {
            cout << "Underflow" << endl;
            return;
        }
        arr[front] = -1;
        if (front == rear) {
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }
    }

    void popBack() {
        if (front == -1 && rear == -1) {
            cout << "Underflow" << endl;
            return;
        }
        arr[rear] = -1;
        if (front == rear) {
            front = rear = -1;
        } else if (rear == 0) {
            rear = size - 1;
        } else {
            rear--;
        }
    }

    void print() {
        cout << "Printing Queue: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size = 6;
    Dequeue q(size);

    q.print();

    q.pushBack(10);
    q.print();

    q.pushFront(20);
    q.print();

    q.pushBack(30);
    q.print();

    q.pushFront(40);
    q.print();

    q.pushBack(50);
    q.print();

    q.pushFront(60);
    q.print();

    q.popFront();
    q.popBack();
    q.popFront();

    q.print();
    return 0;
}
