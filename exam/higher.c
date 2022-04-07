#include <stdio.h>
int higher(int arr[], int len){
    int high;
    for (int i =0; i < len -1; i++){
        if (arr[i]> arr [i+1]){
            high = arr[i];
        }
        else{
            high = arr[i+1];
        }
    }
    return high;
}

int main(){
    int arr[] = {0,0,0};
    int len = sizeof(arr)/sizeof(int);
    printf("TYPE THE NUMBERS a, b, c: \n");
    scanf("%i%i%i", &arr[0],&arr[1],&arr[2]);
    int max = higher(arr,len);
    printf("THE BIGGEST NUMBER IS: %d \n", max);
    return 0;
}