/*
Author: Thomas Huang
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 1D

    print days of months, including leap and common years and feburary days.
*/

#include <iostream>
int main(){
    int years; int months; std::string days;
    std::cout << "Enter years: ";
    std::cin >> years;
    std::cout << "Enter month: ";
    std::cin >> months;

    if(months % 2 == 1 && months <= 7){//odd
        days = "31";
    }
    else if(months % 2 == 0 && months >= 8){
        days = "31";
    }
    else if(months == 2){
        if (years % 4 != 0){
            days = "28";
        }
        else if(years % 100 != 0){
            days = "29";
        }
        else if(years % 400 != 0){
            days = "28";
        }
        else{
            days = "29";
        }
        }
    else{
        days = "30";
    }
    std::cout << days << " days "<< std::endl;
    return 0;
}