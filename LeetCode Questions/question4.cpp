#include<iostream>
using namespace std;


int findUnique(int arr[], int size) {
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main () {

    int n[5] = {1, 2, 1, 2, 3};
    int size = 5;

    int unique = findUnique(n, size);
    cout << "The unique element is: " << unique << endl;
}