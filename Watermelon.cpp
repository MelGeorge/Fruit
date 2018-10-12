//
//  Watermelon.cpp
//  Inheritance and Polymorphism Demo
//
//  Created by Melissa George on 2/15/18.
//  Copyright © 2018 Melissa George. All rights reserved.
//

#include "Watermelon.h"
#include <iostream>
#include <string>

// Watermelon's default constructor calls Fruit's
// custom constructor (constructors can delegate to
// constructors of the base class!)

Watermelon::Watermelon() :
            Fruit(10, "green and red"), slices(1) {}

void Watermelon::eat() {
    std::cout << "slicing watermelon\n";
    slice(10);
    std::cout << "eating watermelon\n";
    std::cout << "spitting out seeds\n";
    set_num_seeds(get_num_seeds() - 2);
}

void Watermelon::slice(int num_slices) {
    std::cout << "slicing watermelon into " << num_slices << " pieces\n";
    slices = num_slices;
}

int Watermelon::get_num_slices() {
    return slices;
}
