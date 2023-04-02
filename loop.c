#include<stdio.h>
int main()
{
    int inp;
    int dig;
    int nod=0;
    printf("enter a number:");
    scanf("%d",&inp);
    while(inp>0)
    {
        dig=inp%10;
        printf("lsd: %d\n",dig);
        inp=inp/10;
        nod=nod+1;
    }
    printf("you have entered %d no.oof digits",nod);
}