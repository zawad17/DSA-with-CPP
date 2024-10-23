#include<iostream>
using namespace std;
class Array
{
    int *arr;
    int capacity;
    int size;

    public:
    Array(int capacity)
    {
        this-> capacity = capacity;
        size = 0;
        arr = new int[capacity];

    }
    void insert(int element)
    {
        if(size < capacity)
        {
            arr[size] = element;
            size++;
            cout<<"Inserted "<<element<<" into the array."<<endl;
        }
        else{
            cout<<"Array is Full"<<endl;
        }
    }  


    void Delete(int element)
    {
        int index = -1;
        for (int i = 0; i < size; i++)
        {
            if(arr[i] == element)
            {
                index = i;
                break;
            }
        }
        if(index != -1)
        {
            for (int i = index; i < size-1; i++)
            {
                arr[i] = arr[i+1];
            }
            size--;
            cout<<"Deleted "<<element<<" from the array."<<endl;
        }
        else {
            cout<<"Not found this element."<<endl;
        }
    }  


    void showIndexValue(int index)
    {
        if(index >= 0 && index < size )
        {
            cout<<"The "<<index<<"th"<<" value is "<<arr[index]<<endl;
        }
        else 
        {
            cout<<"Index out of bounds."<<endl;
        }

    }

    void traversal(){
        if(size == 0)
        {
            cout<<"Array is empty."<<endl;

        }
        else{
            cout<<"Array is ";
            for(int i = 0; i <size; i++)
            {
                cout<<arr[i]<<"->";
            }
            cout<<endl;
        }
    }
    

    ~Array(){
        delete[] arr;
    }

};

int main()
{
    Array object(5);
    object.insert(10);
    object.insert(100);
    object.insert(101);
    object.insert(102);
    object.insert(130);
    object.insert(109);
    object.Delete(101);
    object.showIndexValue(1);
    object.traversal();
}
