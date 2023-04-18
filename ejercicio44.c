#include <stdio.h>

int main() {
    int numero, i;
    unsigned long long factorial = 1;
    
    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);
    
    for(i = 1; i <= numero; i++) {
        factorial *= i;
    }
    
    printf("El factorial de %d es %llu", numero, factorial);
    
    return 0;
}
