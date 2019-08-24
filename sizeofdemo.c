#include <stdio.h>


int main(){
    printf("Integer size: %zd\n", sizeof(int));
    printf("Char size: %zd\n", sizeof(char));
    printf("Long size: %zd\n", sizeof(long));
    printf("Long Long size: %zd\n", sizeof(long long));
    printf("Double size: %zd\n", sizeof(double));
    printf("Long Double size: %zd\n", sizeof(long double));
    return 0;
}
