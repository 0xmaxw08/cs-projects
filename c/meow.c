#include <stdio.h>
#include <stdbool.h>

int main(void){
    int n;

    while (true){
        printf("Enter number of reps: ");
        scanf("%i", &n);

        if (n < 0){
            continue;
        }
        else {
            break;
        }
    }
    for (int i = 0; n > i; i++){
        printf("meow\n");
    }
}
    