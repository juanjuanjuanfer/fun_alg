#include <stdio.h>
#include <stdlib.h>


int main(){
    int num ;
    printf("Is odd or even?\n");
     scanf("%d", &num);
    if( num % 2 == 0){
        printf("The number is even");
    }
    else{
        printf("odd");
    }
    return 0;
}
