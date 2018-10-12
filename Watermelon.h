//
//  Watermelon.h
//  Inheritance and Polymorphism Demo
//
//  Created by Melissa George on 2/15/18.
//  Copyright © 2018 Melissa George. All rights reserved.
//

#ifndef Watermelon_h
#define Watermelon_h

#include <stdio.h>
#include "Fruit.h"

// Watermelon inherits from Fruit
class Watermelon : public Fruit {
public:
    Watermelon();
    virtual void eat() override;
    void slice(int num_slices);
    int get_num_slices();
    
private:
    int slices;
    // Since Watermelon inherits from Fruit,
    // it secretly has these here too:
    // int seeds;
    // std::string color;
};

#endif /* Watermelon_h */
