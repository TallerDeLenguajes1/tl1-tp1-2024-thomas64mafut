#include <stdio.h>
#include <math.h>

int cuadradoDeUnNumero(int numero) {
    return pow(numero, 2);
}

void cuadradoDeUnNumeroVoid(int *puntNumero) {
    *puntNumero = pow(*puntNumero, 2);
    return;
}

void mostrarVariable(int variable) {
    printf("%d - %p\n", variable, variable);
    return;
}

void invertir(int *a, int *b) {
    int temporal = *b;
    *b = *a;
    *a = temporal;
    return;
}

void ordenar(int *a, int *b) {
    if (*a > *b){
        int temporal = *b;
        *b = *a;
        *a = temporal;
        return;
    }
    return;
}

int main() {
    int numero = 5, *puntNumero;
    puntNumero = &numero;
    printf("a). %d\n", cuadradoDeUnNumero(4));
    cuadradoDeUnNumeroVoid(puntNumero);

    printf("b). %d\n", numero);

    printf("c). ");
    mostrarVariable(numero);

    printf("d). ");
    int num1 = 1, num2 = 2, *puntA, *puntB;
    puntA = &num1;
    puntB = &num2;
    invertir(puntA, puntB);
    printf("%d - %d\n", num1, num2);

    printf("e). ");
    num1 = 3;
    num2 = 8;
    ordenar(puntA, puntB);
    printf("%d - %d", num1, num2);

    return 0;
}