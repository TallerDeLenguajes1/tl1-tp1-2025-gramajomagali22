#include <stdio.h>

// funcion para calcular el cuadrado con tipo

int calcularCuadrado(int *num)
{

    return (*num) * (*num);
}

// funcion para calcular el cuadrado sin tipo

void cuadradoVoid(int *num)
{
    printf("\nEl cuadrado calculado en una funcion de tipo (VOID) del numero %d es %d", *num, (*num) * (*num));
}

// funcion para mostrar las direcciones de memoria de una variable

void mostrarDireccionMemoria(int *variable)
{

    printf("\nDireccion de memoria: %p\n", variable);
    printf("\nContenido: %d\n", *variable);
}

// funcion para invertir valores

void invertir(int *a, int *b)
{
    int aux;

    printf("VALORES ORIGINALES----------\n");
    printf("a=%d\n", *a);
    printf("b=%d\n", *b);
    aux = *a;
    *a = *b;
    *b = aux;

    printf("VALORES INVERTIDOS----------\n");
    printf("a=%d\n", *a);
    printf("b=%d\n", *b);
}

// funcion para calcular el mayor y menor

void mayorMenor(int *a, int *b)
{

    printf("valor de a:%d\n", *a);
    printf("valor de b:%d\n", *b);

    int aux;

    if (*a > *b)
    {
        aux = *a;
        *a = *b;
        *b = aux;
    }

    printf("el valor mayor es b: %d y el valor menor a:%d", *b, *a);
}

int main()
{

    int numero, cuadrado;

    printf("ingrese un numero: ");
    scanf("%d", &numero);

    // calculo el cuadrado en la funcion con tipo

    cuadrado = calcularCuadrado(&numero);

    printf("\nel cuadrado del numero %d es %d", numero, cuadrado);

    // calculo el cuadrado en la funcion sin tipo

    cuadradoVoid(&numero);

    // muestro las direcciones de memoria de la variable del numero ingresado

    mostrarDireccionMemoria(&numero);

    // declaro dos parametros

    int a = 120, b = 80;

    // los invierto

    invertir(&a, &b);

    // declaro otros dos parametros

    int valor1 = 400, valor2 = 60;

    // los ordeno de menor a mayor

    mayorMenor(&valor1, &valor2);

    // inicializo la variable cuadrdado en 0 para volver a utilizarla

    cuadrado = 0;

    // ingresar dos parametros para trabajar con las funciones ya hechas

    int num1, num2;

    printf("\nIngrese un numero: ");
    scanf("%d", &num1);

    printf("\nIngrese un numero: ");
    scanf("%d", &num2);

    // mostrar cuadrado funcion con tipo

    // num1

    cuadrado = calcularCuadrado(&num1);

    printf("El cuadrado del numero: %d es %d", num1, cuadrado);

    cuadrado = 0;

    // num2

    cuadrado = calcularCuadrado(&num2);

    printf("El cuadrado del numero: %d es %d", num1, cuadrado);

    // cuadrado con funcion sin tipo

    cuadradoVoid(&num1);
    cuadradoVoid(&num2);

    // direccion de memoria

    mostrarDireccionMemoria(&num1);
    mostrarDireccionMemoria(&num2);

    // invertir

    invertir(&num1, &num2);

    // ordenar menor y mayor

    mayorMenor(&num1, &num2);

    return 0;
}