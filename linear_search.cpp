#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1;
}

int main() {
    int arr[] = {22, 13, 45, 67, 13, 89, 76};
    int target = 121;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr, n, target);

    if (result != -1) {
        cout << "Index: " << result << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}