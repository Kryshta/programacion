#include <stdio.h>
#include <stdlib.h>
#include "claseTres.h"
#define TAM 5

int main()
{
    int input=0, posicion, elemento, dondelometo;
    int vec[TAM]={1,2,3,4,5};

    while(input!=4){

        mostrarvec (vec, 5);

        printf("\n Menu: \n 1: Insertar elemento \n 2: Insertar elemento sin alterar orden ascendente \n 3: Eliminar elemento \n 4:Salir del programa \n");
        printf("\n Elija una opcion: ");
        scanf("%d", &input);

        if(input==1){

            printf("\nElija posicion de insercion del 1 al %d: ", TAM);
            scanf("%d", &posicion);

            printf("\nIngrese elemento a ingresar en la posicion %d: ", posicion);
            scanf("%d", &elemento);

            system("cls");

            insertarPos2(vec, TAM, posicion, elemento, 5); //vector, tamano, posicion, elemento, cantidad de elementos
        }

        if(input==2){
            printf("\nIngrese elemento a ingresar: ");
            scanf("%d", &elemento);

            dondelometo = buscarPosicion(vec, TAM);
            insertarPos2(vec, TAM, dondelometo, elemento, 5);

        }

        if(input==3){
            printf("\nIngrese posicion a eliminar: ");
            scanf("%d", &posicion);

            eliminarElemento(vec, posicion, TAM);

        }

    }

    return 0;
}




