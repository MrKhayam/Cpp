#include<iostream>
using namespace std;

    int isEven (int num1) {
        if(num1%2 == 0) {
            cout << "Number is Even : " << num1;
        } else {
            cout << "Number is not Even : " << num1;
        }
        return 0;
    }

int main() {
    int num;
    cout << "Enter a Number...";
    cin >> num;

    int answer = isEven(num);
    
}