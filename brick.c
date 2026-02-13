
#include <stdio.h>

int main() {
    int rows;
    int brick1, brick2;
    printf("enter the length of row in inches: ");
    scanf("%d", &rows);
    printf("enter no. of small bricks: ");
    scanf("%d", &brick1);
    printf("enter no. of big bricks: ");
    scanf("%d", &brick2);
    
    if((brick1 +(5*brick2))>=rows && (rows%5)<= rows)
    {
        printf("true");
    }
    else{
        printf("false");
    }
    
    

    return 0;
}