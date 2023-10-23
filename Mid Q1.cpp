#include <iostream>
using namespace std;
class Node 
{
public:
    int data;
    Node* next;
    Node(int value) : data(value), next(NULL) {}
};

class LinkedList {
public:
    Node* head;
    LinkedList() : head(NULL) {}
    
    void SLLO(int value) 
	{
        Node* newNode = new Node(value);
        if (!head)
		{
            head = newNode;
        } 
		else 
		{
            Node* temp = head;
            while (temp->next) 
			{
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void RemoveDup() 
	{
        Node* current = head;
        while (current) 
		{
            Node* runner = current;
            while (runner->next) 
			{
                if (runner->next->data == current->data) 
				{
                    Node* temp = runner->next;
                    runner->next = runner->next->next;
                    delete temp;
                } 
				else 
				{
                    runner = runner->next;
                }
            }
            current = current->next;
        }
    }

    void display() 
	{
        Node* temp = head;
        while (temp) 
		{
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() 
{
    LinkedList myList;

    // First I Create the singly linked list using SLLO function //
    myList.SLLO(5);
    myList.SLLO(2);
    myList.SLLO(8);
    myList.SLLO(2);
    myList.SLLO(5);
    cout << "Original Linked List: ";
    myList.display();
    
    // Now I Remove duplicate Values //
    myList.RemoveDup();
    cout << "Linked List with After Remove the Duplicate Values: ";
    myList.display();
    return 0;
}
