#include<iostream>
#include<queue>
using namespace std;

int main () {
    // This is the way of creating priority queue with maximum heap.
    priority_queue<int> maxi;

    
    // This is the way of creating priority queue with minimum heap.
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(4);
    maxi.push(5);

    cout << "size : " << maxi.size() << endl;

    int n = maxi.size();

    for (int i = 0; i < n; i++) {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;
}