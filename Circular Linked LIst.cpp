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

// Delete Node at START

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

    // Function to add a node at the end of the circular linked list
    void addToEnd(int value) {
        Node* newNode = new Node{value, NULL};
        if (head == NULL) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = head;
        }
    }

    // Function to delete a node at the start of the circular linked list
    void deleteFromStart() {
        if (head == NULL) {
            return; // Empty list, nothing to delete
        }

        Node* current = head;
        Node* temp = head;

        while (current->next != head) {
            current = current->next;
        }

        head = head->next;
        current->next = head;
        delete temp;
    }

    // Function to display the circular linked list
    void display() {
        Node* current = head;
        if (current == NULL) {
            return; // Empty list
        }
        do {
            std::cout << current->data << " ";
            current = current->next;
        } while (current != head);
        std::cout << std::endl;
    }
};

int main() {
    CircularLinkedList list;

    // Add nodes to the end
    list.addToEnd(1);
    list.addToEnd(2);
    list.addToEnd(3);

    // Display the original circular linked list
    std::cout << "Original Circular Linked List: ";
    list.display();

    // Delete a node from the start
    list.deleteFromStart();

    // Display the modified circular linked list
    std::cout << "Modified Circular Linked List: ";
    list.display();

    return 0;
}

// Delete Node at END

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

    // Function to add a node at the end of the circular linked list
    void addToEnd(int value) {
        Node* newNode = new Node{value, NULL};
        if (head == NULL) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = head;
        }
    }

    // Function to delete a node at the end of the circular linked list
    void deleteFromEnd() {
        if (head == NULL) {
            return; // Empty list, nothing to delete
        }

        Node* current = head;
        Node* prev = NULL;

        while (current->next != head) {
            prev = current;
            current = current->next;
        }

        if (current == head) {
            head = NULL; // The list becomes empty
        } else {
            prev->next = head; // Update the previous node's next pointer
        }

        delete current;
    }

    // Function to display the circular linked list
    void display() {
        Node* current = head;
        if (current == NULL) {
            return; // Empty list
        }
        do {
            std::cout << current->data << " ";
            current = current->next;
        } while (current != head);
        std::cout << std::endl;
    }
};

int main() {
    CircularLinkedList list;

    // Add nodes to the end
    list.addToEnd(1);
    list.addToEnd(2);
    list.addToEnd(3);

    // Display the original circular linked list
    std::cout << "Original Circular Linked List: ";
    list.display();

    // Delete a node from the end
    list.deleteFromEnd();

    // Display the modified circular linked list
    std::cout << "Modified Circular Linked List: ";
    list.display();

    return 0;
}

// Delete Node at Specific Point

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
    CircularLinkedList() : head(nullptr) {}

    // Function to add a node at the end of the circular linked list
    void addToEnd(int value) {
        Node* newNode = new Node{value, nullptr};
        if (head == nullptr) {
            head = newNode;
            head->next = head; // Point to itself for a single node
        } else {
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = head;
        }
    }

    // Function to delete a node at a specific position in the circular linked list
    void deleteAtPosition(int position) {
        if (head == nullptr) {
            return; // Empty list, nothing to delete
        }

        if (position == 1) {
            // Special case: delete the head node
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            if (current == head) {
                head = nullptr; // The list becomes empty
            } else {
                current->next = head->next; // Update the last node's next pointer
                head = head->next;
            }
            delete current;
            return;
        }

        Node* current = head;
        Node* prev = nullptr;
        int count = 1;

        while (count < position && current->next != head) {
            prev = current;
            current = current->next;
            count++;
        }

        if (count == position) {
            prev->next = current->next;
            delete current;
        }
    }

    // Function to display the circular linked list
    void display() {
        Node* current = head;
        if (current == nullptr) {
            return; // Empty list
        }
        do {
            std::cout << current->data << " ";
            current = current->next;
        } while (current != head);
        std::cout << std::endl;
    }
};

int main() {
    CircularLinkedList list;

    // Add nodes to the end
    list.addToEnd(1);
    list.addToEnd(2);
    list.addToEnd(3);

    // Display the original circular linked list
    std::cout << "Original Circular Linked List: ";
    list.display();

    // Delete a node at a specific position
    int positionToDelete = 2;
    list.deleteAtPosition(positionToDelete);

    // Display the modified circular linked list
    std::cout << "Modified Circular Linked List: ";
    list.display();

    return 0;
}

