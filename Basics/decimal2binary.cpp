#include<iostream>
#include<math.h>
using namespace std;


int main () {
    int num;
    cout << "Enter a Number...";
    cin >> num;

    int answer = 0;

    for (int i = 0; num != 0; i++){
        int bit = num & 1;

        answer = (bit * pow(10, i) + answer);

        num = num >> 1;
    }

    cout << "Answer is : " << answer << endl;
}