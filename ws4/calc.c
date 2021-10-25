#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>


int main(int argc, char *argv[]) {

    int num1, num2, answer;
    char symbol;

    if(*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '/' && *argv[2] != 'x'){
        printf("\n Invalid operator\n");
        return -1;
    }

    // if(digits_only(*argv[1]) || digits_only(*argv[1])){
    //     printf("\nInvalid number\n");
    //     return -2;
    // }

    num1 = atoi(argv[1]);
    symbol = *argv[2];
    num2 = atoi(argv[3]);

    if(symbol == '+'){    
        answer = num1 + num2;       
    }
#ifdef FULL
    else if(symbol == '-'){
        answer = num1 - num2;
    }else if(symbol == '/'){
        answer = num1 / num2;
    }else if(symbol == 'x'){
        answer = num1 * num2;
    }
#endif
    else{
        printf("This version only allows addition \n");
        return -3;
    }

    printf("\n%d %c %d = %d\n", num1, symbol , num2, answer);
    return 0;
}