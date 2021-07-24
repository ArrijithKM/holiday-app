#include"../inc/railway.h"

int railwayticket()

{
	system("cls"); 
	int menu_choice,choice_return;
	start:
	system("cls");
	printf("    TRAIN RESERVATION SYSTEM");
	printf("\n1.Reserve A Ticket");
	printf("\n2.View All Available Trains");
	printf("\n3.Cancel Reservation");
	printf("\n4.Exit");
	printf("\n\nEnter Your Choice: ");
	scanf("%d",&menu_choice);
	switch(menu_choice)
	{
		case 1:
			reservation();	
			break;
		case 2:
			viewdetails();
			printf("\n\nPress Enter");
			getchar();
			break;
		case 3:
			cancel();
			break;
		case 4:
			return 0;
		default:
			printf("\nInvalid choice");
	}
	goto start;
}


void viewdetails(void)
{
system("cls");
	printf("\nTr.No\tExpress name\t\t\tRoute\t\tPricing\t\tTime\n");
	printf("_________________________________________________________________________________________");
	printf("\n1001\tKaveri Express\t\tChennai to Mysore\t\tRs.5000\t\t9am");
	printf("\n1002\tKaveri Express\t\tMysore To Chennai\t\tRs.5000\t\t12pm");
	printf("\n1003\tCC Central Express\tCoimbatore To Chennai\t\tRs.4500\t\t8am");
	printf("\n1004\tCC Central Express\tChennai To Coimbatore\t\tRs.4500\t\t11am");
	printf("\n1005\tIsland  Express\t\tBangalore To Kanyakumari\tRs.4000\t\t7am");
	printf("\n1006\tIsland Express\t\tKanyakumari To Bangalore\tRs.4000\t\t9.30am");
    printf("\n1007\tSabari Express\t\tHyderabad To Tp\t\t\tRs.3500\t\t1pm");	
    printf("\n1008\tSabari Express\t\tTp To Hyderabad\t\t\tRs.3500\t\t4pm");
    printf("\n1009\tMeteor Express\t\tCoimbatore To Bangalore\t\tRs.6000\t\t3.35pm");
    printf("\n1010\tMeteor Express\t\tBangalore To Coimbatore\t\tRs.6000\t\t4.15pm");
}

void reservation(void)
{
	char confirm;
	int i=0;
	float charges;
    customer ctm;
	FILE *fp;
	fp=fopen("customer.txt","a");
	system("cls");
	
	printf("\nEnter Your Name: ");
	fflush(stdin);
	scanf("%s",ctm.name);
	printf("\nEnter Number of seats: ");
	scanf("%d",&ctm.num_of_seats);
	printf("\n\nPress Enter To View Available Trains ");
	getchar();
	system("cls");
	viewdetails();
	printf("\n\nEnter train number:> ");
	scanf("%d",&ctm.train_num);
	if(ctm.train_num>=1001 && ctm.train_num<=1010)
	{
		charges=charge(ctm.train_num,ctm.num_of_seats);
		printticket(ctm.name,ctm.num_of_seats,ctm.train_num,charges);		
	}
	else
	{
		printf("\nInvalid train Number! Enter again ");
		reservation();
	}
	
	printf("\n\nConfirm Ticket (y/n):");
	start:
	scanf(" %c",&confirm);
	if(confirm == 'y')
	{
		fprintf(fp,"%s\t\t%d\t\t%d\t\t%.2f\n",ctm.name,ctm.num_of_seats,ctm.train_num,charges);
		printf("\n Reservation Done\n");
		printf("\nPress any key to go back to Main menu");
		getchar();
		railwayticket();
	}
	else
	{
		if(confirm=='n'){
			printf("\nReservation Not Done!\nPress any key to go back to  Main menu!");
		}
		else
		{
			printf("\nInvalid choice entered! Enter again ");
			getchar();
			goto start;
		}
	}
	fclose(fp);
	getchar();
}

float charge(int train_num,int num_of_seats)
{
		if (train_num==1001)
	{
		return(5000.0*num_of_seats);
	}
	if (train_num==1002)
	{
		return(5000.0*num_of_seats);
	}
	if (train_num==1003)
	{
		return(4500.0*num_of_seats);
	}
	if (train_num==1004)
	{
		return(4500.0*num_of_seats);
	}
	if (train_num==1005)
	{
		return(4000.0*num_of_seats);
	}
	if (train_num==1006)
	{
		return(4000.0*num_of_seats);
	}
	if (train_num==1007)
	{
		return(3500.0*num_of_seats);
	}
	if (train_num==1008)
	{
		return(3500.0*num_of_seats);
	}
	if (train_num==1009)
	{
		return(6000.0*num_of_seats);
	}
	if (train_num==1010)
	{
		return(6000.0*num_of_seats);
	}
}

void printticket(char name[],int num_of_seats,int train_num,float charges)
{
	system("cls");
	printf("\tTICKET\n");
	printf("Name:\t\t\t%s",name);
	printf("\nNumber Of Seats:\t%d",num_of_seats);
	printf("\nTrain Number:\t\t%d",train_num);
	specifictrain(train_num);
	printf("\nCharges:\t\t%.2f",charges);
}

void specifictrain(int train_num)
{
	
	if (train_num==1001)
	{
		printf("\nTrain:\t\t\tKaveriExpress");
		printf("\nDestination:\t\tChennai to Mysore");
		printf("\nDeparture:\t\t9am ");
	}
	if (train_num==1002)
	{
		printf("\nTrain:\t\t\tKaveri Express");
		printf("\nDestination:\t\tMysore to Chennai");
		printf("\nDeparture:\t\t12pm");
	}
	if (train_num==1003)
	{
		printf("\nTrain:\t\t\tCC Central Express");
		printf("\nDestination:\t\tCoimbatore to Chennai");
		printf("\nDeparture:\t\t8am");
	}
	if (train_num==1004)
	{
		printf("\nTrain:\t\t\tCC Central Express");
		printf("\nDestination:\t\tChennai to Coimbatore");
		printf("\nDeparture:\t\t11am ");
	}
	if (train_num==1005)
	{
		printf("\nTrain:\t\t\tIsland Express");
		printf("\nDestination:\t\tBangalore to Kanyakumari");
		printf("\nDeparture:\t\t7am");
	}
	if (train_num==1006)
	{
		printf("\ntrain:\t\t\tIsland Express");
		printf("\nDestination:\t\tKanyakumari to Bangalore");
		printf("\nDeparture:\t\t9.30am ");
	}
	if (train_num==1007)
	{
		printf("\ntrain:\t\t\tSabari Express");
		printf("\nDestination:\t\tHyderabad to Tp");
		printf("\nDeparture:\t\t1pm ");
	}
	if (train_num==1008)
	{
		printf("\ntrain:\t\t\tSabari Express");
		printf("\n Destination:\t\tTp to Hyderabad");
		printf("\nDeparture:\t\t4pm ");
	}
	if (train_num==1009)
	{
		printf("\ntrain:\t\t\tMeteor Express");
		printf("\nDestination:\t\tCoimbatore to Bangalore");
		printf("\nDeparture:\t\t3.35pm ");
	}
	if (train_num==1010)
	{
		printf("\ntrain:\t\t\tMeteor Express");
		printf("\nDestination:\t\tBangalore to Coimbatore");
		printf("\nDeparture:\t\t1.15 ");
	}
}

void logintrain()
{
	
	int j=0,i=0;
    char username[10],password[10],c=' '; 
    char pword[10],code[10];
    char user[10]="Raks";
    char pass[10]="123";
	do
	{
		printf(" \nENTER USERNAME:");
		scanf("%s", username);
		printf(" \nENTER PASSWORD:");
		scanf("%s",password);
		i=0;
		if(strcmp(username,"Raks")==0 && strcmp(password,"123")==0)
		{
		printf("  \n\nLOGIN SUCCESSFUL\n");
		
		printf("\n\n\n\t\t\t\tPress any key to continue...");
		getchar();
		break;
		}
		else
		{
			printf("\n LOGIN UNSUCESSFUL\n");
			j++;
            printf("\n\n\n\t\t\t\tPress any key to Login again...");
			getchar();
		}
	}while(j<=2);
	if (j>2)
	{
		printf("\nSorry wrong username and password ");
		printf("\n Enter any key to exit");
		getchar();
		exit(0);
	}
}

void cancel(void)  
{
	
	system("cls");
	int trainnum;
		printf("Enter the train number: \n");
		fflush(stdin);
		scanf("%i",&trainnum);
		printf("\n\nCancelled");  
		getchar();
}

int checktrainticket(int sno)
{
		if((sno<=10)&&(sno>=1))
		{
			return 1;}
		
		else
			return 0;
}