// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on January 2021
// This program converts a grade level into a percentage

#include <iostream>
#include <string>


int GradeLevel(std::string(grade)) {
    // This function converts a grade level into a percentage
    int gradePercent;

    // process
    if (grade == "4+") {
        gradePercent = 97;
        return gradePercent;
    } else if (grade == "4") {
        gradePercent = 90;
        return gradePercent;
    } else if (grade == "4-") {
        gradePercent = 83;
        return gradePercent;
    } else if (grade == "3+") {
        gradePercent = 78;
        return gradePercent;
    } else if (grade == "3") {
        gradePercent = 75;
        return gradePercent;
    } else if (grade == "3-") {
        gradePercent = 71;
        return gradePercent;
    } else if (grade == "2+") {
        gradePercent = 68;
        return gradePercent;
    } else if (grade == "2") {
        gradePercent = 65;
        return gradePercent;
    } else if (grade == "2-") {
        gradePercent = 61;
        return gradePercent;
    } else if (grade == "1+") {
        gradePercent = 58;
        return gradePercent;
    } else if (grade == "1") {
        gradePercent = 55;
        return gradePercent;
    } else if (grade == "1-") {
        gradePercent = 51;
        return gradePercent;
    } else if (grade == "R") {
        gradePercent = 25;
        return gradePercent;
    } else {
        gradePercent = -1;
        return gradePercent;
    }
}


int main() {
    // this function gets user input
    std::cout << "This program converts a grade level into a percentage."
              << std::endl;
    std::cout << "" << std::endl;

    // variables
    std::string gradeInput;
    int gradePercentage;

    // input
    std::cout << "Enter a grade level (ex: 4+): ";
    std::cin >> gradeInput;
    std::cout << "" << std::endl;

    // call functions
    gradePercentage = GradeLevel(gradeInput);

    // output
    if (gradePercentage == -1) {
        std::cout << "'" << gradeInput << "' is not a valid level."
                  << std::endl;
    } else {
        std::cout << "Level " << gradeInput << " is equal to an average of "
                  << gradePercentage << "%." <<std::endl;
    }
}
