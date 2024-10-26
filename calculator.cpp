#include<iostream>

int main () {
    int num1;
    int num2;
    char ope;



    std::cout << "Enter Your First Number...";
    std::cin >> num1;
    std::cout << "Enter Operator...";
    std::cin >> ope;
    std::cout << "Enter Your Second Number...";
    std::cin >> num2;



    switch(ope){
        case '+':
            std::cout << num1 + num2;
            break;
        case '-':
            std::cout << num1 - num2;
            break;
        case '*':
            std::cout << num1 * num2;
            break;
        case '/':
            std::cout << num1 / num2;
            break;
        default:
            std::cout << "You Enterd an invalid operator!";
    }
}