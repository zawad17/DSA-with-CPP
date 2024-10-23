//Factorial Problem
#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0)
    return 1;
    if(n<0)
    {
        cout<<"Factorial is not possible."<<endl;
        return 0;
    }
    return n*factorial(n-1);
}

int main()
{
    cout<<factorial(-1);
    return 0;
}