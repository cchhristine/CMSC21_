#include <stdio.h>
int main ()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 13 && age<=19){
        printf("True");
    }
    else{
        printf("False");
    }

return 0;


}
