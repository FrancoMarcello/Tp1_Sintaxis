// para crear el ejecutable = gcc tp1.c -o tp1
// ejecutarlo ./tp1
#include <stdio.h>

//Funcion calcular y retornar longitud de una cadena (Punto a)
int longitudCadena(char* cadena){
    int longitud = 0;

    while (cadena[longitud] != '\0'){
        longitud++;
    }

    return longitud;
}

int convertirDigitos(char *cadena) {
    int equivalente = 0;
    int i = 0;
    while (cadena[i] != '\0') {
            if(cadena[i] <= 57 && cadena[i] >= 48)
                { // me fijo si es una cadena de digitos numericos y no de otros simbolos
            equivalente += cadena[i] - 48 ;
            equivalente *= 10;
            i++;
                }
    }
    equivalente = equivalente/10;
    return equivalente;
}

void convertirMayusculas(char* cadena)
{
    int i = 0;
    while(cadena[i]!='\0')
    {
        if(cadena[i]>= 97 && cadena[i]<= 122)   //Si es una letra en minuscula
        {
            cadena[i] = cadena[i] - 32;         //La convierto (32 es la diferencia entre ASCII de minusculas y mayusculas)
        }
        i++;
    }
}

// d) Eliminar de una cadena dada todas las ocurrencias de un carácter dado. 

void eliminarCaracter (char *cadena, char caracter) {
     int i, j;
    for (i = 0, j = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] != caracter) {
            cadena[j] = cadena[i];
            j++;
        }
    }
    cadena[j] = '\0';
}


int main() {
    int cod;
    char cadena[]="";
    char caracter;
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
            printf("Ingrese cadena\n");
            scanf("%s",cadena);
            int longitud = longitudCadena(cadena);
            printf("Longitud de la cadena: %s\n", longitud);
            break;
        case 2:
            printf("Ingrese cadena\n");
            scanf("%s", cadena);
            printf("Equivalente numerico: %i\n", convertirDigitos(cadena));
            break;
        case 3:
            printf("Ingrese cadena\n");
            scanf("%s",cadena);
            convertirMayusculas(cadena);
            printf("Cadena generada: %s\n",cadena);
            break;
        case 4:
        printf("Ingrese cadena\n");
        scanf("%s",cadena);
        printf("Ingrese caracter\n");
        scanf("%s",caracter);
        eliminarCaracter(cadena, caracter);
        printf("Cadena resultante: %s\n", cadena);
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
