//function has no inputs but return a value
#include<stdio.h>
int addition()
{
    int x,y;
    printf("enter to values: ");
    scanf("%d %d",&x,&y);
    return x+y;

}
int main()
{
    //int res = addition();
    printf("addition of two numpers: %d\n",addition());
}
