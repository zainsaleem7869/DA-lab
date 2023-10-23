#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(NULL) {}
};

class Queue 
{
public:
    Node* front;
    Node* rear;

    Queue() : front(NULL), rear(NULL) {}

    void Enqueue(int value) 
	{
        Node* newNode = new Node(value);
        if (rear == NULL) 
		{
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    void Dequeue() 
	{
        if (front == NULL) 
		{
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        delete temp;
        if (front == NULL) 
		{
            rear = NULL;
        }
    }

    void Display() 
	{
        if (front == NULL) 
		{
            cout << "Queue is empty." << endl;
            return;
        }
        Node* temp = front;
        while (temp != NULL) 
		{
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() 
{
    Queue myQueue;

    myQueue.Enqueue(1);
    myQueue.Enqueue(2);
    myQueue.Enqueue(3);

    cout << "Queue: ";
    myQueue.Display();

    myQueue.Dequeue();
    cout << "Dequeued one element." << endl;

    cout << "Updated Queue: ";
    myQueue.Display();

    return 0;
}
