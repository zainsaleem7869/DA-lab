									// Simple Stack
								
// Add Node at START

#include <iostream>

// Define a struct for a stack node
struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top; // Top of the stack

public:
    Stack() : top(NULL) {}

    // Function to push (add) a node at the start of the stack
    void push(int value) {
        Node* newNode = new Node{value, top};
        top = newNode;
    }

    // Function to pop (remove) a node from the stack
    void pop() {
        if (top != NULL) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    // Function to display the stack
    void display() {
        Node* current = top;
        while (current != NULL) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    Stack stack;

    // Push nodes onto the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);

    // Display the original stack
    std::cout << "Original Stack: ";
    stack.display();

    // Pop (remove) a node from the stack
    stack.pop();

    // Display the modified stack
    std::cout << "Modified Stack: ";
    stack.display();

    return 0;
}

// Add Node at END

#include <iostream>

// Define a struct for a stack node
struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top; // Top of the stack

public:
    Stack() : top(NULL) {}

    // Function to push (add) a node at the end of the stack
    void push(int value) {
        Node* newNode = new Node{value, NULL};
        if (top == NULL) {
            top = newNode;
        } else {
            Node* current = top;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to pop (remove) a node from the stack
    void pop() {
        if (top != NULL) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    // Function to display the stack
    void display() {
        Node* current = top;
        while (current != NULL) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    Stack stack;

    // Push nodes onto the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);

    // Display the original stack
    std::cout << "Original Stack: ";
    stack.display();

    // Pop (remove) a node from the stack
    stack.pop();

    // Display the modified stack
    std::cout << "Modified Stack: ";
    stack.display();

    return 0;
}


// Add Node END

#include <iostream>

// Define a struct for a stack node
struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top; // Top of the stack

public:
    Stack() : top(NULL) {}

    // Function to push (add) a node at the end of the stack
    void push(int value) {
        Node* newNode = new Node{value, NULL};
        if (top == NULL) {
            top = newNode;
        } else {
            Node* current = top;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to pop (remove) a node from the stack
    void pop() {
        if (top != NULL) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    // Function to display the stack
    void display() {
        Node* current = top;
        while (current != NULL) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    Stack stack;

    // Push nodes onto the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);

    // Display the original stack
    std::cout << "Original Stack: ";
    stack.display();

    // Pop (remove) a node from the stack
    stack.pop();

    // Display the modified stack
    std::cout << "Modified Stack: ";
    stack.display();

    return 0;
}


// Add Node at Specific Point

#include <iostream>

// Define a struct for a stack node
struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top; // Top of the stack

public:
    Stack() : top(NULL) {}

    // Function to push (add) a node at a specific point in the stack
    void push(int value, int position) {
        if (position < 0) {
            std::cout << "Invalid position. Position should be a non-negative integer." << std::endl;
            return;
        }
        Node* newNode = new Node{value, NULL};
        if (position == 0) {
            newNode->next = top;
            top = newNode;
            return;
        }
        Node* current = top;
        int currentIndex = 0;
        while (current != NULL && currentIndex < position - 1) {
            current = current->next;
            currentIndex++;
        }
        if (current != NULL) {
            newNode->next = current->next;
            current->next = newNode;
        } else {
            std::cout << "Position exceeds the length of the stack. Node not inserted." << std::endl;
        }
    }

    // Function to pop (remove) a node from the stack
    void pop() {
        if (top != NULL) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    // Function to display the stack
    void display() {
        Node* current = top;
        while (current != NULL) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    Stack stack;

    // Push nodes onto the stack
    stack.push(1, 0); // Insert at the beginning
    stack.push(2, 1); // Insert at the second position
    stack.push(3, 2); // Insert at the third position

    // Display the original stack
    std::cout << "Original Stack: ";
    stack.display();

    // Pop (remove) a node from the stack
    stack.pop();

    // Display the modified stack
    std::cout << "Modified Stack: ";
    stack.display();

    return 0;
}


// Delete Node at Start

#include <iostream>

// Define a struct for a stack node
struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top; // Top of the stack

public:
    Stack() : top(NULL) {}

    // Function to push (add) a node to the stack
    void push(int value) {
        Node* newNode = new Node{value, top};
        top = newNode;
    }

    // Function to pop (remove) a node from the start of the stack
    void pop() {
        if (top != NULL) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    // Function to display the stack
    void display() {
        Node* current = top;
        while (current != NULL) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    Stack stack;

    // Push nodes onto the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);

    // Display the original stack
    std::cout << "Original Stack: ";
    stack.display();

    // Pop (remove) a node from the start of the stack
    stack.pop();

    // Display the modified stack
    std::cout << "Modified Stack: ";
    stack.display();

    return 0;
}


// Delete Node at END

#include <iostream>

// Define a struct for a stack node
struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top; // Top of the stack

public:
    Stack() : top(nullptr) {}

    // Function to push (add) a node to the stack
    void push(int value) {
        Node* newNode = new Node{value, top};
        top = newNode;
    }

    // Function to pop (remove) a node from the stack
    void pop() {
        if (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    // Function to display the stack
    void display() {
        Node* current = top;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Function to remove the last node from the stack
    void removeLast() {
        if (top == nullptr) {
            std::cout << "Stack is empty. No node to remove." << std::endl;
            return;
        }

        // If there is only one node in the stack, remove it
        if (top->next == nullptr) {
            delete top;
            top = nullptr;
            return;
        }

        // Traverse the stack to the second-to-last node
        Node* current = top;
        while (current->next->next != nullptr) {
            current = current->next;
        }

        // Delete the last node
        delete current->next;
        current->next = nullptr;
    }
};

int main() {
    Stack stack;

    // Push nodes onto the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);

    // Display the original stack
    std::cout << "Original Stack: ";
    stack.display();

    // Remove the last node from the stack
    stack.removeLast();

    // Display the modified stack
    std::cout << "Modified Stack: ";
    stack.display();

    return 0;
}


// Delete Node at Specific Point

#include <iostream>

// Define a struct for a stack node
struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top; // Top of the stack

public:
    Stack() : top(nullptr) {}

    // Function to push (add) a node to the stack
    void push(int value) {
        Node* newNode = new Node{value, top};
        top = newNode;
    }

    // Function to pop (remove) a node from the stack
    void pop() {
        if (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    // Function to display the stack
    void display() {
        Node* current = top;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Function to delete a node at a specific position
    void deleteNodeAtPosition(int position) {
        if (position <= 0) {
            std::cout << "Invalid position. Position must be a positive integer." << std::endl;
            return;
        }

        if (position == 1) {
            pop(); // Remove the top element
            return;
        }

        Node* current = top;
        int currentPosition = 1;

        while (current != nullptr && currentPosition < position - 1) {
            current = current->next;
            currentPosition++;
        }

        if (current == nullptr || current->next == nullptr) {
            std::cout << "Position is out of range." << std::endl;
            return;
        }

        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
};

int main() {
    Stack stack;

    // Push nodes onto the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);

    // Display the original stack
    std::cout << "Original Stack: ";
    stack.display();

    // Delete a node at a specific position
    int position = 2;
    stack.deleteNodeAtPosition(position);

    // Display the modified stack
    std::cout << "Modified Stack: ";
    stack.display();

    return 0;
}
