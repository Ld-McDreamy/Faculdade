#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vi;
    int var[3][2] = {{1,1},{1,2},{1,3}};
    int *pvar = &var[0][0];

    for (vi= 0;vi <6;vi++){
        printf("Elemento: %d\n", *(pvar+vi));

    }
    return 0;
}
