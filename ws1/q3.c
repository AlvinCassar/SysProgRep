#include <stdio.h>
#include <stdlib.h>

    // Ws1 Q3
    // Ask for 10 numbers and add to array
    // in the same loop check for the biggest numbers 1 by one
    // print largest number.

int main(void) {

    int arr[11];
    int larg = 0;
    
    for(int i = 1; i < 11; i++){
        printf("\nPlease enter number %d : ", i);
        scanf("%d", &arr[i]);

        if(larg < arr[i]){
            larg = arr[i];
        }
    }

    printf("\nLargest num: %d \n", larg);
    return 0;
}
