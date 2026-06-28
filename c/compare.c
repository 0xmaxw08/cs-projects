#include <stdio.h>

int main(void){
    int x;
    int y;

    printf("Enter number x: ");
    scanf("%d", &x);

    printf("Enter number y: ");
    scanf("%d", &y);

    if (x > y){
        printf("x is greater than y!\n");
    }
    else if ( x < y){
        printf("x is less than y!\n");
    }
    else{
        printf("x is equal to y\n");
    }
    
}