#include <stdio.h>
#include "sum.h"

//DAtaType integer, float, string, characters//
int edad = 19;
float pi = 3.1416;
char* name = "Juan Antonio";
char sexo = 'M';
int temp;

int main(){
    int after10years = suma(edad,10);
    printf("mi edad despues de 10 anos: %d", after10years);
    return 0;
}