#include <stdio.h>

int main() {
    int numero;

    // Solicitar al usuario un número de tres digitos
    printf("Introduce un numero de tres digitos: ");
    scanf("%d", &numero);

    // Validar si el numero tiene tres digitos
    if (numero < 100 || numero > 999) {
        printf("El numero no tiene tres digitos validos.\n");
        return 1;
    }

    // Extraer los digitos
    int digito1 = numero / 100;
    int digito2 = (numero / 10) % 10;
    int digito3 = numero % 10;

    // Mostrar los enteros comprendidos entre 1 y cada digito
    printf("Enteros comprendidos entre 1 y el primer digito: ");
    for (int i = 1; i <= digito1; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Enteros comprendidos entre 1 y el segundo digito: ");
    for (int i = 1; i <= digito2; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Enteros comprendidos entre 1 y el tercer digito: ");
    for (int i = 1; i <= digito3; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
