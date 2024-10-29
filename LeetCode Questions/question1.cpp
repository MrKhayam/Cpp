#include <iostream>
#include<math.h>
using namespace std;

// 2,147,483,647

int reverse(int n)
{
        int reversed = 0;
        int i = 0;
        while (n != 0)
        {
            int digit = n % 10;

            reversed = (reversed * 10) + digit;

            n = n / 10;
            i++;
        }
        if (n >= INT_MAX || n <= INT_MIN)
        {
            return 0;
        }
        else
        {
            return reversed;
        }
    }

int main()
{
    int num;
    cout << "Enter a Number...";
    cin >> num;

    cout << "Reversed Integer is : " << reverse(num) << endl;
}