#include<iostream>


int sum(int a, int b) {
    return a + b;
};

int main(){
    int num1;
    int num2;

    std::cout << "Enter first Number";
    std::cin >> num1;
    std::cout << "Enter second Number";
    std::cin >> num2;
    const int res = sum(num1, num2);

    std::cout << "Sum is " << res;
};