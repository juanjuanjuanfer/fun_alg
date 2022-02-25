#include <stdlib.h>
#include <stdio.h>


int main(int argc, char* argv[]){
    
    for (int i = 1; i <= 12; i++){
        if (i == 1){
            printf("|January|\n");
            for (int d = 1; d <= 31; d++){
                printf("|%d", d);
            }
            printf("\n");        
        }
        if (i == 2){
            printf("|February|\n");
            for (int d = 1; d <= 28; d++){
                printf("|%d", d);
            }
            printf("\n");
        }
        if (i == 3){
            printf("|March|\n");
            for (int d = 1; d <= 31; d++){
                printf("|%d", d);
            }
            printf("\n");
        }
        if (i == 4){
            printf("|April|\n");
            for (int d = 1; d <= 30; d++){
                printf("|%d", d);
            }
            printf("\n");
        }
        if (i == 5){
            printf("|May|\n");
            for (int d = 1; d <= 31; d++){
                printf("|%d", d);
            }
            printf("\n");
        }
        if (i == 6){
            printf("|June|\n");
            for (int d = 1; d <= 30; d++){
                printf("|%d", d);
            }
            printf("\n");
        }
        if (i == 7){
            printf("|July|\n");
            for (int d = 1; d <= 31; d++){
                printf("|%d", d);
            }
            printf("\n");
        }
        if (i == 8){
            printf("|August|\n");
            for (int d = 1; d <= 31; d++){
                printf("|%d", d);
            }
            printf("\n");
        }
        if (i == 9){
            printf("|September|\n");
            for (int d = 1; d <= 30; d++){
                printf("|%d", d);
            }
            printf("\n");
        }
        if (i == 10){
            printf("|October|\n");
            for (int d = 1; d <= 31; d++){
                printf("|%d", d);
            }
            printf("\n");
        }
        if (i == 11){
            printf("|November|\n");
            for (int d = 1; d <= 30; d++){
                printf("|%d", d);
            }
            printf("\n");
        }
        if (i == 12){
            printf("|December|\n");
            for (int d = 1; d <= 31; d++){
                printf("|%d", d);
            }
            printf("\n");
        }
    }

    return 0;
}