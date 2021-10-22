#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int tot, i;
    float avg;

    tot = 0;
    
    for (i = 0; i < argc-1; i++){ 
        tot += atoi(argv[i+1]);
    }
    
    avg = tot/i;

    printf("Total nums: %d\n", i);
    printf("Total sum: %d\n", tot);
    printf("Avg num: %.2f\n", avg);

    return 0;
}
