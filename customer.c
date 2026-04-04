#include <stdio.h>
#include <stdlib.h>
#include "customer.h"
#include "product.h"

void customer_menu()
{
    int choice;
do{
	//system("cls");
    printf("\n        CUSTOMER MENU");
    printf("\n==============================");
    printf("\n1. Create Customer");
    printf("\n2. List Customer");
    printf("\n3. Modify Customer");
    printf("\n4. Export Customer");
    printf("\n5. Main Menu");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        create_customer();

        break;

    case 2:
        list_customer();
        break;

    case 3:
        modify_customer();
        break;

    case 4:
        export_customer();
        break;
	case 5:
                return;
    default:
                printf("\nInvalid choice\n");
        }
		}

		while(choice!=5);
}

#include <stdio.h>
#include <stdlib.h>


void create_customer()
{
  FILE *fp;

    char name[30];
    char city[30];
    char phone[15];

    fp = fopen("customers.bin", "a");

  if(fp == NULL)
    {
        printf("File could not be opened\n");
           return;
    }

    printf("Enter Customer Name: ");
      scanf("%s", name);

    printf("Enter City: ");
      scanf("%s", city);

    printf("Enter Phone Number: ");
     scanf("%s", phone);

    fprintf(fp, "%s %s %s\n", name, city, phone);

    fclose(fp);

    printf("Customer saved successfully!\n");
}

void list_customer()
{
    FILE *fp;

    char name[30];
    char city[30];
    char phone[15];

   fp = fopen("customers.bin", "r");

  if(fp == NULL)
    {
        printf("No customer records found.\n");
        return;
    }

    printf("\nName\tCity\tPhone");
    printf("\n---------------------------\n");

  while(fscanf(fp,"%s %s %s",name,city,phone)!=EOF)
    {
        printf("%s\t%s\t%s\n",name,city,phone);
    }

       fclose(fp);
}

void modify_customer()
{
    printf("\n[Modify customer not implemented yet]");
}

void export_customer()
{
    printf("\n[Export customer not implemented yet]");
}

