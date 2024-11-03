#include<iostream>
using namespace std;


    void printCounting(int num) {
        for (int i = 1; i <= num; i++){
            cout << "Counting is : " << i << endl;
        }

    }

int main () {
    int n;
    cout << "Enter a Number...";
    cin >> n;

    printCounting(n);

}