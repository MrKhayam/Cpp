#include<iostream>
using namespace std;


void reverseArr (int myArr[], int n){

    int start = 0;
    int end = n - 1;

    while(start <= end){
        swap(myArr[start], myArr[end]);
        start++;
        end--;
    }

}

void printArr(int prArr[], int soPrArr){
    for (int i = 0; i < soPrArr;i++){
        cout << prArr[i] << " ";
    }
    cout << endl;
}

int main () {
    int arr[4] = {1,2,3,4};


    reverseArr(arr, 4);
    printArr(arr, 4);

}