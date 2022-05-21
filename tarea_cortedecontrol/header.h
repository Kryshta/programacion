#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

typedef struct{
    char fecha[10];
    char hora[8] ;
    int nroCuenta;
    char codSuc[6];
    char operacion; //Extraccion o Deposito
    float monto;
}registro;

typedef struct s_nodo{
    registro dato;
    unsigned tam;
    struct s_nodo* siguiente;
}t_nodo;

typedef struct {
    t_nodo primero;
    t_nodo ultimo;
}t_cola;


#endif // HEADER_H_INCLUDED
