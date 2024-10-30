#include<iostream>
using namespace std;


int main () {
    int num;
    cout << "Enter a Number...";
    cin >> num;

    int sum = 0;

    int i = 1;
    while(i<=num){
        sum += i;
        i++;
    }
    cout << "Sum is : " << sum;
    return 0;
}

