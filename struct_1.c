/*
 * =====================================================================================
 *
 *       Filename:  struct_1.c
 *
 *    Description:  kuis untuk structure, declare and initialzie
 *
 *        Version:  1.0
 *        Created:  01/09/19 07:12:32
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Ihfazhillah (), mihfazhillah@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

void main(){
    struct Employee {
        char name[225];
        int hireDate;
        float salary;
    };

    struct Employee employee1 = {"Muhammad", 2, 10.0};
    struct Employee employee2;

    printf("Enter the second employee data:\n");
    printf("Name: ");
    fgets(employee2.name, 225, stdin);
    printf("hireDate: ");
    scanf("%d", &employee2.hireDate);
    printf("salary: ");
    scanf("%f", &employee2.salary);


    printf("Data of first employee: \n");
    printf("Name: %s", employee1.name);
    printf("Hire Date: %d", employee1.hireDate);
    printf("salary per hour: %f", employee1.salary);
    printf("Data of second employee: \n");
    printf("Name: %s", employee2.name);
    printf("Hire Date: %d", employee2.hireDate);
    printf("salary per hour: %f", employee2.salary);
}
