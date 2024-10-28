#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number...";
    cin >> num;

    for (int row = 1; row <= num; row++)
    {
        int space = num - row;
        while(space) {
            cout << " ";
            space--;
        }

        for (int col = 1; col <= row; col++){
            cout << "*";

        }
        cout << endl;
    }
}