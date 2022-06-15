#include <stdio.h>
#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_11() 
{
    printf("\nEcuaciones con numeros reales e imaginarios\n");

    char operator;
    float a, bi, c, di;

    printf("\nIngrese el número real (a): ");
    fflush(stdin);
    scanf(" %f", &a);
    printf("Ingrese el número imaginario (bi): ");
    fflush(stdin);
    scanf(" %f", &bi);
    printf("Ingrese el número real (c): ");
    fflush(stdin);
    scanf(" %f", &c);
    printf("Ingrese el número imaginario (di): ");
    fflush(stdin);
    scanf(" %f", &di);

    printf("\nOperadores: suma(+), resta(-), multiplicación(*), division(/)");
    printf("\nIngrese el operador: ");
    fflush(stdin);
    scanf(" %c", &operator);

    printf("\nZ1 = (a + bi); Z2 = (c + di)");
    switch (operator)
    {
    case '+':
    case 's':
    case 'S':
        printf("\nZ1 + Z2 = (a + bi) + (c + di)");
        printf("\nZ1 + Z2 = (%.2f + %.2fi) + (%.2f + %.2fi)", a, bi, c, di);
        printf("\nZ1 + Z2 = (%.2f + %.2f) + (%.2f + %.2f)i", a, c, bi, di);
        float Z1_sum = a + c;
        float Z2_sum = bi + di;
        printf("\nZ1 + Z2 = %.2f + %.2fi", Z1_sum, Z2_sum);

        break;
    case '-':
    case 'r':
    case 'R':
        printf("\nZ1 - Z2 = (a + bi) - (c + di)");
        printf("\nZ1 - Z2 = (%.2f + %.2fi) - (%.2f + %.2fi)", a, bi, c, di);
        printf("\nZ1 - Z2 = (%.2f - %.2f) + (%.2f - %.2f)i", a, c, bi, di);
        float Z1_sub = a - c;
        float Z2_sub = bi - di;
        printf("\nZ1 - Z2 = %.2f + %.2fi", Z1_sub, Z2_sub);
        break;
    case '*':
    case 'm':
    case 'M':
        printf("\nZ1 * Z2 = (a + bi) * (c + di)");
        printf("\nZ1 * Z2 = (%.2f + %.2fi) * (%.2f + %.2fi)", a, bi, c, di);
        printf("\nZ1 * Z2 = ((%.2f * %.2f) - (%.2f * %.2f)) + ((%.2f * %.2f) + (%.2f * %.2f))i", a, c, bi, di, a, di, bi, c);
        float Z1_prod = ((a * c) - (bi * di));
        float Z2_prod = ((a * di) + (bi * c));
        printf("\nZ1 * Z2 = %.2f + %.2fi", Z1_prod, Z2_prod);
        break;
    case '/':
    case 'd':
    case 'D':
        printf("\nZ1 / Z2 = (a + bi) / (c + di)");
        printf("\nZ1 * Z2^(-1) = (%.2f + %.2fi) * ((1 / %.2f) + (1 / %.2fi))", a, bi, c, di);
        printf("\nZ1 * Z2^(-1) = ((%.2f / %.2f) + (%.2f / %.2f) + (%.2f / %.2f) + (%.2f / %.2f))i", a, c, a, di, bi, c, bi, di);
        float Z1_div = (a / c);
        float Z2_div = (bi / di);
        printf("\nZ1 * Z2^(-1) = (%.2f + (%.2f / %.2fi) + (%.2fi / %.2f) + %.2fi)", Z1_div, a, di, bi, c, Z2_div);
        break;
    default:
        printf("\nEl operador ingresado no es reconocido");
        break;
    }
    printf("\n");

    
    printf("\nSe puede hacer el ejercicio con switch con las 3 opciones al mismo tiempo (simbolo, letra minuscula, letra mayuscula)");
    printf("\n\n");

}