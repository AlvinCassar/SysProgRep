#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int num1, num2, sum;
    float avg;

    printf("Please enter 1st number:");
    scanf("%d", &num1);
    printf("Please enter 2nd number:");
    scanf("%d", &num2);

    sum = sum(num1, num2);
    avg = sum/2;

    printf("Sum: %d \n", sum);
    printf("Average: %.2f \n", avg);

    return 0;
}

float sum(int n1, int n2){

    float ans = n1 + n2;
    return ans;
}