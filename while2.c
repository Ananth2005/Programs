#include<stdio.h>
int main()
{
    int a=1;
    int range;
    printf("enter number of time exe:");
    scanf("%d",&range);
    while(a<=range){
        printf("value=%d\n",a*10);
    }
    printf("A=%d\n",a);
}