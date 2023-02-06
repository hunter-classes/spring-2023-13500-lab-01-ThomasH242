/*
Author: Thomas Huang
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 1A

This program requires 2 inputs and prints
out the smaller number out of the two
*/


#include <iostream>
int main(){
    int num1; int num2;
    std::cout << "Enter the first number: " << std::endl;
    std::cin >> num1;
    std::cout << "Enter the second number: " << std::endl;
    std::cin >> num2;
    if (num1 < num2){
        std::cout <<"The smaller number of the two is " << num1 << std::endl;
    }
    else{
        std::cout << "the smaller number of the two is " << num2 << std::endl;
    }
    return 0;
}