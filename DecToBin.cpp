//Decimal to Binary
#include<iostream>
using namespace std;
void decToBin(int n){
    if(n==0)
    return ;
    else 
    {
        decToBin(n/2);
        cout<<(n%2);
    }

}
int main()
{
    decToBin(10);
    
}