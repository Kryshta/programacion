#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    loteprueba();
    FILE* pf;
    pf = fopen("loteprueba.dat","rb");
    if(pf==NULL){
        exit(1);
    }
    crearArchivotxtFija(&pf);
    crearArchivotxtVariable(&pf);
    fclose(pf);
    return 0;
}
