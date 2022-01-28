#include <stdio.h>

int num1; //variables declaration 
int num2;

int main(){

    // Print messages //
    printf("entern number 1: \n\tnum1:  ");
    scanf("%d", &num1); //inputs jeyboard
    printf("entern number 2: \n\tnum2:  ");// output screen//
    scanf("%d", &num2);

    // process//
    int sum = num1 + num2;
    printf("suma = %d\n", sum);
    
    return 0;
}