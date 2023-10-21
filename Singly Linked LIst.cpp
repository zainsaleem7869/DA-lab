                           // Singly Linked LISt //

// Add Node in Start

#include <iostream>

// Define a struct for a linked list node
struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head; // Head of the linked list

public:
    LinkedList() : head(NULL) {}

    // Function to insert a node at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    // Function to display the linked list
    void display() {
        Node* current = head;
        while (current != NULL) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList list;

    // Add nodes to the beginning
    list.insertAtBeginning(30);
    list.insertAtBeginning(20);
    list.insertAtBeginning(2);
    list.insertAtBeginning(1);

    // Display the linked list
    list.display();

    return 0;
}



// Add node at END

#include <iostream>

// Define a struct for a linked list node
struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head; // Head of the linked list

public:
    LinkedList() : head(NULL) {}

    // Function to insert a node at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to display the linked list
    void display() {
        Node* current = head;
        while (current != NULL) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList list;

    // Add nodes to the end
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    // Display the linked list
    list.display();

    return 0;
}


// Add node at Specific POINT

#include <iostream>

// Define a struct for a linked list node
struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head; // Head of the linked list

public:
    LinkedList() : head(NULL) {}

    // Function to insert a node at a specific position
    void insertAtPosition(int value, int position) {
        Node* newNode = new Node;
        newNode->data = value;

        if (position <= 0) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* current = head;
        int currentPosition = 0;
        while (current != NULL && currentPosition < position - 1) {
            current = current->next;
            currentPosition++;
        }

        if (current != NULL) {
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    // Function to display the linked list
    void display() {
        Node* current = head;
        while (current != NULL) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList list;

    // Add nodes at specific positions
    list.insertAtPosition(1, 0);  // Insert at the beginning
    list.insertAtPosition(3, 1);  // Insert at position 1
    list.insertAtPosition(2, 1);  // Insert at position 1
    list.insertAtPosition(4, 3);  // Insert at position 3

    // Display the linked list
    list.display();

    return 0;
}