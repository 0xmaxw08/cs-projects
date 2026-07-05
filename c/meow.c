#include <stdio.h>
#include <stdbool.h>

int main(void){
    int n;

    do {
        printf("Enter number of repetitions: ");

        if (scanf("%d", &n) != 1) {
            printf("Invalid Input. Try again. \n");
            n = -1;
            while (getchar() != '\n');
        }
    } while(n<0);

    
    // while (true){
    //     printf("Number of repetitions? ");
    //     scanf("%d", &n);

    //     if (n>=0){
    //         break;
    //     }
    // }
    for (int i = 0; i < n; i++){
        printf("meow\n");
    }
    return 0;
}
