#include <stdio.h>
#include <stdbool.h>

void meow(void);

int main(void){
    int n;
    do {
        printf("Positive integer: ");
        scanf("%i", &n);
        if (scanf("%i", &n) != 1) {
            while (getchar() != '\n');  // discard bad input
            continue;
        }

        if (n >= 0){
            break;
        }
    } while(true);

    for (int i = 0; i < n; i++){
        meow();
    }
}

void meow(void){
    printf("meow\n");
}
