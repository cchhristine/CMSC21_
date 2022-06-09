#include <stdio.h>

int main(void) {

    int sqr = 1;

printf("\n");
printf( "TABLE OF POWERS OF TWO \n");
printf(" n     2 to the n\n");
printf("---    --------\n");


    for (int i = 0; i <= 10; i++) {  
        
        printf(" %d        %d\n", i, sqr);
        sqr = sqr * 2;
    }

    return 0;
}