									// Simple Queue //
									
// Add Node at START

#include <iostream>

// Define a struct for a queue node
struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front; // Front of the queue
    Node* rear;  // Rear of the queue

public:
    Queue() : front(NULL), rear(NULL) {}

    // Function to add a node at the start of the queue
    void enqueue(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (front == NULL) {
            front = newNode;
            rear = newNode;
        } else {
            newNode->next = front;
            front = newNode;
        }
    }

    // Function to display the queue
    void display() {
        if (front == NULL) {
            return;
        }

        Node* current = front;
        while (current != NULL) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    Queue queue;

    // Add nodes at the start
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);

    // Display the queue
    queue.display();

    return 0;
}


// Add Node at END

#include <iostream>

// Define a struct for a queue node
struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front; // Front of the queue
    Node* rear;  // Rear of the queue

public:
    Queue() : front(NULL), rear(NULL) {}

    // Function to add a node at the end of the queue
    void enqueue(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (front == NULL) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Function to display the queue
    void display() {
        if (front == NULL) {
            return;
        }

        Node* current = front;
        while (current != NULL) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    Queue queue;

    // Add nodes at the end
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);

    // Display the queue
    queue.display();

    return 0;
}


// Add Node at Specific Point

#include <iostream>

// Define a struct for a queue node
struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front; // Front of the queue
    Node* rear;  // Rear of the queue

public:
    Queue() : front(NULL), rear(NULL) {}

    // Function to enqueue (add to the rear) a node
    void enqueue(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (front == NULL) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Function to dequeue (remove from the front) a node
    int dequeue() {
        if (front == NULL) {
            std::cout << "Queue is empty." << std::endl;
            return -1; // Return a sentinel value
        }

        int data = front->data;
        Node* temp = front;
        front = front->next;

        if (front == NULL) {
            rear = NULL;
        }

        delete temp;
        return data;
    }

    // Function to display the queue
    void display() {
        if (front == NULL) {
            return;
        }

        Node* current = front;
        while (current != NULL) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Function to add a node at a specific position
    void insertAtPosition(int value, int position) {
        Queue tempQueue; // Temporary queue to hold elements

        // Dequeue elements from the original queue and enqueue them into the temporary queue
        while (position > 0) {
            int data = dequeue();
            if (data == -1) {
                std::cout << "Position out of bounds." << std::endl;
                return;
            }
            tempQueue.enqueue(data);
            position--;
        }

        // Enqueue the new node at the specified position
        tempQueue.enqueue(value);

        // Enqueue the remaining elements back into the original queue
        while (front != NULL) {
            int data = dequeue();
            tempQueue.enqueue(data);
        }

        // Copy elements from the temporary queue back to the original queue
        while (tempQueue.front != NULL) {
            int data = tempQueue.dequeue();
            enqueue(data);
        }
    }
};

int main() {
    Queue queue;

    // Add nodes at the rear
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(4);

    // Display the original queue
    std::cout << "Original Queue: ";
    queue.display();

    // Insert a node at position 1
    queue.insertAtPosition(3, 1);

    // Display the modified queue
    std::cout << "Modified Queue: ";
    queue.display();

    return 0;
}

// Add Node by Linked List

#include <iostream>

// Define a struct for a queue node
struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front; // Front of the queue
    Node* rear;  // Rear of the queue

public:
    Queue() : front(NULL), rear(NULL) {}

    // Function to add a node at the end of the queue
    void enqueue(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (front == NULL) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Function to display the queue
    void display() {
        if (front == NULL) {
            return;
        }

        Node* current = front;
        while (current != NULL) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    Queue queue;

    // Add nodes to the end
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);

    // Display the queue
    queue.display();

    return 0;
}

// Delete Node by Linked List

#include <iostream>

// Define a struct for a queue node
struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front; // Front of the queue
    Node* rear;  // Rear of the queue

public:
    Queue() : front(NULL), rear(NULL) {}

    // Function to add a node at the end of the queue
    void enqueue(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (front == NULL) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Function to remove a node from the front of the queue
    int dequeue() {
        if (front == NULL) {
            std::cout << "Queue is empty." << std::endl;
            return -1; // Return a sentinel value
        }

        int data = front->data;
        Node* temp = front;
        front = front->next;

        if (front == NULL) {
            rear = NULL;
        }

        delete temp;
        return data;
    }

    // Function to display the queue
    void display() {
        if (front == NULL) {
            return;
        }

        Node* current = front;
        while (current != NULL) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    Queue queue;

    // Add nodes to the end
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);

    // Display the original queue
    std::cout << "Original Queue: ";
    queue.display();

    // Delete a node from the front
    int deletedValue = queue.dequeue();
    if (deletedValue != -1) {
        std::cout << "Deleted Node: " << deletedValue << std::endl;
    }

    // Display the modified queue
    std::cout << "Modified Queue: ";
    queue.display();

    return 0;
}
