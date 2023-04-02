#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
int main()
{
    //int i;
    char p[] = "Ananth5@athul";
    //printf("enter the password: ");
    //scanf("%s\n"p,);
    bool result = verify_password(p);
    if (result) printf("verified password!\n");
    else printf("invalid password!\n");

    return 0;
}
bool (verify_password(char *p));
{
    int i;
    int length = strlen(p);
    if (length < 8) return false;

    bool has_upper = false;
    bool has_lower = false;
    bool has_digit = false;
    bool has_symbol = false;

    for(i=0;i < length;i++)
{
    if (isupper(p[i])) has_upper = true;
    if (islower(p[i])) has_lower = true;
    if (isdigit(p[i])) has_digit = true;
    if (ispunct(p[i])) has_symbol = true;
}

if (!has_upper) return false;
if (!has_lower) return false;
if (!has_digit) return false;
if (!has_symbol) return false;

 return true;
}