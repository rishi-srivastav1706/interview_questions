#include <stdio.h>

int main() {
    int cigars, weekend;
    printf("enter the amount of cigars ");
    scanf("%d", &cigars);
    printf("is it weekend? ");
    scanf("%d", &weekend);
    
    
    if(weekend)
    {
        
        if(cigars>=40)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
    else{
        if(cigars>=40 && cigars <=60)
        {
            printf("True");
        }
        else
        {
            printf("false");
        }
    }
    return 0;
}