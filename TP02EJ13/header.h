#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

typedef struct{
    int dni;
    char apellido[25];
    char nombre[25];
    double sueldo;
}t_empleado;

typedef struct{
    int dni;
    char apellido[25];
    char nombre[25];
    float promedio;
}t_estudiante;

typedef struct{
    int dni;
    char apellido[25];
    char nombre[25];
}t_persona;

void cargarEstudiantes();
void cargarEmpleados();
void comparar(FILE* employees, FILE* students);
void fUnion(t_empleado auxEmpleado, t_estudiante auxEstudiante, int comparacion, FILE** employees, FILE** students);



#endif // HEADER_H_INCLUDED
