//
//  Fruit.cpp
//  Inheritance and Polymorphism Demo
//
//  Created by Melissa George on 2/15/18.
//  Copyright © 2018 Melissa George. All rights reserved.
//

#include "Fruit.h"
#include <iostream>


Fruit::Fruit(int seeds_in, std::string color_in)
    : seeds(seeds_in), color(color_in) {}

Fruit::Fruit() : seeds(0), color("green") {}

void Fruit::eat() {
    std::cout << "nom nom" << std::endl;
}

int Fruit::get_num_seeds() {
    return seeds;
}

void Fruit::set_num_seeds(int num) {
    seeds = num;
}

std::string Fruit::get_color() {
    return color;
}

void Fruit::set_color(std::string new_color) {
    color = new_color;
}
