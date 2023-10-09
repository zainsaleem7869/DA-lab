#include <iostream>

// Define a struct for the linked list node
struct Node {
    int data;
    Node* next;
};

// Function to display the linked list and other information
void displayLinkedList(Node* head) {
    // Print the linked list content at the start
    std::cout << "The linked list is: ";
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
    std::cout << std::endl;

    // Print the head address and content
    std::cout << "Head Address: " << head << std::endl ;
    std::cout << "Head Content: " << head->data << std::endl << std::endl;

    // Traverse and print each node in the linked list
    current = head;
    while (current != nullptr) {
        // Print the current node's address and content
        std::cout << "Ptr Address: " << current << std::endl;
        std::cout << "Ptr Content: " << current->data << std::endl;

        // Print ptr->next if it exists
        if (current->next != nullptr) {
            std::cout << "Ptr->next: " << current->next << std::endl << std::endl;
        
        }

        // Move to the next node
        current = current->next;
        
    }
    std::cout << "Ptr->next: 0(Null)";
    std::cout << std::endl;
    
}

int main() {
    // Create a sample linked list with some nodes
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{20, nullptr};
    head->next->next->next = new Node{30, nullptr};

    // Display the linked list and related information
    displayLinkedList(head);

    // Don't forget to free the memory allocated for the nodes
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
