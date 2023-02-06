/*
Author: Thomas Huang
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 1C

This program requires 2 inputs and prints
out the smaller number out of the two
*/

#include <iostream>
int main(){
    int year;
    std::cout << "Enter year: ";
    std::cin >> year;
    if (year % 4 != 0){
        std::cout << "common year";
    }
    else if(year % 100 != 0){
        std::cout << "leap year";
    }
    else if(year % 400 != 0){
        std::cout << "common year";
    }
    else{
        std::cout << "leap year";
    }

}