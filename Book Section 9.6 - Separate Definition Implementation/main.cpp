//
//  main.cpp
//  Book Section 9.6 - Separate Definition Implementation
//
//  Created by ax on 10/26/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
#include "Circle.h"
using namespace std;

int main() {

    cout << "Circle Class!\n";
    
    // let's make some circles
    Circle circle1;
    Circle circle2(5.0);
    
    cout << "The area of the circle 1 of radius " << circle1.radius << " is " << circle1.get_area() << endl;
    cout << "The area of the circle 2 of radius " << circle2.radius << " is " << circle2.get_area() << endl;
    
    // grow circle 2
    circle2.radius = 100;
    
    cout << "The area of circle 2 that grew to radius " << circle2.radius << " is " << circle2.get_area() << endl;
    
    
    return 0;
}
