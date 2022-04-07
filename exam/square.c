#include <stdio.h>

int main(){
    int a,b;
    printf("TYPE NUMBER a AND b: ");
    scanf("%i%i",&a,&b);
    if (a <= 0 || b <= 0 ){
        printf("THE INPUTS ARE NOT VALID\n");
    }
    else{
        int area = a*b;
        if (a == b){
            printf("THE FIGURE IS A SQUARE\n");
        }
        else {
            printf("THE AREA IS: %d\n", area);
        }
    }

    return 0;
}