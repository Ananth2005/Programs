#include<stdio.h>
int main()
{
    char days[7] [15] = {"monday","thuesday","wednesday","thursday","friday","saturday","sunday"};
    int current day;
    int nogap;
    int daybw,nextday;
    printf("enter the current day: ");
    scanf("%d",&current day);
    printf("enter the nogap of days: ");
    scanf("%d",&nogap);
    daybw = current day + nogap;
    if(daybw<7)
        nextday = daybw;
    else
        nextday = (current day + nogap)%7;
        printf("next day: %s",days[nextday]);
}