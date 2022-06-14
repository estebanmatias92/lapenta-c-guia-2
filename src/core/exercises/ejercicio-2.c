#include <stdio.h>
#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_2() 
{
    printf("\nEncontrar el discriminante de ecuación cuadratica:\n");

    int a = 0, b = 0, c = 0;
    int discriminante = 0;

    printf("\nPara la ecuación \"ax^2+bx+c = 0\"");

    printf("\nIngrese valor de (a): ");
    fflush(stdin);
    scanf("%d", &a);

    printf("Ingrese valor de (b): ");
    fflush(stdin);
    scanf("%d", &b);

    printf("Ingrese valor de (c): ");
    fflush(stdin);
    scanf("%d", &c);

    discriminante = (b * b) - (4 * a * c);

    printf("\nEl discriminante de la ecuacion cuadratica \"%dx^2+%dx+%d = 0\" es: %d", a, b, c, discriminante);
    printf("\n...Doing exercise 2!!!");
}