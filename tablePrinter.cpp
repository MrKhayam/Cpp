#include<iostream>


int main () {
    int num;
    std::cout << "Enter a Number...";
    std::cin >> num;
    if(num > 0) {
        std::cout << "You Entered a Positive Number. " << num;
    }
    else if(num < 0) {
        std::cout << "You Entered a Negative Numebr. " << num;
    }
    else {
        std::cout << "You Entered a Number that is Equal to zero. " << num;
    }

    return 0;
};