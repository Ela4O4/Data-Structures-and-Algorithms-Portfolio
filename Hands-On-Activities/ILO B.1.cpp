#include <iostream>
using namespace std;

const size_t maxCap = 100;
int stack[maxCap]; // stack with max of 100 elements
int top = -1, newData;

void push();
void pop();
void Top();
bool isEmpty();   // NEW FUNCTION
void display();

int main() {
    int choice;
    cout << "Enter number of max elements for new stack: ";
    cin >> maxCap;

    while (true) {
        cout << "\nStack Operations.\n";
        cout << "1. PUSH\n2. POP\n3. TOP\n4. isEMPTY\n5. DISPLAY\n6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: Top(); break;
            case 4: cout << (isEmpty() ? "Stack is Empty" : "Stack is NOT Empty") << endl; break;
            case 5: display(); break;
            case 6: return 0;
            default: cout << "Invalid Choice." << endl; break;
        }
    }
    return 0;
}

bool isEmpty() {
    return (top == -1);
}

void push() {
    // check if full
    if (top == maxCap - 1) {
        cout << "Stack Overflow." << endl;
        return;
    }
    cout << "New Value: ";
    cin >> newData;
    stack[++top] = newData;
}

void pop() {
    // check if empty
    if (isEmpty()) {
        cout << "Stack Underflow." << endl;
        return;
    }
    cout << "Popping: " << stack[top--] << endl;
}

void Top() {
    if (isEmpty()) {
        cout << "Stack is Empty." << endl;
        return;
    }
    cout << "The element on the top of the stack is " << stack[top] << endl;
}

void display() {
    if (isEmpty()) {
        cout << "Stack is Empty." << endl;
        return;
    }
    cout << "Stack Elements (Top -> Bottom): ";
    for (int j = top; j >= 0; j--) {
        cout << stack[j] << " ";
    }
    cout << endl;
}
