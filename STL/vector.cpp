#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 3};
    cout << "Element at index 1 : " << a[1] << endl;
    cout << "Size of vector a : " << a.size() << endl;
    cout << "Capacity of vector a : " << a.capacity() << endl;
    cout << "Element at First Index : " << a.front() << endl;
    cout << "Element at Last Index : " << a.back() << endl;

    a.push_back(12);

    cout << "New Added Element : " << a.at(3) << endl;

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    a.pop_back();
    cout << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    cout << a.capacity() << endl;


    // If WE want to copy a whole vector into another then:
    vector<int> last(a);
    cout << "New Vector Created : " << endl;

    for(int i:last) {
        cout << i << " ";
    }
}