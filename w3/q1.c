#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num1, num2, sml;

    printf("Please enter first number:");
    scanf("%d", &num1);
    printf("Please enter seconds number:");
    scanf("%d", &num2);

    sml = num1<num2?num1:num2;

    printf("\nSmallest Num is: %d" , sml);
    return 0;
}
