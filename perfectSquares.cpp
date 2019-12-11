// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Dec 2019
// This is program exponents printer

#include <iostream>
#include <string>
#include <list>

int PerfectSquare(int number) {
    // This takes value and makes perfect square

    // This is declaring varible to store the final answer
    int square;

    // process
    square = number * number;

    // output
    return square;
}

// This is declaring a function of type list, expecting two arguments, one
//    function of type integer which is also expecting an argument of type
//    integer and a list of type integer
std::list<int> OnAll(int (*function)(int), std::list<int> list) {
    // This runs a given function on every item of a given list

    // This is declaring the new number list
    int newNumber;
    std::list<int> newList;

    // process
    for (int item : list) {
        newNumber = function(item);
        newList.push_back(newNumber);
    }

    // output
    return newList;
}

main() {
    // This creates a list, fils it with 1-20 and calls OnAll()

    // This is declaring a variable and 2 lists
    int repeater;
    std::list<int> numbers;
    std::list<int> perfectSquares;

    // This welcomes user
    std::cout << "This prints the first 20 perfect squares" << std::endl;

    // process
    for (repeater = 1; repeater <= 20; repeater++) {
        numbers.push_back(repeater);
    }
    // This'll run PerfectSquares() on every item of numbers, a list, and assign
    //    all of that into perfectSquares, the final numbers
    perfectSquares = OnAll(PerfectSquare, numbers);
    std::cout << "\nThe perfect squares are: " << std::endl;
    for (int number : perfectSquares) {
        std::cout << number << std::endl;
    }
}
