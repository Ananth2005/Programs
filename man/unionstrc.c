#include<stdio.h>
struct dt1{
    int x;
    char s[36];
    };
union dt2{
    int y;
    char s1[40];
    };
int main()
{
    struct dt1 sd1;
    union dt2 ud2;
    printf("size of dt1 (struct) : %ld bytes\n",sizeof(sd1));
    printf("size of dt2 (union) : %ld bytes",sizeof(ud2));
}
