#include <stdio.h>
#include <stdlib.h>
#include "header.h"


int main()
{
    //cargarEstudiantes();
    //cargarEmpleados();

    FILE* employees;
    FILE* students;

    employees = fopen("empleados.dat", "rb");
    students = fopen("estudiantes.dat", "rb");

    comparar(employees, students);

    fclose(employees);
    fclose(students);

    return 0;
}


