                           // Doubly Linked LISt //
                           
// Add node at START

#include <iostream>

// Define a struct for a doubly linked list node
struct Node {
    int data;
    Node* next;
    Node* prev;
};

class DoublyLinkedList {
private:
    Node* head; // Head of the doubly linked list

public:
    DoublyLinkedList() : head(NULL) {}

    // Function to insert a node at the beginning
    void insertAtStart(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        newNode->prev = NULL;

        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
    }

    // Function to display the doubly linked list
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
    DoublyLinkedList list;

    // Add nodes at the start
    list.insertAtStart(30);
    list.insertAtStart(20);
    list.insertAtStart(2);
    list.insertAtStart(1);

    // Display the doubly linked list
    list.display();

    return 0;
}


// Add Node at END

#include <iostream>

// Define a struct for a doubly linked list node
struct Node {
    int data;
    Node* next;
    Node* prev;
};

class DoublyLinkedList {
private:
    Node* head; // Head of the doubly linked list

public:
    DoublyLinkedList() : head(NULL) {}

    // Function to insert a node at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            newNode->prev = NULL;
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }
    }

    // Function to display the doubly linked list
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
    DoublyLinkedList list;

    // Add nodes at the end
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    // Display the doubly linked list
    list.display();

    return 0;
}


#include <iostream>

// Define a struct for a doubly linked list node
struct Node {
    int data;
    Node* next;
    Node* prev;
};

class DoublyLinkedList {
private:
    Node* head; // Head of the doubly linked list

public:
    DoublyLinkedList() : head(NULL) {}

    // Function to insert a node at a specific position
    void insertAtPosition(int value, int position) {
        Node* newNode = new Node;
        newNode->data = value;

        if (position <= 0) {
            newNode->next = head;
            newNode->prev = NULL;
            if (head != NULL) {
                head->prev = newNode;
            }
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
            newNode->prev = current;
            if (current->next != NULL) {
                current->next->prev = newNode;
            }
            current->next = newNode;
        }
    }

    // Function to display the doubly linked list
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
    DoublyLinkedList list;

    // Add nodes at specific positions
    list.insertAtPosition(1, 0);  // Insert at the beginning
    list.insertAtPosition(3, 1);  // Insert at position 1
    list.insertAtPosition(2, 1);  // Insert at position 1
    list.insertAtPosition(4, 3);  // Insert at position 3

    // Display the doubly linked list
    list.display();

    return 0;
}
