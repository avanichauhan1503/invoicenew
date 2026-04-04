#include <stdio.h>
#include <stdlib.h>
#include "customer.h"
#include "product.h"
int main()
{
    int choice;

    do
    {
        // system("cls");

        printf("\n==============================");
        printf("\n        BILLING SYSTEM");
        printf("\n==============================");
        printf("\n1. Customer");
        printf("\n2. Invoice");
        printf("\n3. Reports");
        printf("\n4. product");
        printf("\n5. Exit");
        printf("\n------------------------------");
        printf("\nEnter your choice: ");

        if (scanf("%d", &choice) != 1)   // input safety
        {
            printf("\nInvalid input! Please enter a number.\n");
            while (getchar() != '\n');  // clear buffer
            continue;
        }

        switch (choice)
        {
        case 1:
            customer_menu();
            break;

        case 2:
            // invoice();
            printf("\n[Invoice module not implemented yet]\n");
            break;

        case 3:
            // reports();
            printf("\n[Reports module not implemented yet]\n");
            break;

        case 4:
            product_menu();

            break;

        case 5:
            printf("\nExiting program...\n");
            exit(0);

        default:
            printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}
