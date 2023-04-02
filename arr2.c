#include<stdio.h>
int main()
{
    int a[2][2] = {{10,15},{20,25}};
    int r,c;
    printf("the 2d array values :\n");
    for(r=0;r<2;r++)
    {
       for(c=0;c<2;c++)
       printf("val :[%d][%d] = %d\t",r,c,a[r][c]);
    printf("\n");
    }
}