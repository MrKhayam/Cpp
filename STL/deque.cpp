#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d = {1, 2, 3, 4};

    for(int i: d){
        cout << i << " ";
    }

    d.push_back(5);
    cout << endl;
    for (int i : d)
    {
        cout << i << " ";
    }

    cout << endl;

    d.pop_back();
    for (int i : d)
    {
        cout << i << " ";
    }

    cout << endl;

    d.pop_front();

    for (int i : d)
    {
        cout << i << " ";
    }



    // We can also use front and back functions in it.

    // To Erase elements;
    cout << endl;
    d.erase(d.begin(), d.begin() + 1);

    cout << d.size();
}