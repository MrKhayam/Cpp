#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number...";
    cin >> num;

    char ch = 'A';
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            ch = ('A' + i + j - 2);
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}