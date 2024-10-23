#include <iostream>
using namespace std;
class Stack
{
    int *arr;
    int size;
    int top;

public:
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stack overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << "Pushed " << value << " into the stack" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            top--;
            cout << "poped " << arr[top + 1] << " from the stack" << endl;
        }
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            return arr[top];
        }
    }
    void printStack(){
        cout<<"Current Stack : ";
        if(top !=-1)
        {   
            for(int i=top;i>=0;i--)
            {
                cout<<arr[i]<<" -> ";;
            }
        }
        else 
        {
            cout<<"The stack is empty"<<endl;
        }
    }

};

int main()
{
    Stack obj1(5);
    obj1.push(3);
    obj1.push(7);
    obj1.push(3);
    obj1.push(6);
    obj1.pop();
    obj1.printStack();
}