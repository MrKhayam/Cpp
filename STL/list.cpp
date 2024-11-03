#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> a = {1,2,3,4};

    a.push_back(5);
    a.push_front(0);


    for(int i : a) {
        cout << i << " ";
    }

    cout << endl;

    a.erase(a.begin());
    cout << "After Erase " << endl;
    for(int i : a) {
        cout << i << " ";
    }

    cout << endl;

    cout << "Size of List : " << a.size() << endl;
}