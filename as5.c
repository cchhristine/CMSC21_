#include <stdio.h>

int main(void){

    int i, days_in_month, day_of_week ;

    printf("Enter number of days in month: ");
    scanf("%d", &days_in_month);

    if (days_in_month <= 31 && days_in_month >= 28){ //range of the days in month

        printf("Enter the starting day of the week (1 = Sun and 7 = Sat) = ");
        scanf("%d", &day_of_week);

        if(day_of_week <= 7 && day_of_week >= 1){ //the range of the days of the week

            printf("Here's your calendar \n");


            for(i = 1; i < day_of_week; i++){ //print necessary space
                printf("\t");
            }
            for(i = 1; i <= days_in_month; i++){ //increment i and print it
                printf("%d\t", i);
                if((day_of_week + i-1)%7 == 0){ //when remainder is 0 it moves to another row
                    printf("\n");
                }
            }
        }
        else{
            printf ("invalid number. Only numbers 1 to 7 is accepted \n");
        }
            
    }
    else{
        printf("Invalid number of days entered. Please try again.");
    }
    
}