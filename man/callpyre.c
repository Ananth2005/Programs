#include<stdio.h>
void modify(int *x)
{
    *x = *x * 10;
    printf("address in x: %p\n",x);
}
int main()
{
    int a=10;
    modify(&a);
    printf("\nadderss of a: %p",&a);
    printf("\na = %d",a);
}