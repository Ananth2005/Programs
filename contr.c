#include<stdio.h>
int main()
{
    int choice,a,b;
    printf("enter your choice");
    scanf("%d",&choice);
    printf("enter two values a & b");
    scanf("%d%d",&a,&b);
    if(choice==1)
    {
        printf("addition of a & b = %d",a+b);
    }
    else if(choice==2)
    {
        printf("difference of b/w a & b = %d",a-b);
    }
    else if(choice==3)
    {
        printf("multiplication of a & b = %d",a*b);
    }
    else if(choice==4)
    {
        printf("division of a & b = %d",a/b);
    }
    else
    {
        printf("error:your input not whithin 1 to 4");
    }
}