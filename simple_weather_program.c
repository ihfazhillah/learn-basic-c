#include <stdio.h>

#define YEARS 5
#define MONTHS 12


void main(){
    float data[YEARS][MONTHS] = {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    int year, month;
    float subtotal, total = 0;

    printf("YEAR \t RAINFALL\n");
    for (year = 0; year < YEARS; year++){
        subtotal = 0;
        for (month = 0; month < MONTHS; month++){
            subtotal += data[year][month];
        }
        printf("%5d \t %.2f\n", 2011 + year, subtotal);
        total += subtotal;
    }

    printf("\n");
    printf("The yearly average is: %.2f\n", total / YEARS);

    printf("Monthly average:\n");
    printf("Jan Feb Mar Apr May Jun Jul Aug Sep Okt Nov Des\n");

    for (month = 0; month < MONTHS; month++){
        for (year = 0, subtotal = 0; year < YEARS; year++){
            subtotal += data[year][month];
        }

        printf("%4.2f ", subtotal/YEARS);
    }
    printf("\n");


}
