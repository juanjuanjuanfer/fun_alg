#include <stdio.h>
#include <stdlib.h>

int count = 0;

int main(){
    while (count <= 100){
        printf("count: %d\n", count);
        count = count + 1;
    }
    for (int i = 1; i <= 58000; i = i + 1)
    {
        printf("count: %d\n", i);
    }
    
    
    return 0;
}