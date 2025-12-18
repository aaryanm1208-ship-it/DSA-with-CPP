#include <iostream>
using namespace std;

int stack[5], top = -1;

void push(int x) {
    if (top == 4) return;
    stack[++top] = x;
}

void pop() {
    if (top == -1) return;
    top--;
}

int main() {
    push(10);
    push(20);
    pop();

    for (int i = 0; i <= top; i++)
        cout << stack[i] << " ";
    return 0;
}
