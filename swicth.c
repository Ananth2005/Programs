#include<stdio.h>
int main()
{
int x,y;
char choice;
printf("enter your choice:");
scanf("%c",&choice);
printf("enter your values for x & y:");
scanf("%d %d",&x,&y);
switch(choice)
{
    case'+':
    printf("add x & y = %d",x+y);
    break;
    case'-':
    printf("diff x & y = %d",x-y);
    break;
    case'*':
    printf("mul x & y = %d",x*y);
    //break;
    default:
    printf("error:choice can be x or y");
    break;
}
}