#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};
class SingleLinkedList
{
    Node *head;

public:
    SingleLinkedList()
    {
        head = nullptr;
    }
    void AddAtBeginning(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void AddAtEnd(int value)
    {

        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        else
        {
            Node *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    void DeleteValue(int value)
    {
        Node *current = head;
        Node *previous = nullptr;
        while (current != nullptr)
        {
            if (current->data == value)
            {
                if (previous == nullptr)
                {
                    head = current->next;
                }
                else
                {
                    previous->next = current->next;
                }
                delete current;
                return;
            }
            previous = current;
            current = current->next;
        }
        cout << "Value not found in the list." << endl;
    }

    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {

            cout << current->data << " ->";
            current = current->next;
        }
    }
};

int main()
{
    SingleLinkedList obj;
    obj.AddAtBeginning(5);
    obj.AddAtEnd(10);
    obj.AddAtEnd(15);
    cout << "Linked List: ";
    obj.display();
    cout << endl;
    obj.DeleteValue(10);
    cout << "Linked List: ";
    obj.display();
    cout << endl;
    obj.AddAtBeginning(5);
    cout << "Linked List: ";
    obj.display();
    cout << endl;
    return 0;
}
