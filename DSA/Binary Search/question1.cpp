#include<iostream>
using namespace std;


int firstOcc (int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;


    while(start <= end) {
        if(key == arr[mid]) {
            ans = mid;
            end = mid - 1;
        } else if (key <= arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}


int lastOcc (int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;


    while(start <= end) {
        if(key == arr[mid]) {
            ans = mid;
            start = mid + 1;
        } else if (key <= arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}


int main () {
    int arr[5] = {1, 2, 3, 3, 4};

    int firstOccurance = firstOcc(arr, 5, 2);
    int lastOccurance = lastOcc(arr, 5, 2);

    cout << "First Occurance is " << firstOccurance << endl;
    cout << "Last Occurance is " << lastOccurance << endl;
}