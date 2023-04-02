#include<stdio.h>
int main()
{
    int a[] = {10,23,33,43};
    int *pt,i;
    pt = a;
    for(i=0;i<4;i++)
    {
        printf("%d data in address: %p\n",*pt,pt);
        pt = pt + 1;
    }
    //return 1;
}