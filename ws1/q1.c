#include <stdio.h>
#include <stdlib.h>

    //Q1 ask for 2 numbers
    // add numbers in add()
    // give avg by /2
    // give sum of squared by sqaure than use add()

float add(int n1, int n2){
    float ans = n1 + n2;
    return ans;
}

int main(void) {
    
    int num1, num2, mult1, mult2;
    float sum, avg, multSum;

    printf("Please enter 1st number:");
    scanf("%d", &num1);
    printf("Please enter 2nd number:");
    scanf("%d", &num2);

    sum = add(num1, num2);
    printf("Sum: %.2f \n", sum);
    
    avg = sum/2;
    printf("Average: %.2f \n", avg);

    mult1 = num1 * num1;
    mult2 = num2 * num2;
    multSum = add(mult1, mult2);

    printf("Sum of %d + %d total: %.2f \n", mult1, mult2, multSum);

    return 0;
}
