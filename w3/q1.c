#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int num1, num2, sml;

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    sml = num1<num2?num1:num2;

    printf("\nSmallest Num is: %d \n" , sml);
    return 0;
}
