//
//  Circle.h
//  Book Section 9.6 - Separate Definition Implementation
//
//  Created by ax on 10/26/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#ifndef Circle_h
#define Circle_h

// class definition

class Circle {
    
    public:
    
    // radius
    double radius;
    
    // construct default circle object
    Circle();
    
    // construct circle object
    Circle(double);
    
    // return area of circle
    double get_area();
};


#endif /* Circle_h */
