#include<stdio.h>
int main()
{
    int a=1;
    int range;
    printf("enter number of time exe: ");
    scanf("%d",&range);
    while(a<=range){
    printf("%d\n",a*5);
    a=a+1;
    }
    printf("A = %d",a);
}