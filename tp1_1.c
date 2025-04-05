
#include <stdio.h>
int main()
{
    printf("hola mundo");

    int numero = 42;

    int *puntero = &numero;

    printf("Contenido del puntero: %d\n", *puntero);
    printf("Direccion almacenada por el puntero: %p\n", puntero);
    printf("Direccion de memoria de la variable: %p\n", &numero);
    printf("Direccion de memoria del puntero: %p\n", &puntero);
    printf("Tamaño de memoria de la variable: %zu bytes\n", sizeof(numero));

    return 0;
}
