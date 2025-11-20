// ILO C: Expressions

#include <iostream>
#include <stack>
using namespace std;

// Function to check if the given expression is valid
bool isValidExpression(string expr) {
    stack<char> s;
    for (char ch : expr) {
        if (ch == '(' || ch == '[' || ch == '{') {
            s.push(ch);
        } else if (ch == ')' || ch == ']' || ch == '}') {
            if (s.empty()) return false; // no opening bracket to match

            char top = s.top();
            s.pop();

            if ((ch == ')' && top != '(') ||
                (ch == ']' && top != '[') ||
                (ch == '}' && top != '{')) {
                return false; // mismatch
            }
        }
    }
    return s.empty(); // valid only if stack is empty at the end
}

int main() {
    string expressions[] = {
        "(A+B)+(C-D)",
        "((A+B)+(C-D)",
        "((A+B)+[C-D])",
        "((A+B]+[C-D]}"
    };

    for (string expr : expressions) {
        cout << "Expression: " << expr << endl;
        if (isValidExpression(expr)) {
            cout << "Output: Expression is Valid" << endl;
        } else {
            cout << "Output: Invalid Expression" << endl;
        }
        cout << "-------------------------" << endl;
    }

    return 0;
}


