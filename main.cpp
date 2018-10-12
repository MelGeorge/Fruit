//
//  main.cpp
//  Inheritance and Polymorphism Demo
//
//  Created by Melissa George on 2/15/18.
//  Copyright © 2018 Melissa George. All rights reserved.
//

#include <iostream>
#include "Fruit.h"
#include "Watermelon.h"

int main(int argc, const char * argv[]) {
    
    Watermelon watermelon;
    Fruit fruit;
    Fruit * fruit_ptr = &fruit;
    fruit_ptr->eat();
    fruit_ptr = &watermelon;
    fruit_ptr->eat();

    return 0;
}


