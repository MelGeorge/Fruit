//
//  Fruit.h
//  Inheritance and Polymorphism Demo
//
//  Created by Melissa George on 2/15/18.
//  Copyright © 2018 Melissa George. All rights reserved.
//

#ifndef Fruit_h
#define Fruit_h

#include <stdio.h>
#include <string>

class Fruit {
public:
    Fruit();
    Fruit(int seeds_in, std::string color_in);
    virtual void eat();
    int get_num_seeds();
    void set_num_seeds(int num);
    std::string get_color();
    void set_color(std::string);
    
private:
    int seeds;
    std::string color;
};

#endif /* Fruit_h */
