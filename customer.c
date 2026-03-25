#include <stdio.h>
#include <stdlib.h>
#include "customer.h"

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

		
		void create_customer()
{
   //storing customer details using scanf to take inputs
		
	
    char name[50];
    char phone[15];
    char city[20];

    printf("Enter your name: ");
    scanf("%s", name);    

    printf("Enter your mobile no.: ");
    scanf("%s", phone);   
    printf("Enter your city name: ");
    scanf("%s", city);   

}

void list_customer()
{
    printf("\n[List customer not implemented yet]");
}

void modify_customer()
{
    printf("\n[Modify customer not implemented yet]");
}

void export_customer()
{
    printf("\n[Export customer not implemented yet]");
}


    default:
        printf("\nInvalid choice");
    }
	
	}
	while(choice!=5); ////Loop
}
void create_customer()
{
    printf("\n[Create customer not implemented yet]");
	
}

void list_customer()
{
    printf("\n[List customer not implemented yet]");
}

void modify_customer()
{
    printf("\n[Modify customer not implemented yet]");
}

void export_customer()
{
    printf("\n[Export customer not implemented yet]");
}
 