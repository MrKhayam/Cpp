#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start ) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    int res = binarySearch(arr, 6, 6);

    cout << "Index is : " << res << endl;
}