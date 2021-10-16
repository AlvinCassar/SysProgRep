#include <stdio.h>
#include <stdlib.h>

    // Ws1 Q5
    // 
    // 
    // 

int main(void) {

    int num;

    printf("Enter number between 1 and 100: ");
    scanf("%d", &num);
    
    if(1 > num || num > 100){
        printf("ERROR: Number is not between 1 and 100\n");
    }else
        printf("Number is inputted correctly\n");

    return 0;
}
