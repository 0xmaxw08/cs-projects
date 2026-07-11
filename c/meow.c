#include <stdio.h>

void meow(int times);

int main(void){

    int n = -1;
    
    do {
        printf("meows: ");
        if (scanf("%i", &n) != 1){
            while(getchar() != '\n')
                continue;
            continue;
        }
        while (getchar() != '\n')
            continue;
    } while (n < 0);

    meow(n);
}

void meow(int times){

    for (int i = 0; i < times; i++){
        printf("meow");
    }
}
