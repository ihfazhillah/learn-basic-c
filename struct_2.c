/*
 * =====================================================================================
 *
 *       Filename:  struct_2.c
 *
 *    Description:  latihan struct lagi, versi 2
 *
 *        Version:  1.0
 *        Created:  01/09/19 07:34:55
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


struct Item {
    char * itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct Item *pItem){
    printf("Program to manage your item\n");
    printf("ItemName: ");
    fgets(pItem->itemName, 225, stdin);
    printf("\nQuantity: ");
    scanf("%d", &pItem->quantity);
    printf("\nPrice: ");
    scanf("%f", &pItem->price);

    pItem->amount = pItem->quantity * pItem->price;
}

void printItem(struct Item *pItem){
    printf("Here is your data:\n");
    printf("\n Item Name: %s", pItem->itemName);
    printf("\n Quantity: %d", pItem->quantity);
    printf("\n Price: %f", pItem->price);
    printf("\n Total: %f\n", pItem->amount);
}


void main(){
    char * pItemName = (char *)malloc(225 * sizeof(char));
    struct Item item = {.itemName = pItemName};
    readItem(&item);
    printItem(&item);
    free(pItemName);
}
