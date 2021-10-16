#include <stdio.h>
#include <stdlib.h>

    // Ws1 Q4
    // for loop was set up as infinite 
    // a was being incremeted by 10000 not 100 to not take a long time
    // max numvers for int is 214780000 and than turns to -214780000

int main(void) {

    int a = 0;
    for (int i = -1; i < a; i++)
    {
        a = a+10000;
        printf("num: %d \n", a);
    }
    
    return 0;
}
