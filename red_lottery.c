#include <stdio.h>

int main() {
    int a, b, c;
    printf("enter the number: ");
    scanf("%d", &a);
    printf("enter the number: ");
    scanf("%d", &b);
    printf("enter the number: ");
    scanf("%d", &c);
    if(a==2&& b==2 && c==2){
        printf("10");
    }
    else if(b!=a && c!=a){
        printf("1");
    }
    else{
        printf("0");
    }

    return 0;
}