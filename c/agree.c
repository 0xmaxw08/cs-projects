#include <stdio.h>

int main(void){
    char x;

    while(1){
        printf("Do you agree? ");
        scanf(" %c", &x);
    
        if (x == 'y' || x == 'Y'){ // || works as or
            printf("Agreed :)\n");
            break;
        }
        else if (x == 'n' || x == 'N'){
            printf("Not agreed :(\n");
            break;
        }
        else{
            printf("Invalid Input!\n");
        }
    }
}
