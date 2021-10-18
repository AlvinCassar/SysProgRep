#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int tot, i;
    float avg, nums;

    tot = 0;
    printf("\n\n\nEnter -1 to stop \n");
    for (i = 0; i < 1000; i++)
    {
        printf("Please enter number:");
        scanf("%f", &nums);

        if (nums == -1){
            printf("--Exiting--\n");
            break;
        }
        tot = tot + nums;
    }

    avg = tot/i;

    printf("Total nums: %d\n", i);
    printf("Total sum: %d\n", tot);
    printf("Avg num: %.2f\n", avg);

    return 0;
}
