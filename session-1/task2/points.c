
#include <stdio.h>
#include <math.h> //这里包含了math.h库，以便使用sqrt函数来计算两点之间的距离。如果用了math.h库，必须“-lm”链接选项
#include "points.h"


int main( void ) {

    // complete the structure definition in the header file first
    // implement code for the following
    // include necessary libraries
    
    // initialise two points here
    Point p1 = { .x=1, .y=2 };
    Point p2 = { .x=-2, .y=4 };
    
    printf(" Distance between (%.1f,%.1f) and (%.1f,%.1f) is %f\n", 
             p1.x,p1.y,p2.x,p2.y,distance(p1,p2));
    
    return 0;
}

float distance( Point p, Point q ) {
    // implement distance here
    return sqrt((p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y));
}