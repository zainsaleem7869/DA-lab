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

// Delete Node at Start

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

    // Function to add a node at the start of the linked list
    void addToStart(int value) {
        Node* newNode = new Node{value, NULL};
        if (head != NULL) {
            newNode->next = head;
        }
        head = newNode;
    }

    // Function to delete a node from the start of the linked list
    void deleteFromStart() {
        if (head != NULL) {
            Node* temp = head;
            head = head->next;
            delete temp;
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

    // Add nodes to the start
    list.addToStart(1);
    list.addToStart(2);
    list.addToStart(3);

    // Display the original linked list
    std::cout << "Original Linked List: ";
    list.display();

    // Delete a node from the start
    list.deleteFromStart();

    // Display the modified linked list
    std::cout << "Modified Linked List: ";
    list.display();

    return 0;
}

// Delete Node at END

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

    // Function to add a node at the end of the linked list
    void addToEnd(int value) {
        Node* newNode = new Node{value, NULL};
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

    // Function to delete a node from the end of the linked list
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
        while (current->next->next != NULL) {
            current = current->next;
        }

        delete current->next;
        current->next = NULL;
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
    list.addToEnd(1);
    list.addToEnd(2);
    list.addToEnd(3);

    // Display the original linked list
    std::cout << "Original Linked List: ";
    list.display();

    // Delete a node from the end
    list.deleteFromEnd();

    // Display the modified linked list
    std::cout << "Modified Linked List: ";
    list.display();

    return 0;
}

// Delete Node at Specifi Point

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

    // Function to add a node at the end of the linked list
    void addToEnd(int value) {
        Node* newNode = new Node{value, NULL};
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

    // Function to delete a node at a specific point of the linked list
    void deleteNodeAt(int position) {
        if (head == NULL) {
            return; // Empty list, nothing to delete
        }

        if (position == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        int currentPosition = 0;
        Node* current = head;
        while (current->next != NULL && currentPosition < position - 1) {
            current = current->next;
            currentPosition++;
        }

        if (current->next == NULL) {
            return; // Node not found at the specified position
        }

        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
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
    list.addToEnd(1);
    list.addToEnd(2);
    list.addToEnd(3);

    // Display the original linked list
    std::cout << "Original Linked List: ";
    list.display();

    // Delete a node at a specific point
    int positionToDelete = 1; // Change this to the desired position
    list.deleteNodeAt(positionToDelete);

    // Display the modified linked list
    std::cout << "Modified Linked List: ";
    list.display();

    return 0;
}
