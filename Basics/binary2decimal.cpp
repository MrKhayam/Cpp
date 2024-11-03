#include<iostream>
#include<math.h>
using namespace std;


int main () {
    int num;
    cout << "Enter a Binary Number...";
    cin >> num;

    int answer = 0;
    for (int i = 0; num != 0; i++){
        int digit = num % 10;

        if(digit == 1){
            answer = answer + pow(2, i);
        }

        num = num / 10;
    }
    cout << "Answer is : " << answer << endl;
}