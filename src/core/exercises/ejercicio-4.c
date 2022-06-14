#include <stdio.h>
#include <stdlib.h>

#include "../../../include/core/exercises/ejercicios.h"

void ejercicio_4() 
{

    printf("\nAnalizar el siguiente codigo:\n");

    /*
    int a,b;
    printf(“\nIngrese un numero entero\n”);
    scanf(“%d”,&a);
    printf(“\nIngrese otro número entero\n”);
    scanf(“%d”,&b);
    printf(“\n”);
    if (a>b) {
        printf(“%d %d” es mayor que”,a,b);} // Acá se rompe el codigo, la comilla que sobra provoca que el resto del codigo intente salir por pantalla
    else
        if (a<b) {
            printf(“%d %d”,”’es mayor que”,b,a);} // Aquí hay una coma y dos comillas de sobra y se abre una comila simple sin razón, tambien está mal colocada la frase
        else {
            printf(“%d , %d”,”’es igual a”,a,b);} // Mismo Problema que el prinft anterior
    printf(“\n”);
    system(“pause”);
    */

    printf(
        "\n"
        "01     int a,b;\n"
        "02     printf(“\\nIngrese un numero entero\\n”);\n"
        "03     scanf(“%%d”,&a);\n"
        "04     printf(“\\nIngrese otro número entero\\n”);\n"
        "05     scanf(“%%d”,&b);\n"
        "06     printf(“\\n”);\n"
        "07     if (a>b) {\n"
        "08         printf(“%%d %%d” es mayor que”,a,b);}\n"
        "09     else\n"
        "10         if (a<b) {\n"
        "11             printf(“%%d %%d”,”\'es mayor que”,b,a);}\n"
        "12         else {\n"
        "13             printf(“%%d , %%d”,”\'es igual a”,a,b);}\n"
        "14     printf(“\\n”);\n"
        "15     system(“pause”);\n"
    );

    printf(
        "\na)"
        "\nEl programa esta intentando averiguar el numero mayor, el menor, y si hay igualdad entre dos entradas."
        "\nEl programa tiene errores de sintaxis:"
        "\n     Linea 08: Acá se rompe el codigo, la comilla que sobra provoca que el resto del codigo intente salir por pantalla"
        "\n     Linea 11: Aquí hay una coma y dos comillas de sobra y se abre una comila simple sin razón, tambien está mal colocada la frase"
        "\n     Linea 13: Mismo Problema que la linea 11"
    );

    printf(
        "\n\nb)"
        "\nLa primera diferencia con el ejercicio uno, es que este podria discriminar si dos numeros son iguales (si funcionase)."
    );

    printf(
        "\n\ne)"
        "\nSi se ingresa numeros decimales o caracteres el programa se rompe, si se ingresan numeros negativos funciona porque son del tipo entero"
    );

    printf("\n\nf)");
    int a, b;
    printf("\nIngrese un numero entero: ");
    scanf("%d", &a);
    printf("Ingrese otro número entero: ");
    scanf("%d", &b);
    if (a > b) 
    {
        printf("El número mayor es: %d", a);
    } 
    else
        if (a < b) {
            printf("El número menor es: %d", a);} 
        else {
            printf("%d es igual a %d", a, b);} 

    printf("\n\ng)");
    printf("\nIngrese un numero entero: ");
    scanf("%d", &a);
    printf("Ingrese otro número entero: ");
    scanf("%d", &b);
    printf("%d es %s a %d", a, (a == b) ? "igual" : "distinto", b);
    printf("\n");    
 
}