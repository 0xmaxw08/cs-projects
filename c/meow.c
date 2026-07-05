#include <stdio.h>
#include <stdbool.h>

int main(void){
    int n;

    while (true){
        printf("Number of repetitions? ");
        scanf("%d", &n);

        if (n>=0){
            break;
        }
    }
    for (int i = 0; i < n; i++){
        printf("meow\n");
    }
}
