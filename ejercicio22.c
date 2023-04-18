#include <stdio.h>

int main() {
    int numero, digito, contador = 0;
    
    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);
    
    while(numero != 0) {
        digito = numero % 10;
        if(digito == 1) {
            contador++;
        }
        numero /= 10;
    }
    
    printf("El numero de veces que el digito 1 aparece en el numero ingresado es: %d", contador);
    
    return 0;
}
