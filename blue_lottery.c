#include <stdio.h>

int main() {
    int a, b, c;
    printf("enter the number: ");
    scanf("%d", &a);
    printf("enter the number: ");
    scanf("%d", &b);
    printf("enter the number: ");
    scanf("%d", &c);
    int ab = a+b;
    int bc = b+c;
    int ac = a+c;
    if(ab==10 || bc==10 || ac==10){
        printf("10");
    }
    else if(a>10 || b>0 || c>10){
        printf("5");
    }
    else{
        printf("0");
    }

    return 0;
}