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

// Delete at START

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

    // Function to add a node at the beginning of the doubly linked list
    void addToStart(int value) {
        Node* newNode = new Node{value, NULL, NULL};
        if (head == NULL) {
            head = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // Function to delete a node at the start of the doubly linked list
    void deleteFromStart() {
        if (head == NULL) {
            return; // Empty list, nothing to delete
        }

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
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

    // Add nodes to the start
    list.addToStart(3);
    list.addToStart(2);
    list.addToStart(1);

    // Display the original doubly linked list
    std::cout << "Original Doubly Linked List: ";
    list.display();

    // Delete a node from the start
    list.deleteFromStart();

    // Display the modified doubly linked list
    std::cout << "Modified Doubly Linked List: ";
    list.display();

    return 0;
}

// Delete Node at END

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

    // Function to add a node at the end of the doubly linked list
    void addToEnd(int value) {
        Node* newNode = new Node{value, NULL, NULL};
        if (head == NULL) {
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

    // Function to delete a node at the end of the doubly linked list
    void deleteFromEnd() {
        if (head == NULL) {
            return; // Empty list, nothing to delete
        }

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }

        // Current is the last node
        if (current->prev != NULL) {
            current->prev->next = NULL;
        } else {
            head = NULL;
        }

        delete current;
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

    // Add nodes to the end
    list.addToEnd(1);
    list.addToEnd(2);
    list.addToEnd(3);

    // Display the original doubly linked list
    std::cout << "Original Doubly Linked List: ";
    list.display();

    // Delete a node from the end
    list.deleteFromEnd();

    // Display the modified doubly linked list
    std::cout << "Modified Doubly Linked List: ";
    list.display();

    return 0;
}

// Delete Node at Specific Point

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

    // Function to add a node at the end of the doubly linked list
    void addToEnd(int value) {
        Node* newNode = new Node{value, NULL, NULL};
        if (head == NULL) {
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

    // Function to delete a node at a specific position in the doubly linked list
    void deleteAtPosition(int position) {
        if (head == NULL || position <= 0) {
            return; // Empty list or invalid position, nothing to delete
        }

        if (position == 1) {
            Node* temp = head;
            head = head->next;
            if (head != NULL) {
                head->prev = NULL;
            }
            delete temp;
            return;
        }

        int currentPosition = 1;
        Node* current = head;

        while (current != NULL && currentPosition < position) {
            current = current->next;
            currentPosition++;
        }

        if (current != NULL) {
            current->prev->next = current->next;
            if (current->next != NULL) {
                current->next->prev = current->prev;
            }
            delete current;
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

    // Add nodes to the end
    list.addToEnd(1);
    list.addToEnd(2);
    list.addToEnd(3);

    // Display the original doubly linked list
    std::cout << "Original Doubly Linked List: ";
    list.display();

    // Delete a node at a specific position
    int positionToDelete = 2;
    list.deleteAtPosition(positionToDelete);

    // Display the modified doubly linked list
    std::cout << "Modified Doubly Linked List: ";
    list.display();

    return 0;
}

