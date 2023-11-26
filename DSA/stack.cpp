#include <iostream>
#include <stack>

using namespace std;

class StackOperations {
private:
    stack<int> myStack;

public:
    void pushElement(int value) {
        myStack.push(value);
        cout << "Pushed " << value << " onto the stack." << endl;
    }

    void popElement() {
        if (!myStack.empty()) {
            int poppedValue = myStack.top();
            myStack.pop();
            cout << "Popped " << poppedValue << " from the stack." << endl;
        } else {
            cout << "Stack is empty. Cannot pop." << endl;
        }
    }

    void display() {
        if (myStack.empty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack: ";
            stack<int> tempStack = myStack; // Create a temporary stack for display
            while (!tempStack.empty()) {
                cout << tempStack.top() << " ";
                tempStack.pop();
            }
            cout << endl;
        }
    }
};

int main() {
    StackOperations stackOps;

    stackOps.pushElement(10);
    stackOps.pushElement(20);
    stackOps.pushElement(30);
    stackOps.display();

    stackOps.popElement();
    stackOps.display();

    stackOps.popElement();
    stackOps.popElement(); // Trying to pop from an empty stack
    stackOps.display();

    return 0;
}
