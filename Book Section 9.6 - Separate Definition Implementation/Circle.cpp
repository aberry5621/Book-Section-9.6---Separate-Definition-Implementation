//
//  Circle.cpp
//  Book Section 9.6 - Separate Definition Implementation
//
//  Created by ax on 10/26/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include "Circle.h"

// implementation

// construct default circle object
Circle::Circle() {
    radius = 1;
}

// Construct a circle object
Circle::Circle(double new_radius) {
    radius = new_radius;
}

// return the area of this circle
double Circle::get_area() {
    return radius * radius * 3.14159;
}


