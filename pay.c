#include <stdio.h>

void main(){
    int hours = 0, sisa = 0;
    double rate = 12.00;
    double overtime_rate = 12.00 + (12.00/2.00);
    double amount = 0;

    printf("Your hour work: ");
    scanf("%d", &hours);

    if (hours > 40){
        sisa = hours - 40;
        amount = 40 * rate;
        amount = amount + (sisa * overtime_rate);
    } else {
        amount = hours * rate;
    }

    printf("Tanpa pajak, saya sendiri juga ga suka sama pajak\n");
    printf("Total kamu dapat: %f\n", amount);
}
