#include <stdio.h>
int main()
{
    int i;
    i = 1;
    while (i < 10) {
        printf("%d  ", i);
        i += 2;
    }
printf("\n");

    for (i = 1; i < 10;) {
        printf("%d  ", i);
        i += 2;
    }

printf("\n");
    
    do
    {
        printf("%d  ", i);
        i += 2;
    
    } while (i < 10);


return 0;
}