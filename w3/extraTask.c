#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if(argc < 3){
        printf("Not all arguments given");
        return -2;
    }

    if(argv[1] == NULL || argv[2] == NULL){

        printf("No argument for weight given");

        return -1;
    }

    float weight, height, bmi;

    weight = atof(argv[1]);
    height = atof(argv[2]);

    bmi = weight / (height * height);

    if(bmi < 18.5){
        printf("Under Weight: %.2f \n", bmi);
    }else if(bmi < 24.9){
        printf("Normal: %.2f \n", bmi);
    }else if(bmi < 29.9){
        printf("Over Weight: %.2f \n", bmi);
    }else if(bmi > 30){
        printf("Obese: %.2f \n", bmi);
    }


    return 0;
}