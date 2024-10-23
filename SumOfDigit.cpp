//Sum of Digit problem
#include<iostream>
using namespace std;
int sumOfDigits(int n) {
    if (n < 10) {
        return n;
    }
    else {
        return n % 10 + sumOfDigits(n / 10);
    }
}
int main()
{
    cout<<sumOfDigits(1234);
    return 0;
}