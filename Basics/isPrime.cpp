#include<iostream>
using namespace std;


    bool isPrime(int n) {
        for (int i =2; i<n; i++) {
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }

int main () {
    int num;
    cout << "Enter a Number...";
    cin >> num;


    int ans = isPrime(num);

    if(ans){
        cout << "Number is Prime...";
    } else {
        cout << "Number is not Prime";
    }
    return 0;
}