//find Maximum element
#include<iostream>
using namespace std;
 int getMax(int arr[],int index)
 {
    if(index==0)
    {
            return arr[index];
    }
    int max=getMax(arr,index-1);

    if(max<arr[index])
    {
        max=arr[index];
    }
    return max;
 }

 int main(){
    int arr[]={2,9,4,7,1};
    int m=sizeof(arr)/sizeof(arr[0]);
    int x=getMax(arr,m-1);
    cout<<x<<endl;

 }