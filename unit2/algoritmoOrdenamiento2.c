#include <stdio.h>
#include <stdlib.h>


int main(){

    //array and variables
    int j = 0;
    int i = 0;
    int x = 0;
    int y = 0;
    int arrSize = 0;
    int arr[10] = {}; 
    int len = sizeof(arr)/ sizeof(int);
    printf("TYPE THE NUMBERS(MUST BE 10):\n");
    for (i = 0; i < 10 ; i++){
        scanf("%d", &arr[i]);
    }
    len = sizeof(arr)/sizeof(int);

    //print original array
    printf("ORIGINAL ARRAY: \n");
    printf("{");
    for (int x = 0; x < len; x ++){
        printf("%d", arr[x]);
        if (x < len-1){
            printf(", ");
        }
    }
    printf("}\n");

    //sorting
    for ( i = 0;i < len; i++){
        for (j = 0 ;j < len -1; j ++){
            if(arr[j] > arr[j+1]){
                int temporal = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temporal;
            }
        }
    }

    //print sorted array
    printf("BUBBLE-SORTED ARRAY: \n");
    printf("{");
    for (int y = 0; y < len; y ++){
        printf("%d", arr[y]);
        if (y < len-1){
            printf(", ");
        }
    }
    printf("}\n");

    return 0;
}