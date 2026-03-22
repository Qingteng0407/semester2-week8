
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point new;
    // implementation,put values in variable new and return it
    new.x = x;
    new.y = y;
    return new;
}

// complete other functions below

Line makeLine( Point p1, Point p2 ){
    Line new;
    // line is made of 2 points, so put p1 and p2 in the new line and return it
    new.p[0] = p1;
    new.p[1] = p2;
    return new;
}

Triangle makeTriangle( Point p1, Point p2, Point p3 ){
    Triangle new;
    // triangle is made of 3 points, so put p1, p2, p3 in the new triangle
    new.p[0] = p1;
    new.p[1] = p2;
    new.p[2] = p3;
    return new;
}

float lineLength( Line l ){
    // calculate the length,square root of (x2-x1)^2 + (y2-y1)^2
    float length;
    float dx = l.p[1].x - l.p[0].x;
    float dy = l.p[1].y - l.p[0].y;   
    length = sqrt(dx * dx + dy * dy);
    return length;
}

float triangleArea( Triangle t ){
    // calculate the area using Heron's formula
    float a = lineLength(makeLine(t.p[0], t.p[1]));
    float b = lineLength(makeLine(t.p[1], t.p[2]));
    float c = lineLength(makeLine(t.p[2], t.p[0]));
    float s = (a + b + c) / 2; // semi-perimeter
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

bool samePoint( Point p1, Point p2 ){
    // test if the points are close enough to be considered the same
    return (fabs(p1.x - p2.x) < 1.0e-6) && (fabs(p1.y - p2.y) < 1.0e-6);
} 

bool pointInLine( Point p, Line L ){
    // use samePoint to check if p is the same as either endpoint of the line
    return samePoint(p, L.p[0]) || samePoint(p, L.p[1]);
}

bool pointInTriangle( Point p, Triangle t ){
    // use samePoint to check if p is the same as any of the triangle vertices
    return samePoint(p, t.p[0]) || samePoint(p, t.p[1]) || samePoint(p, t.p[2]);
}
// - start with stubs as above 

// - compile regularly to test syntax
// - test functions by calling them from main()
