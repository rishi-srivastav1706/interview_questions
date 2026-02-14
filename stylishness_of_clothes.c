#include<stdio.h>
int main()
{
    int you, date;
    int no = 0;
    int yes =2;
    int may_be = 1;
    printf("Enter the stylishness of your clothes: ");
    scanf("%d", &you);
    printf("Enter the stylishness of your date's clothes: ");
    scanf("%d", &date);
    if(you>=8 || date>=8)
    {
        if(you<=2 || date<=2)
        {
            printf("%d", no);
        }
        else
        {
            printf("%d", yes);
        }
    }
    else
    {
        printf("%d", may_be);
    }
    
