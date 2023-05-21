#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Stack {
    int top;
    int arr[MAX_SIZE];

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int element) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack is full. Cannot push element." << endl;
            return;
        }
        arr[++top] = element;
        cout << "Pushed element: " << element << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop element." << endl;
            return;
        }
        int element = arr[top--];
        cout << "Popped element: " << element << endl;
    }
};

int main() {
    Stack stack;
    int choice, element;

    do {
        cout << "\nStack Operations:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to push: ";
                cin >> element;
                stack.push(element);
                break;

            case 2:
                stack.pop();
                break;

            case 3:
                cout << "Exiting the program..." << endl;
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

    } while (true);

    return 0;
}
