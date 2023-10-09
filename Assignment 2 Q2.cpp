#include <iostream>

// Define a struct for a linked list node
struct Node {
    int data;
    Node* next;
    Node* prev; // For doubly linked list
};

class LinkedList {
private:
    Node* head; // Head of the linked list
    Node* tail; // Tail of the doubly linked list
    bool isCircular;

public:
    LinkedList(bool circular = false) : head(nullptr), tail(nullptr), isCircular(circular) {}

    // Function to insert a node at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node{value, nullptr, nullptr};
        if (!head) {
            head = newNode;
            tail = newNode;
            if (isCircular) tail->next = head;
        } else {
            newNode->next = head;
            if (isCircular) tail->next = newNode;
            if (head) head->prev = newNode; // Fix: Check if head is not null
            head = newNode;
        }
    }

    // Function to insert a node at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node{value, nullptr, nullptr};
        if (!tail) {
            head = newNode;
            tail = newNode;
            if (isCircular) tail->next = head;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
            if (isCircular) tail->next = head;
        }
    }

    // Function to display the linked list
    void display() {
        Node* current = head;
        if (isCircular) {
            do {
                std::cout << current->data << " ";
                current = current->next;
            } while (current != head);
        } else {
            while (current != nullptr) {
                std::cout << current->data << " ";
                current = current->next;
            }
        }
        std::cout << std::endl;
    }

    // Function to reverse the linked list
    void reverse() {
        Node* current = head;
        Node* prev = nullptr;
        Node* next = nullptr;

        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            current->prev = next; // For doubly linked list
            prev = current;
            current = next;
        }

        // Update the head and tail pointers
        if (isCircular) {
            tail = head;
            head = prev;
        } else {
            head = prev;
            if (tail) tail->next = nullptr; // Fix: Update tail's next pointer to nullptr
        }
    }

    // Function to delete a node with a given value
    void deleteNode(int value) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == value) {
                // Handle deletion based on the linked list type (single or double)
                if (current->prev != nullptr) {
                    current->prev->next = current->next;
                } else {
                    head = current->next;
                }

                if (current->next != nullptr) {
                    current->next->prev = current->prev;
                } else {
                    tail = current->prev;
                }

                delete current;
                return; // Exit after the first occurrence is deleted
            }
            current = current->next;
        }
    }
};

int main() {
    bool isRunning = true;
    int choice;
    LinkedList* list = nullptr;

    while (isRunning) {
        std::cout << "Which linked list you want:\n"
                     "1: Single\n"
                     "2: Double\n"
                     "3: Circular\n"
                     "4: Exit\n"
                     "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                list = new LinkedList(false);
                break;
            case 2:
                list = new LinkedList(false);
                break;
            case 3:
                list = new LinkedList(true);
                break;
            case 4:
                isRunning = false;
                delete list; // Clean up the linked list object before exiting
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                continue;
        }

        if (list != nullptr) {
            while (true) {
                std::cout << "Which operation you want to perform:\n"
                             "1: Insertion\n"
                             "2: Deletion\n"
                             "3: Display\n"
                             "4: Reverse\n"
                             "5: Seek\n" // Implement this operation or remove from menu
                             "6: Exit\n"
                             "Enter your choice: ";
                std::cin >> choice;

                switch (choice) {
                    case 1: {
                        int insertionChoice;
                        std::cout << "1: Insertion at beginning\n"
                                     "2: Insertion at end\n"
                                     "3: Insertion at specific data node\n"
                                     "Enter your choice: ";
                        std::cin >> insertionChoice;

                        int value;
                        std::cout << "Enter the value to insert: ";
                        std::cin >> value;

                        // Perform the insertion based on user's choice
                        if (insertionChoice == 1) {
                            list->insertAtBeginning(value);
                        } else if (insertionChoice == 2) {
                            list->insertAtEnd(value);
                        } else if (insertionChoice == 3) {
                            // Handle insertion at a specific data node
                        }
                        break;
                    }
                    case 2: {
                        int value;
                        std::cout << "Enter the value to delete: ";
                        std::cin >> value;

                        list->deleteNode(value);
                        break;
                    }
                    case 3:
                        list->display();
                        break;
                    case 4:
                        list->reverse();
                        break;
                    case 5:
                        // Implement seeking operation or remove from menu
                        break;
                    case 6:
                        delete list; // Clean up the linked list object before exiting
                        list = nullptr;
                        break;
                    default:
                        std::cout << "Invalid choice. Please try again.\n";
                        continue;
                }
                if (choice == 6 || list == nullptr) break;
            }
        }
    }

    return 0;
}
