#include<iostream>
using namespace std;


int main() {
    int num = 1;
    int n;
    cout << "Enter a number...";
    cin >> n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << num;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
