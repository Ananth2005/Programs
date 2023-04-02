#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int noe,i;
    printf("enter the elements of numper: ");
    scanf("%d",&noe);
    p = (int *) calloc(noe,sizeof(int)); //it is a syntax
   // printf("size of p = &ld\n",sizeof(int));//this code not working
    printf("enter the values: ");
    for(i=0;i<noe;i++)
        scanf("%d",&p[i]);
    printf("values in arrey: \n");
    for(i=0;i<noe;i++)
        printf("%d\t",*(p+i));
        
}