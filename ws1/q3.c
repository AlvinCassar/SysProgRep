#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i = 1;
    int arr[11];
    int larg = 0;
    
    for(i; i < 11; i++){
        printf("\nPlease enter number %d : ", i);
        scanf("%d", &arr[i]);

        if(larg < arr[i]){
            larg = arr[i];
        }
    }

    printf("\nLargest Num: %d", larg);
    return 0;
}


/*     int i = 1;
    int arr[11];
    int larg = 0;
    
    for(i; i < 11; i++){
        printf("\nPlease enter number %d : ", i);
        scanf("%d", &arr[i]);

        if(larg < arr[i]){
            larg = arr[i];
        }
    }

    printf("\nLargest Num: %d", larg);
    return 0; */