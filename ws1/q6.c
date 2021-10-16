#include <stdio.h>

    // Ws1 Q6
    // ask user for second amount
    // divide amount by 3600 for hrs
    // remove hrs, and divide by 60 for mins
    // remove hrs and mins in sec from total sec and you get seconds left.

int main(void) {

    int Isec, hr, min, sec;

    printf("Enter amount of seconds: ");
    scanf("%d", &Isec);

    hr = Isec/(60 * 60);
    min = (Isec - hr * (60*60) )/ 60;
    sec = Isec - hr*(60*60) - min*60;

    printf("%d seconds = %d hours : %d minutes : %d seconds", Isec, hr, min, sec);

    return 0;
}