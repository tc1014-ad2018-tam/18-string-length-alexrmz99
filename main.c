/*  This program will find the length of a given string without using the standard library function.
 *
 *
 *  Alejandro Ramírez Michel
 *  18 de octubre de 2018
 *
 * */

#include <stdio.h>
#include <string.h>

//funcion para contar las palabras en el string
int Contador(char string[]) {
    int Count = 0;  //nuestro contador empieza en 0
    while (string[Count] != '\0') {     //mientras el string sea diferente a 0, sumar en el contador
        Count++;
    }
    return Count-1; //-1 para no contar el enter
}

int main() {
    //establezco variables
    char palabras[200];

    //le pido al usuario que me de una cadena de caracteres
    printf("Write anything you want: ");
    fgets(palabras, sizeof(palabras), stdin);

    //mando a llamar a función
    Contador(palabras);

    //imprimo resultado
    printf("You gave me %d characters (counting spaces).", Contador(palabras));




    return 0;
}