								// Circular linked list
								
// Add Node at START

#include <iostream>

// Define a struct for a circular linked list node
struct Node {
    int data;
    Node* next;
};

class CircularLinkedList {
private:
    Node* head; // Head of the circular linked list

public:
    CircularLinkedList() : head(NULL) {}

    // Function to insert a node at the start
    void insertAtStart(int value) {
        Node* newNode = new Node;
        newNode->data = value;

        if (head == NULL) {
            newNode->next = newNode; // Point to itself
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    // Function to display the circular linked list
    void display() {
        if (head == NULL) {
            return;
        }

        Node* current = head;
        do {
            std::cout << current->data << " ";
            current = current->next;
        } while (current != head);

        std::cout << std::endl;
    }
};

int main() {
    CircularLinkedList list;

    // Add nodes at the start
    list.insertAtStart(30);
    list.insertAtStart(20);
    list.insertAtStart(2);
    list.insertAtStart(1);

    // Display the circular linked list
    list.display();

    return 0;
}


// Add Node at END

#include <iostream>

// Define a struct for a circular linked list node
struct Node {
    int data;
    Node* next;
};

class CircularLinkedList {
private:
    Node* head; // Head of the circular linked list

public:
    CircularLinkedList() : head(NULL) {}

    // Function to insert a node at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node;
        newNode->data = value;

        if (head == NULL) {
            newNode->next = newNode; // Point to itself
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = head;
        }
    }

    // Function to display the circular linked list
    void display() {
        if (head == NULL) {
            return;
        }

        Node* current = head;
        do {
            std::cout << current->data << " ";
            current = current->next;
        } while (current != head);

        std::cout << std::endl;
    }
};

int main() {
    CircularLinkedList list;

    // Add nodes at the end
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    // Display the circular linked list
    list.display();

    return 0;
}


// Add Node at Specific Point

#include <iostream>

// Define a struct for a circular linked list node
struct Node {
    int data;
    Node* next;
};

class CircularLinkedList {
private:
    Node* head; // Head of the circular linked list

public:
    CircularLinkedList() : head(NULL) {}

    // Function to insert a node at a specific position
    void insertAtPosition(int value, int position) {
        Node* newNode = new Node;
        newNode->data = value;

        if (position <= 0) {
            if (head == NULL) {
                newNode->next = newNode; // Point to itself
                head = newNode;
            } else {
                Node* current = head;
                while (current->next != head) {
                    current = current->next;
                }
                current->next = newNode;
                newNode->next = head;
                head = newNode;
            }
            return;
        }

        if (head == NULL) {
            std::cout << "Position out of bounds. List is empty." << std::endl;
            return;
        }

        Node* current = head;
        int currentPosition = 0;
        while (current->next != head && currentPosition < position - 1) {
            current = current->next;
            currentPosition++;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    // Function to display the circular linked list
    void display() {
        if (head == NULL) {
            return;
        }

        Node* current = head;
        do {
            std::cout << current->data << " ";
            current = current->next;
        } while (current != head);

        std::cout << std::endl;
    }
};

int main() {
    CircularLinkedList list;

    // Add nodes at specific positions
    list.insertAtPosition(1, 0);  // Insert at the beginning
    list.insertAtPosition(3, 1);  // Insert at position 1
    list.insertAtPosition(2, 1);  // Insert at position 1
    list.insertAtPosition(4, 3);  // Insert at position 3

    // Display the circular linked list
    list.display();

    return 0;
}
