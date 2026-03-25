#include <stdio.h>
#include <stdlib.h>



	void customer_menue()
		int choice;
		
		do
			printf("\n        CUSTOMER MENU");
			printf("customer details");
			printf("customer list");
			printf("customer modify");
			printf("customer export");
			printf("main menue")
			printf(" back to menue");
			
		switch(choice);
		
		{
		case 1:
			printf("customer details")
		break;
		
		case 2:
			printf("customer list")
		break;
			
		case 3:
			printf("customer modify")
		break;
			
		case 4:
			printf("customer export")
		break;
			
		case 5:
		
		return;
		
		default:
				printf("invalid choice");
		}
		while(choice!=5);
		
		void customer details()
		{
			// storing customer details
			//file declared
			File *fptr;
			char name[20];
			char city[20];
			char mobno[10];
			printf("enter name %s",name );
			scanf("%s",&name);
			printf("enter city name %s",city name );
			scanf("%s",&city name);
			printf("enter mobile no. %s",mobno );
			scanf("%s",&mobno);
			
			
			//file open if exist otherwise created
			fptr = fopen ("customerdetail.csv","a");
			
			//check if file opened 
			if (fptr==null)
			{
				printf("error in file opening" );
				
			return ;
			}			
			fprintf(fptr,"name:%d, cityname:%d, mobno:%d",name,cityname,mobno);
			
			
			}
		
		
			void customer list()
		{
			fread(
			
		}
			
		}
			
			



