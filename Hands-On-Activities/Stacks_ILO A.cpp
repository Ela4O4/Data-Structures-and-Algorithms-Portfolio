#include <iostream>
#include <stack> // Calling Stack from the STL
using namespace std;

int main() {
    stack<int> newStack;
    newStack.push(3);  // Adds 3 to the stack
    newStack.push(8);
    newStack.push(15);

    cout << "Stack Empty? " << newStack.empty() << endl;
    cout << "Stack Size: " << newStack.size() << endl;
    cout << "Top Element of the Stack: " << newStack.top() << endl;

    newStack.pop(); // removes 15

    cout << "Top Element of the Stack: " << newStack.top() << endl;
    cout << "Stack Size: " << newStack.size() << endl;

    return 0;
}
