//funtion gets input and return values
#include<stdio.h>
int z;
void multiplication(int x,int y)
{
    // x & y are local variable
    z = x*y;  
}
    void addition(int x,int y)
{
    z = x + y;
}
int main()
{
    int a,b;
    printf("enter two values: ");
    scanf("%d%d",&a,&b);
    multiplication(a,b);
    printf("multiplication result: %d",z);
    addition(a,b);
    printf("addition result: %d",z);
}