#ifndef FFUNCIONES_H_INCLUDED
#define FFUNCIONES_H_INCLUDED

typedef struct{
    int dia;
    int mes;
    int anio;
}tfecha;
typedef struct{
    int dni;
    char AyN[50];
    char sexo;
    tfecha fingr;
    float promedio;
}tAlumno;
void loteprueba();
void crearArchivotxtFija(FILE**);
void crearArchivotxtVariable(FILE** );
#endif // FFUNCIONES_H_INCLUDED
#ifndef FFUNCIONES_H_INCLUDED
#define FFUNCIONES_H_INCLUDED
typedef struct{
    int dia;
    int mes;
    int anio;
}tfecha;
typedef struct{
    int dni;
    char AyN[50];
    char sexo;
    tfecha fingr;
    float promedio;
}tAlumno;
void loteprueba();
void crearArchivotxtFija(FILE**);
void crearArchivotxtVariable(FILE** );

#endif // FFUNCIONES_H_INCLUDED
