#include<stdio.h>
int main()
{
    char c[10];
    int i;
    printf("enter the 5 chars : \n");
    for(i=0;i<10;i++)
        scanf("%c",&c[i]);
    //c[i]='\0';
    printf("given input is : %s",c);
}