#include <stdio.h>

int main() {
    int n, i, suma = 0, contador = 0;
    
    printf("Ingresa un entero: ");
    scanf("%d", &n);

    printf("Los primeros %d multiplos de 3 son: ", n);
    for (i = 1; contador < n; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
            suma += i;
            contador++;
        }
    }

    int promedio = suma / n;
    printf("\nEl promedio entero de los %d primeros multiplos de 3 es: %d", n, promedio);

    return 0;
}
