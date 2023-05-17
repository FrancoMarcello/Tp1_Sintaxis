// para crear el ejecutable = gcc tp1.c -o tp1
// ejecutarlo ./tp1
#include <stdio.h>

int main() {
    int cod;
    printf("Ingrese la operacion que desea realizar\n");
    printf("1) Calcular y retornar la longitud de una cadena dada \n");
    printf("2) Convertir una cadena de dígitos en su equivalente numérico\n");
    printf("3) Convertir una cadena de caracteres a la misma cadena con todos sus caracteres en mayúscula\n");
    printf("4) Eliminar de una cadena dada todas las ocurrencias de un carácter dado\n");
    printf("5) Concatenar al final de la primera cadena dada una segunda cadena también dada\n");
    printf("6) Modificar la cadena dada con la inserción de un carácter dado en una posición determinada\n");
    scanf("%d", &cod);
    while(cod != 0){
        switch (cod) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        default:
            printf("Código inválido.\n");
            break;
    }
    printf("Ingrese la operacion que desea realizar (con 0 se corta)\n");
    printf("1) Calcular y retornar la longitud de una cadena dada \n");
    printf("2) Convertir una cadena de dígitos en su equivalente numérico\n");
    printf("3) Convertir una cadena de caracteres a la misma cadena con todos sus caracteres en mayúscula\n");
    printf("4) Eliminar de una cadena dada todas las ocurrencias de un carácter dado\n");
    printf("5) Concatenar al final de la primera cadena dada una segunda cadena también dada\n");
    printf("6) Modificar la cadena dada con la inserción de un carácter dado en una posición determinada\n");
    scanf("%d", &cod);
    }

    return 0;
}
