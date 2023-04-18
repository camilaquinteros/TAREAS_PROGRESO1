#include <stdio.h>

int main() {
    int num, i;
    
    printf("Ingresa un entero: ");
    scanf("%d", &num);

    printf("Los multiplos de 5 entre 1 y %d son: ", num);
    for (i = 1; i <= num; i++) {
        if (i % 5 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

