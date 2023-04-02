#include<stdio.h>
int size;//global variable
void fun(int arr[])
{
    int i;
    for(i=0;i<size;i++)
    printf("%d\t",arr[i]);
}
int main()

{
    int a[30],i;
    printf("enter the no.f of elements process: ");
    scanf("%d",&size);
    printf("enter the value: ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    fun(a);
}