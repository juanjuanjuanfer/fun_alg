#include <stdio.h>
#include <stdlib.h>


int main(){
    printf("Is odd or even?\n");
    int num = scanf("Type a number:\n");
    int reminder = num % 2;
    int sum = reminder + num;
    printf(int(sum));
    if( reminder == 0){
        printf("The number is even");
    }
    else{
        printf("odd");
    }
    return 0;
}
