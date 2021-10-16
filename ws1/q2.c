#include <stdio.h>
#include <stdlib.h>

    //Q2 create a struct and fill with data
    // name and surname the same and print
    // age as int and use & for pointer
    // gender as it is char dont put "%c" but " %c"
    
int main(void){

    struct human
    {
        char name[20];
        char surname [20];
        int age;
        char gender;
    }human;
    
    printf("Enter name of human: ");
    scanf("%s", human.name);
    printf("Enter surnamename of human: ");
    scanf("%s", human.surname);
    printf("Enter age of human: ");
    scanf("%d", &human.age);
    printf("Enter M/F for human: ");
    scanf(" %c", &human.gender);

    printf("\n\n\n");
    printf("Name: %s \nSurname: %s \nAge: %d \nGender: %c \n", human.name, human.surname, human.age, human.gender);

    return 0;
}