#include<stdio.h>
int main()
{
    int i=3,j=2;
    for(i=0;i<3;i++)
    printf("i am from parent: %d\n",i);
    for(j=0;j<2;j++)
    {
        printf("i am from child: %d\n",j);
    }
}