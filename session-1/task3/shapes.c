
#include <stdio.h>
#include "shapes.h"

int main( void ) {

    // complete the structure definition in the header file first
    // code in main to test the structures and functions
    
    return 0;
}

Rectangle makeRectangle( Point p, float width, float height ){
    //initialize the rectangle structure and return it
    Rectangle r;
    r.p = p;
    r.width = width;
    r.height = height;

    return r;
}

float area( Rectangle r ) {
    float a = 0.0;
    a = r.width * r.height;

    return a;
}
//平移函数
void shiftRectangle( Rectangle *r, Point dp ) {
    r->p.x += dp.x;//通过指针访问结构体成员，修改矩形的位置,dp表示平移的距离
    r->p.y += dp.y;
    return;
}
//缩放函数,难点
void scaleRectangle( Rectangle *r, float scale ) {
    //通过指针访问结构体成员，修改矩形的宽度和高度,scale表示缩放的比例
    r->width *= scale;
    r->height *= scale;

    return;
}
