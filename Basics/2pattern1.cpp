#include<iostream>
using namespace std;


int main () {
    int num;
    cout << "Enter a Number...";
    cin >> num;
    char ch;
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            ch = ('A' + i - 1);
            cout << ch;
        }
        cout << endl;
    }
}