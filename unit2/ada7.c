#include <stdio.h>
#include <stdlib.h>

//variables
int *count = 0;
int i, j = 0;
int e = 2;
void primeOrNot(int num, int* count);

int main(int argc, char* argv[]){
    //i = atoi(argv[1]);
    printf("Type your number:\n");
    scanf("%d", &i);
    if (i == 0 || 1){
        printf("The number %i is not prime\n", i);
    }
    if  (i == 2){
        printf("The number 2 is prime\n");
    }
    else{
        primeOrNot(i, &count);
    }
    
    
}

void primeOrNot(int num, int*count){
    for (j = 3; j<= num; j ++){
        if ( num % j == 0){
        *count ++;
        }
    }
    if (*count == e){
        printf("The number %i is prime\n", num);
    }
    else {
        printf("The number %d is not prime\n", num);
    }
    return;
}