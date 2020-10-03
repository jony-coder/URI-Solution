#include <stdio.h>

int main()
{

    int n;
    int year, month, day, temp;
    scanf("%d", &n);

    year = n/365;
    temp = n%365;
    month = temp/30;
    day = temp%30;

    printf("%d ano(s)\n", year);
    printf("%d mes(es)\n", month);
    printf("%d dia(s)\n", day);

    return 0;
}
