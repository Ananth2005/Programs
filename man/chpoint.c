#include<stdio.h>
int main()
{
    char c[] = {'a','n','a','n','t','h'};
    char *ptr;
    int i;
    ptr = c;
    for(i=0;i<6;i++)
    {
        printf("%c char in %p\n",*ptr,ptr);
        ptr = ptr + 1;

    }


}