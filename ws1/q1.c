#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int i = 0;
    int arr[11];
    int large = 0;

    for(i = 0; i < 11; i++){

        printf("\nEnter Number %d:", i );

        scanf("%d", &arr[i]);

        if(large < arr[i])
            large = arr[i];
        
    }

    printf(" \nLargest Number from list: %d", large, "\n");
    return 0;
}