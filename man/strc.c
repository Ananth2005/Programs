#include<stdio.h>
struct point{
    int x,y;
};
int main()
{
    struct point p1,p2,p3;
    p1.x = 20;
    p1.y = 30;
    p2.x = 50;
    p2.y = 60;
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;
    printf("p3 (x,y) = %d,%d",p3.x,p3.y);
}