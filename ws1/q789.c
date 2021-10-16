#include <stdio.h>
#include <stdlib.h>
#include<time.h>

    // Ws1 Q7 8 9
    // a and b is set by random and not asked for
    // largest is found by a ternary operator
    // srand is used to use current time and will make rand() generate different numbers everytime.

int main(void) {

    int a, b, larg;

    srand(time(0));

    a = rand() % 100 + 1;
    b = rand() % 100 + 1;

    printf("Num1: %d \nNum2: %d \n", a, b);

    larg = a>b?a:b;     

    printf("Largest num from the 2 is: %d \n", larg);
    return 0;
}