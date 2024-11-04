#include<iostream>
#include<map>
using namespace std;


int main () {
    map<int, string> m;

    m[1] = "Mr. ";
    m[2] = "Khayam ";

    m.insert({3, "Ijaz."});

    for(auto i: m){
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding 1 -> " << m.count(1) << endl;

    m.erase(1);
    cout << "After Erase" << endl;
    for(auto i:m) {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
}