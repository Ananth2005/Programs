#include<stdio.h>
int main()
{
    int *p,*p1;
    int i;
    p = (int *)malloc(8*sizeof(int));
    printf("\n values in *p\n");
    for(i=0;i<8;i++)
        printf("%d\t",p[i]);
    p = (int *)realloc(p,10*sizeof(int));
    printf("\nafter reallocation \n");
    for(i=0;i<10;i++)
    printf("%p\t",p[i]);
    free(p);
}