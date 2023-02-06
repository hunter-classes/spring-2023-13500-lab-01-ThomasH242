/*
Author: Thomas Huang
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 1B

This program grabs 3 numbers and prints
the smallest number out of the 3
*/


#include <iostream>
int main(){
    int num1; int num2; int num3;
    std::cout << "Enter the first number: " << std::endl;
    std::cin >> num1;
    std::cout << "Enter the second number: " << std::endl;
    std::cin >> num2;
    std::cout << "Enter the third number: " << std::endl;
    std::cin >> num3;
    if (num1 <= num2 && num1 <= num3){
        std::cout << "The smaller number of the three is " << num1 << std::endl;
        }
    else if(num2 <= num1 && num2 <= num3){
        std::cout << "The smaller number of the three is " << num2 << std::endl;
    }
    else{
        std::cout << "the smaller number of the three is " << num3 << std::endl;
    }
    return 0;
}