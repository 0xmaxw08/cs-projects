#include <stdio.h>

int main(void){
    char x;

    printf("Do you agree? ");
    scanf("%c", &x);

    if (x == 'y' || x == 'Y'){ // || works as or
        printf("Agreed :)\n");
    }
    else if (x == 'n' || x == 'N'){
        printf("Not agreed :(\n");
    }
    else{
        printf("Invalid Input!\n");
    }
}
