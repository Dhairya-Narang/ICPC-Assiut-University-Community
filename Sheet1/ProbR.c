#include <stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    int year = number/365;
    printf("%d years\n",year);
    int months = (number-(year*365))/30;
    printf("%d months\n",months);
    int days = (number-((365*year)+(30*months)));
    printf("%d days\n",days);
}
