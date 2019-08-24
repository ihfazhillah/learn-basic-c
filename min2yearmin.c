#include <stdio.h>

int main(){
    int minutes;
    double min_in_year, years, days;

    min_in_year = 60 * 24 * 365;

    printf("Masukkan menit:\n");
    scanf("%d", &minutes);

    days = (double) minutes / (60 * 24);
    years = (double) minutes / min_in_year;

    printf("Days: %f\n", days);
    printf("Years: %f\n", years);


    return 1;
}
