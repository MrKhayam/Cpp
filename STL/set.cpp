#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> a;

    a.insert(1);
    a.insert(2);
    a.insert(7);
    a.insert(3);
    a.insert(9);

    for (auto i : a) {
        cout << i << endl;
    }
    cout << endl;

    // To get the iterator of set.
    set<int>::iterator it = a.begin();
    it++;

    a.erase(it);

    for (auto i : a) {
        cout << i << endl;
    }
    cout << endl;
}