#include<stdio.h>
int main()
{
    int a=60,b=30,c=6;
    printf("Bitwise AND a & b = %d\n",a&b);
    printf("Bitwise OR a or b = %d\n",a|b);
    printf("Bitwise Xor a ^ b = %d\n",a^b);
    printf("left shift or res = %d\n",c<<8);
    printf("rightshift result = %d\n",c>>10);
}