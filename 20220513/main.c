#include <stdio.h>
#include <stdlib.h>

int desapilar(tPila* p, void* destino, unsigned tam);

int main()
{

    return 0;
}

int desapilar(tPila* p, void* destino, unsigned tam){

    unsigned tamInfoP;

    if(p->tope == TAM_PILA)
    {
        return 0;
    }

    tamInfoP=*(unsigned*)(p->pila+p->tope);

    memcpy(destino, p->pila+p->tope+sizeof(unsigned),(tamInfoP<tam)?tamInfoP:tam);

    p->tope+=(tamInfoP+sizeof(unsigned));

    return 1;

}

int verTopeEst(t_pila* pila,void*d,unsigned d){
///1)si no hay datos en pila SALIR SIN pila
///2) tamInfoP <- tamaño del dato de la pila
///3) copiar en
///dato parametro <- pila de tope + tam unsig
///copir la menor cant de by entre param y
///tamInfoP
///salir TODO BIEN
 if(p->tope==TAM_PILA)
    {
        return 0;
    }
    tamInfoP=*(unsigned*)(p->pila+p->tope);
    tamInfoP= (tamInfoP<tam)?tamInfoP:tam;
    memcpy(dato,p->pila+p->tope+sizeof(unsigned),tamInfoP);
}


//DINAMICA

int ponerEnPila(tPila *p, const void *d, unsigned cantBytes){
    t_nodo* nuev;
    nuev=malloc(sizeof(t_nodo));
    if(!nuev){
        return 0;
    }
    nuev->dato=malloc(cantBytes);
    if(!nuev->dato){
        free(nuev);
        return 0;
         }
    memcpy(nuev->dato,d,cantBytes);
    nuev->tam=cantBytes;
    nuev->siguiente=*p;
    *p=nuev;
    return 1;
}
