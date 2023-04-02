#include<stdio.h>
//input but no return values from function
//function definition
void multi_table(int x)
{
    int i;
    for(i=1;i<=15;i++)
    {
        printf("%d x %d = %d\n",i, x, i * x);
    }
}
int main()
{
    int n;
    printf("enter the value: ");
    scanf("%d",&n);
    multi_table(n); //function call statement
}