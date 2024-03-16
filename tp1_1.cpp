#include <stdio.h>

void procedimiento() {
    printf("Punto 3\n\n");
    int variable, *puntVariable;
    puntVariable = &variable;

    variable = 123;
    printf("1). %d\n", *puntVariable);
    printf("2). %p\n", puntVariable);
    printf("3). %p\n", &variable);
    printf("4). %p\n", &puntVariable);
    printf("5). %d\n", sizeof(variable));
}

int main() {
    printf("Hola mundo\n\n");
    procedimiento();
    return 0;
}