#include <stdio.h>

int gcd(int a, int b);
int abs(int x);
float squareRoot(float x);

// helper for gcd
int max(int a, int b);
int min(int a, int b);


void main(){
    // gcds
    // 12 & 20 == 4
    printf("GCD from 12 and 20: %d\n", gcd(12, 20));
    // 15 & 25 == 5
    printf("GCD from 15 and 25: %d\n", gcd(15, 25));
    // 147 & 189 = 21
    printf("GCD from 147 and 189: %d\n", gcd(147, 189));

    // abs
    // -9 == 9
    printf("ABS from -9 is %d\n", abs(-9));
    // 9 == 9
    printf("ABS from 9 is %d\n", abs(-9));

    //squareRoot
    // 9 == 3
    printf("sqrt 9: %.1f\n", squareRoot(9));
    // 16 == 4
    printf("sqrt 16: %.1f\n", squareRoot(16));
    // 29 ??
    printf("sqrt 29: %.1f\n", squareRoot(29));
    // 10
    printf("sqrt 10: %.1f\n", squareRoot(10));

}

int gcd(int a, int b){
    int a_temp = a, b_temp = b, maximum, minimum;

    while (a_temp != b_temp){
        maximum = max(a_temp, b_temp);
        minimum = min(a_temp, b_temp);
        a_temp = maximum - minimum;
        b_temp = minimum;
    }

    return b_temp;
}

int max(int a, int b){
    return a > b? a: b;
}

int min(int a, int b){
    return a < b? a: b;
}

int abs(int a){
    return a < 0 ? a * -1: a;
}

float squareRoot(float a){
    float epsilon = 0.0001;
    float guess = (float) a / 2;
    float temp;

    while ((guess * guess) - a >= epsilon ){
        // divide by the guess
        temp = a / guess;
        guess = temp + guess;
        guess = guess / 2;
    }

    return guess;
}
