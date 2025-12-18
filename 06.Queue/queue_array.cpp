#include <iostream>
using namespace std;

int q[5], front = 0, rear = -1;

void enqueue(int x) {
    if (rear == 4) return;
    q[++rear] = x;
}

void dequeue() {
    if (front > rear) return;
    front++;
}

int main() {
    enqueue(10);
    enqueue(20);
    dequeue();

    for (int i = front; i <= rear; i++)
        cout << q[i] << " ";
    return 0;
}
