#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target)
{
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] < target)
    {
        return binarySearch(arr, mid + 1, high, target);
    }
    else
    {
        return binarySearch(arr, low, mid - 1, target);
    }
}

int main()
{
    int arr[] = {3, 6, 9, 12, 15, 18};
    int target = 12;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
    {
        cout << "Index: " << result << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}