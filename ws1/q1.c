#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a;
    int b;
    char buf[1024];

    do{
        printf("Enter first digit: ");
        if(!fgets(buf, 1024, stdin))
            return 1;

        a = atoi(buf);
    }while(a == 0);

    printf("You entered %d. \n" ,a);

    do{
        printf("Enter first digit: ");
        if(!fgets(buf, 1024, stdin))
            return 1;

        b = atoi(buf);
    }while(b == 0);

    printf("You entered %d. \n" ,b);

    int sum = a+b;
    printf("Sum of a and b = ", sum);

}