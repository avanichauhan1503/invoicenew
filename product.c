#include <stdio.h>
#include <stdlib.h>


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
   printf("producttt");
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



