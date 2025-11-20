#include <iostream>
class Node {
public:
    int data;
    Node *next;
};

Node *head = NULL, *tail = NULL;

void push(int newData) {
    Node *newNode = new Node;
    newNode->data = newData;
    newNode->next = head; // point new node to current head

    if (head == NULL) {
        head = tail = newNode;
    } else {
        head = newNode; // update head to new node
    }
}

int pop() {
    if (head == NULL) {
        std::cout << "Stack Underflow." << std::endl;
        return -1;
    } else {
        Node *temp = head;
        int tempVal = temp->data;
        head = head->next;
        delete temp;
        return tempVal;
    }
}

void Top() {
    if (head == NULL) {
        std::cout << "Stack is Empty." << std::endl;
    } else {
        std::cout << "Top of Stack: " << head->data << std::endl;
    }
}

// ? NEW FUNCTION: display all stack elements
void display() {
    if (head == NULL) {
        std::cout << "Stack is Empty." << std::endl;
        return;
    }
    Node *temp = head;
    std::cout << "Stack Elements (Top -> Bottom): ";
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    push(1);
    std::cout << "After the first PUSH top of stack is: ";
    Top();
    display();

    push(5);
    std::cout << "After the second PUSH top of stack is: ";
    Top();
    display();

    pop();
    std::cout << "After the first POP operation, top of stack is: ";
    Top();
    display();

    pop();
    std::cout << "After the second POP operation, top of stack: ";
    Top();
    display();

    pop(); // attempt pop on empty stack
    display();

    return 0;
}
