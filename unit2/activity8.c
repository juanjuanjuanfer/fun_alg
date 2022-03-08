#include <stdio.h>
#include <stdlib.h>

// char* myArray = malloc(sizeof(int)*200);

int myArr[3] = {5, 2, 3};
int lenght = sizeof(myArr)/ sizeof(int);

void printArray(int* name, int lenght){
    int index = 0;
    while (index < lenght){
        printf("%d ", myArr[index]);
        index ++;

    }
}


int main(){
    printf("{");    
    printArray(myArr, lenght);
    printf("}\n");
}