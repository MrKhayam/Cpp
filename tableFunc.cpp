#include<iostream>
using namespace std;

    void tablePrinter(int num1) {
        for (int i = 1; i<=10; i++){
                cout << num1 << " x " << i << " = " << num1*i << endl;
        }

    }

int main(){
    int num;
    std::cout << "Enter a Number...";
    std::cin >> num;


    tablePrinter(num);

    return 0;
}
