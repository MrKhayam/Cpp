#include<iostream>
#include<array>
using namespace std;


int main() {
    int basic[3] = {1, 2, 3};

    array<int, 5> a = {1, 2, 3, 4, 5};
    cout << a[3] << endl;

    int size = a.size();
    cout << "the size of this array is : " << size << endl;

    for (int i = 0; i < a.size(); i++ ) {
        cout << a[i] << endl;
    }
    

    cout << "Element at 2nd Index is : " << a.at(2) << endl;

    cout << "First Element is : " << a.front() << endl;
    cout << "Last Element is : " << a.back() << endl;
    cout << "Is Array Empty: " << a.empty() << endl;
}