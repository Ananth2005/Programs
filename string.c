#include<stdio.h>
#include<stdlib.h>
int main()
{
    char buf[10];
    int x;
    printf("enter the value");
    scanf("%d",&x);
    sprintf(buf,"%d",x);
    printf("x value in temp; %s",buf);
}