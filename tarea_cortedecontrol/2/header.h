#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED


typedef struct{
    char fecha[11];
    char hora[9] ;
    int nroCuenta;
    char codSuc[7];
    char operacion; //Extraccion o Deposito
    float monto;
}registro;

typedef struct{
    char fecha[11];
    char hora[9] ;
    int nroCuenta;
    char codSuc[7];
    float monto;
}registroGrosso;

typedef struct s_nodo{
    registro dato;
    struct s_nodo* siguiente;
}t_nodo;

typedef struct {
    t_nodo primero;
    t_nodo ultimo;
}t_cola;

#endif // HEADER_H_INCLUDED
