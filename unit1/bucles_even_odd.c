#include <stdio.h>
#include "/mnt/c/Users/JUANANTONIOFERNANDEZ/upy/fun_alg/libraries/utils.h"



int main()
{
    int i = 1, j = 10; //j = 10
    for (;;i++, j++) //j++
    {
        printf("i: %d j: %d\n", i,j); //j: %d ,j
        sleep(1000);
    }
    
    return 0;
}