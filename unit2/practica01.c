#include <stdlib.h>
#include <stdio.h>

int a[] = { 50, 60, 60, 45, 70};
int lenght = sizeof(a)/ sizeof(int);
int weighta = 0; 
int weightb = 0;

int alternatingSums(){
    for (int i = 0; i < lenght ; i ++ ){
        if (i == 0 || i ==  2 ||i ==  4){
            weighta = weighta + a[i];
        }
        else if( i  == 1 || i == 3){
            weightb = weightb + a[i];
        }
    }
    printf("[");
    int b[] = {weighta, weightb};
    int lenghtb = sizeof(b) / sizeof(int);
    for (int x = 0; x < lenghtb ; x ++){
        printf("%i", b[x]);
        if (x == 0) printf(", ");
    }
    printf("]\n");
}

int main(){
    alternatingSums();
}