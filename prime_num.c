#include <stdio.h>


void main(){
    int prime_nums[100] = {2, 3};

    int prime_nums_index = 1;
    int i, k, num;

    // find prime numbers
    for (num = 5; num < 100; num++){
        // skip if the num is even
        if (num % 2 == 0) continue;


        for (i = 0; i <= prime_nums_index; i++){
            // kalau bisa di bagi, berarti bukan
            if (num % prime_nums[i] == 0) break;

            // kalau di last, tapi masih belum bisa di bagi
            // yes, berarti dia adalah prime number
            if (i == prime_nums_index){
                prime_nums_index++;
                prime_nums[prime_nums_index] = num;
            }
        }


    }

    // printing result
    printf("The prime numbers are: ");

    for (k = 0; k < prime_nums_index; k++){
        printf("%d ", prime_nums[k]);
    }

    printf("\n");
}
