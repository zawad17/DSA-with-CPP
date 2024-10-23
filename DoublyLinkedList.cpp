#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int value)
    {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};
class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;

    DoublyLinkedList()
    {
        head = nullptr;
        tail = nullptr;

    }

    void AddBeginning(int data)
    {

        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void AddEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void deleteNode(int value)
    {
        Node* temp = head;
        while (temp!= nullptr && temp->data!= value)
        {
            temp = temp->next;
        }
        if (temp!= nullptr)
        {
            if (temp->prev!= nullptr)
            {
                temp->prev->next = temp->next;
            }
            else
            {
                head = temp->next;
            }
            if (temp->next!= nullptr)
            {
                temp->next->prev = temp->prev;
            }
            else
            {
                tail = temp->prev;
            }
            delete temp;
        }
    }
  
    void Display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
    }
};
int main()
{
    DoublyLinkedList obj;
    obj.AddBeginning(5);
    obj.AddEnd(10);
    obj.AddEnd(15);
    obj.AddEnd(20);
    obj.AddEnd(25);
    cout << "Linked List: ";
    obj.Display();
    cout<<endl;
    obj.deleteNode(15);
    cout << "Linked List: ";
    obj.Display();


    return 0;
    
}
