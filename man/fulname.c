#include<stdio.h>
int main()
{
    char str[30];
    printf("enter a full name :");
    scanf("%[^\n]",str);
    printf("your name: %s",str);
}