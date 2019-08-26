#include <stdio.h>
#include <stdbool.h>


int strlen_custom(char * string);
void strcat_custom(char * str1, char * str2);
bool strcmp_custom(char * str1, char * str2);


void main(){
    char hello[] = "hello string";
    printf("Lenght of 'hello string' is: %d\n", strlen_custom(hello));

    char str1[] = "aku ";
    char str2[] = "ihfazh\n";
    strcat_custom(str1, str2);

    printf("is equals?\n");
    printf("'aku ihfazh' dengan 'ihfazh':%d\n", strcmp_custom("aku ihfazh", "ihfazh"));
    printf("'aku ihfazh' dengan 'maryam':%d\n", strcmp_custom("aku ihfazh", "maryam"));
}

int strlen_custom(char * string){
    int count;

    for (count = 0; string[count] != '\0'; count++);

    return count;
}

void strcat_custom(char * str1, char * str2){
    int size_str1 = strlen_custom(str1);
    int size_str2 = strlen_custom(str2);
    int pos = 0;

    char result[size_str1 + size_str2 + 1];

    for (int i = 0; str1[i] != '\0'; i++){
        result[pos] = str1[i];
        pos++;
    }

    for (int i = 0; str2[i] != '\0'; i++){
        result[pos] = str2[i];
        pos++;
    }

    result[pos] = '\0';

    printf("%s\n", result);
}

bool strcmp_custom(char * str1, char * str2){
    int i = 0;
    while (str1[i] != '\0'){
        if (str1[i] == str2[0]){
            return true;
        }
        i++;
    }

    return false;

}
