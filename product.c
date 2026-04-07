#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "product.h"
struct product
{
 char name[100];
 char rate[100];
 char code[100];
 char tax[30];

};


void product_menu()
{
    int choice_pro;
do{
	//system("cls");
    printf("\n        Product MENU");
    printf("\n==============================");
    printf("\n1. Create product");
    printf("\n2. List product");
    printf("\n3. Remove product");
    printf("\n4. Print product");
    printf("\n5. Main Menu");
    printf("\nEnter your choice: ");
    scanf("%d", &choice_pro);

switch (choice_pro)
{
    case 1 :
        create_product();

    case 2 :
        list_product();

    case 3 :
        remove_product();
    case 4 :
        print_product();
    case 5 :
                return;
    default:
                printf("\nInvalid choice\n");
        }
}

		while(choice_pro!=5);


}
void create_product()
{
    struct product prod;
    int p;
//cleaning the buffer
    while((p = getchar()) != '\n' && p != EOF);

    printf("Enter the product name: \n");
    fgets(prod.name, sizeof(prod.name), stdin);
    prod.name[strcspn(prod.name, "\n")] = 0;

    printf("Enter the product rate: \n");
    fgets(prod.rate, sizeof(prod.rate), stdin);
    prod.rate[strcspn(prod.rate, "\n")] = 0;

    printf("Enter the product code: \n");
    fgets(prod.code, sizeof(prod.code), stdin);
    prod.code[strcspn(prod.code, "\n")] = 0;

    printf("Enter the product tax: \n");
    fgets(prod.tax, sizeof(prod.tax), stdin);
    prod.tax[strcspn(prod.tax, "\n")] = 0;
//displaying the info

   printf("name %s rate %s code %s tax %s \n",prod.code,prod.name,prod.rate,prod.tax );

// saving in file
    FILE *file = fopen("product.bin", "ab");
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }

    fwrite(&prod, sizeof(struct product), 1, file);
    fclose(file);
    printf("product info saved successfully!\n");

}
void list_product()
{
    printf("\n[Modify customer not implemented yet]");
}
void remove_product()
{
    printf("\n[Modify customer not implemented yet]");
}
void print_product()
{
    printf("\n[Modify customer not implemented yet]");
}



