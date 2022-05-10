#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[5]= {};
    char str2[5]= {'1','2','3','4','5'};
    int i;

    memcpy(str1, str2, 5*sizeof(int));

    for (i=0;i<5;i++){
        printf("%c", str1[i]);
    }
    printf("Hello world!\n");
    return 0;
}
