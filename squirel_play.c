#include <stdio.h>

int main() {
    int temp, summer;
    printf("enter the temperature: ");
    scanf("%d",&temp);
    printf("enter 1 for is summer \t 0 for not summer ");
    scanf("%d", &summer);
    if(summer)
    {
        if(temp>=60 && temp<=100)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    else
    {
        if(temp>=60 && temp<=90)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    
    }
    return 0;
}