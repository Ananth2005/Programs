#include<stdio.h>
struct point{
    int x,y;
};
int main()
{
    struct point p[2];
    int i;
    for(i=0;i<2;i++){
    printf("enter the x & y values: ");
    scanf("%d%d",&p[i].x,&p[i].y);
    }
    p[2].x = p[0].x + p[1].x;
    p[2].y = p[0].y + p[1].y;

    for(i=0;i<3;i++)
    {
    printf("p%d (x,y) is : %d,%d\n",i,p[i].x,p[i].y);
    }
}
    //printf("output is p[2] is (x,y) : %d, %d",p[2].x,p[2].y);