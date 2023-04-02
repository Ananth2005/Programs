#include<stdio.h>
void swap(int *p,int *p1)
{
    int t;
    t = *p;
    *p = *p1;
    *p1 = t;
}
int main()
{
    int a=10,b=15;
    swap(&a,&b);
    printf("a = %d\t b = %d",a,b);
}