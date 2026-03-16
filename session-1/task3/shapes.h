
// structure definitions

typedef struct _point {
    float x;
    float y;
} Point;

// define the Rectangle structure here

typedef struct _rectangle {
    //补全了rectangle结构体的定义
    Point p; 
    float width;
    float height;
    // fields
} Rectangle;

// function headers - implement in shapes.c
//这里在头文件中声明了函数包含的参数和返回类型，供其他文件调用

Rectangle makeRectangle( Point p, float width, float height );
float area( Rectangle r );
void shiftRectangle( Rectangle *r, Point dp );
void scaleRectangle( Rectangle *r, float scale );

//Point *corners( Rectangle r );
//Rectangle rotate90( Rectangle r );