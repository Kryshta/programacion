#include <stdio.h>
#include <stdlib.h>
#define TAM 13

int stringtoint (char word[]);

int main()
{

    char palabra1[TAM] = "123";
    char palabra2[TAM] = "-123";
    char palabra3[TAM] = "+123";
    char palabra4[TAM] = "";
    char palabra5[TAM] = "a";


    printf("%20s %20s %20s \n", "string", "mi funcion", "funcion atoi");
    printf("%20s %20d %20d \n", palabra1, stringtoint(palabra1), atoi(palabra1));
    printf("%20s %20d %20d \n", palabra2, stringtoint(palabra2), atoi(palabra2));
    printf("%20s %20d %20d \n", palabra3, stringtoint(palabra3), atoi(palabra3));
    printf("%20s %20d %20d \n", palabra4, stringtoint(palabra4), atoi(palabra4));
    printf("%20s %20d %20d \n", palabra5, stringtoint(palabra5), atoi(palabra5));

    return 0;
}

int stringtoint (char word[]){
    int valor=0, negativo=1;

    if (*word=='-')
        negativo = -1; //si el primer caracter es negativo convierto el resultado a negativo al final

    while ((*word)!=('\0')){

        if((*word<48 || *word>57) && ((*word)!='-' && (*word)!='+')){ //si encuentra algun caracter que no sea "0~9, +, -" devuelve un 0 inmediatamente
            return 0;
        }

        valor*=10;

        if((*word)!='-' && (*word)!='+'){
            valor+= *word-48; //convierto el valor en ascii del caracter a su equivalente numerico
        }

        word++;
        }

    valor *= negativo;

    return valor;
}
