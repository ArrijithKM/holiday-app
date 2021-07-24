#include"../inc/foodorder.h"

int quantity;
double total=0;
int t;


void foodFeature()
{
	mainmenu();
}



void mainmenu(void)
{
	system("cls");
	printf("                                 **************************************************************************\n");
	printf("                                                     WELCOME TO FOOD ORDER SYSTEM\n");
	printf("                                 **************************************************************************\n\n\n");

    customers();

}

void customers(void)
{

	system("cls");
	printf("                    ************************************************\n                                      WELCOME\n                    ************************************************\n\n");
	printf("               YOU ARE--->\n\n               1. Vegetarian\n\n               2. Non Vegetarian\n\n                      OR\n\n               3. Back To Main Menu\n\n   Enter Your Choice  -->");
	int k;
	scanf("%d",&k);
		int wait;
	//printf("In progress :");
	for(wait=0;wait<=50000;wait++)
	{
		printf("\rIn progress : %d",wait/500);
	}
	if(k==1)
	{
		system("cls");
		vegetarian();
	}
	else if(k==2)
	{
		system("cls");
		nonvegetarian();
	}
	else if(k==3)
	{
		printf("Exiting...\nPress Enter to exit");
        char exitprog;
        fflush(stdin);
        scanf("%c",&exitprog);
	}
	else
	{
		printf("Wrong Input !Please Re-enter The Correct Option......\n\n");
		customers();
	}
}
void vegetarian(void)
{
	int choice;
	int again;
	int quantity;

	//double price=0;

	printf("                    ****************************************\n                                  VEGETARIAN MENU\n                    ****************************************\n\n");
	//printf("      1. Burger               40/-\n      2. Noodles              60/-\n      3. Sandwich             45/-\n      4. Beverages            35/-\n      5. Veg. Thaali          150/-\n         -->Dal\n         -->Paneer\n         -->Chapati\n         -->Rice\n         -->Papad\n      6. Back To Main Menu\n\n Enter Your Choice-->  ");
	char v;
	FILE *vmenu;

    vmenu=fopen("vegmenu.txt","rt");
	while((v=getc(vmenu))!=EOF)
        {
        	printf("%c",v);
		}
         fclose(vmenu);
    printf("\n\nEnter What You Want :");
	printf("\n\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 40*(quantity);
		printf("\n");
		printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);
		printf("\n");
		if(again==1)
		{
			printf("\n\n");
			vegetarian();
		}
		else if(again==2)
		{
			printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
			int totl = total;
			FILE *ttl;
			ttl = fopen("order.txt","a");
			fprintf(ttl,"\nGrand Total : %d\n",totl);
			fclose(ttl);

			details();
		}
	}
	else if(choice==2)
	{
		printf("Quantity :");
		scanf("%d",&quantity);
		total=total + 60*(quantity);
		printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);
		if(again==1)
		{
			printf("\n\n");
			vegetarian();
		}
		else if(again==2)
		{
			printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
			int totl = total;
			FILE *ttl;
			ttl = fopen("order.txt","a");
			fprintf(ttl,"\nGrand Total : %d\n",totl);
			fclose(ttl);

			details();
		}
	}
	else if(choice==3)
	{
		printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 45*(quantity);
		printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);
		if(again==1)
		{
			printf("\n\n");
			vegetarian();
		}
		else if(again==2)
		{
			printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
			int totl = total;
			FILE *ttl;
			ttl = fopen("order.txt","a");
			fprintf(ttl,"\nGrand Total : %d\n",totl);
			fclose(ttl);

			details();
		}
	}
	else if(choice==4)
	{
		printf("Quantity :");
		scanf("%d",&quantity);
		total=total + 35*(quantity);
		printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);
		if(again==1)
		{
			printf("\n\n");
			vegetarian();
		}
		else if(again==2)
		{
			printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
			int totl = total;
			FILE *ttl;
			ttl = fopen("order.txt","a");
			fprintf(ttl,"\nGrand Total : %d\n",totl);
			fclose(ttl);

			details();
		}
	}
	else if(choice==5)
	{
		printf("Quantity :");
		scanf("%d",&quantity);
		total=total + 150*(quantity);
		printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);
		if(again==1)
		{
			printf("\n\n");
			vegetarian();
		}
		else if(again==2)
		{
			printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
			int totl = total;
			FILE *ttl;
			ttl = fopen("order.txt","a");
			fprintf(ttl,"\nGrand Total : %d\n",totl);
			fclose(ttl);

			details();
		}

	}
	else if(choice==6)
	{
		system("cls");
		customers();
	}
	else
	{
		printf("Wrong Input! Re-enter THe Correct Option\n\n");
		if(getch())
		vegetarian();
	}
}
void nonvegetarian(void)
{
	int choice;
	int again;
	int quantity;
	//double price=0;
	printf("                                    **********************************************\n");
	printf("                                                  Non Veg. Menu\n");
	printf("                                    **********************************************\n");
     //	printf("1. Dry Chicken            100-\n\n2. Gravy Chicken          120-\n\n3. Chicken Biryani        85-\n\n4. Beverages              35-\n\n5. Back To Main Menu\n\n\nEnter Your Choice");
	char n;
	FILE *nmenu;
	nmenu = fopen("nonveg.txt","rt");
	while((n=getc(nmenu))!=EOF)
	{
		printf("%c",n);
	}
	printf("\n\nEnter What You Want :");
	printf("\n\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Quantity : ");
		scanf(" %d",&quantity);
		total=total + 100*(quantity);
		printf("\n");
		printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf(" %d",&again);
		if(again==1)
		{
			printf("\n\n");
			nonvegetarian();
		}
		else if(again==2)
		{
			printf("Your Total Amount Is :%.2lf\n\n",total);
			int totl = total;
			FILE *ttl;
			ttl = fopen("order.txt","a");
			fprintf(ttl,"\nGrand Total : %d\n",totl);
			fclose(ttl);
			details();
		}
	}
	else if(choice==2)
	{
		printf("Quantity :");
		scanf(" %d",&quantity);
		total=total + 120*(quantity);
		printf("\n");
		printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf(" %d",&again);
		if(again==1)
		{
			printf("\n\n");
			nonvegetarian();
		}
		else if(again==2)
		{
			printf("Your Total Amount Is :%.2lf\n\n",total);
			int totl = total;
			FILE *ttl;
			ttl = fopen("order.txt","a");
			fprintf(ttl,"\nGrand Total : %d\n",totl);
			fclose(ttl);
			details();
		}
	}
	else if(choice==3)
	{
		printf("Quantity :");
		scanf(" %d",&quantity);
		total=total + 85*(quantity);
		printf("\n");
		printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf(" %d",&again);
		if(again==1)
		{
			printf("\n\n");
			nonvegetarian();
		}
		else if(again==2)
		{
			printf("Your Total Amount Is :%.2lf\n\n",total);
			int totl = total;
			FILE *ttl;
			ttl = fopen("order.txt","a");
			fprintf(ttl,"\nGrand Total : %d\n",totl);
			fclose(ttl);
			details();
		}
	}
	else if(choice==4)
	{
		printf("Quantity :");
		scanf(" %d",&quantity);
		total=total + 35*(quantity);
		printf("\n");
		printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf(" %d",&again);
		if(again==1)
		{
			printf("\n\n");
			nonvegetarian();
		}
		else if(again==2)
		{
			printf("Your Total Amount Is :%.2lf\n\n",total);
			int totl = total;
			FILE *ttl;
			ttl = fopen("order.txt","a");
			fprintf(ttl,"\nGrand Total : %d\n",totl);
			fclose(ttl);
			details();
		}
	}
	else if(choice==5)
	{
		system("cls");
		customers();
	}
	else
	{
		printf("Wrong Input! Re-enter THe Correct Option\n\n");
		nonvegetarian();
	}
}
void details(void)
{
	char name1[20];
	char name2[20];
	long int phone;
	char address[40];
	char landmark[30];
	printf("Please Give Your Contact Details \n");
	printf(" First Name : ");
	scanf("%s",name1);
	printf("Last Name : ");
	scanf("%s",name2);
	printf("Phone : ");
	scanf("%ld",&phone);
	printf("Address : ");
	scanf("%s",address);
	printf("Landmark : ");
	scanf("%s",landmark);
	printf("\n\n");
	printf("Your Entered Details Are --->\n");
	FILE *cust;
	cust = fopen("Foodorder.txt","a");
	fprintf(cust,"Order Placed By : %s %s\nPhone number : %ld\n",name1,name2,phone);
	fclose(cust);
	printf("    -->First Name :  %s\n    -->Last Name   :  %s\n    -->Phone     :%ld \n    -->Address  :%s \n    -->Landmark  :%s \n",name1,name2,phone,address,landmark);
	printf("\n\n\n");
	printf("                       *********************************************************************************************\n");
	printf("                                             Your Order Will Be At Your Door In 30 minutes.\n");
	printf("                                                       .....HAPPY ORDERING.....\n");
	printf("                       *********************************************************************************************\n");

	printf("Press Any To The MainMenu.");
	if(getch())
	customers();
}

char testfoodCustomerFunction(int input)
{
	if(input == 1)
	{
		//vegetarian();
		return 'v';
	}
	else if(input == 2)
	{
		//nonvegetarian();
		return 'n';
	}
	else if(input == 3)
	{
		return 'e';
	}
	else{
		return 'x';
	}
}
int testVegfunction(int input)
{
	if(1<=input && input<=5)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int testNonvegfuntion(int input)
{
	if(1<=input && input<=5)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


