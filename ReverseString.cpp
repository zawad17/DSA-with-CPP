//Reverse string Problem
#include<iostream>
#include<string>
using namespace std;
void reverseString(string str,int index=0){
    if(index==str.length())
    {
        return;
    }
    else {
        reverseString(str,index+1);
        cout<<str[index];
    }
}
int main(){
    string str="sabbir";
    reverseString(str);
}