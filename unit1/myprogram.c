#include <stdio.h> //External library
#include "utils.h" //Internal library



int main(){
    int num;
    printf("Type a number:\n");
    scanf("%d", &num);
    int value = isGreaterThan10(num);
    printf("%d", num);
    printf(" ");
    printf("is greater than 10? %d\n", value);
    return 0;
}