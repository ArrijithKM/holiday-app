
#include "bus.h"
#include"holiday.h"

int bustickets()
{
  
system("cls || clear");
		
	printf("\e[1;1H\e[2J");
	//login();

	int choice,choice_return;
	start:
	printf("\e[1;1H\e[2J");
	printf("    BUS RESERVATION SYSTEM");
	printf("\n=================================");
	printf("\n1>> Book A Ticket");
	printf("\n------------------------");
	printf("\n2>> Display Booked Tickets");
	printf("\n------------------------");
	printf("\n3>> Cancel Booked Tickets");
	printf("\n------------------------");
	printf("\n4>> Exit");
	printf("\n------------------------");
	//printf("\n5>> Check");
	//printf("\n------------------------");
	printf("\n\nEnter Your Choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			bookbusticket();
			break;
		case 2:
			displaybusticket();
			break;
		case 3:
			cancelbusticket();
			break;
		case 4:
		    return(0);
		default:
			printf("\nInvalid choice");
	}
	goto start;
}
void login()
{
	int b=0,i=0;
	FILE *in=fopen("input.txt","r");
    char username[10],password[10],c=' '; 
    char pword[10],code[10];
    char user[10]="Preethiy";
    char pass[10]="123";
	do
	{
		printf("\n  =======================  LOGIN FORM  =======================\n  ");
		printf(" \n                       ENTER USERNAME:-");
		scanf("%s", username);
		printf(" \n                       ENTER PASSWORD:-");
		scanf("%s",password);
		i=0;
		if(strcmp(username,"Preethiy")==0 && strcmp(password,"123")==0)
		{
		printf("  \n\n\n       WELCOME TO OUR SYSTEM !! YOUR LOGIN IS SUCCESSFUL\n");
		
		printf("\n\n\n\t\t\t\tPress any key to continue...");
		getchar();
		getchar();
		printf("\e[1;1H\e[2J");
		break;
		}
		else
		{
			printf("\nSORRY !!!!  LOGIN IS UNSUCESSFUL\n");
			b++;
            printf("\n\n\n\t\t\t\tPress any key to Login again...");
			getchar();
			getchar();
			printf("\e[1;1H\e[2J");
		}
	}while(b<=2);
	if (b>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");
		printf("\n Enter any key to exit");
		getchar();
		exit(0);
	}
	}
void bookbusticket(void)
{	char confirm;
	int i=0;
	float charges;
	pd port;
	FILE *fp;
	fp=fopen("bus_ticket.txt","a");
	printf("\e[1;1H\e[2J");
	printf("\nEnter Your Name:> ");
	fflush(stdin);
	scanf("%s",port.name);
	printf("\nEnter Number of seats:> ");
	scanf("%d",&port.num_of_seats);
	printf("\n\n>>Press Enter To View Available Trains<< ");
	getchar();
	getchar();
	printf("\e[1;1H\e[2J");
	viewdetailsbus();
	printf("\n Enter bus serial number");
	start1:
	scanf("%d",&port.sno);
	if(port.sno>=1 && port.sno<=10)
	{
		charges=chargebusticket(port.sno,port.num_of_seats);	
	}
	else
	{
		printf("\nInvalid train Number! Enter again--> ");
		goto start1;
	}
    printf("\n\nConfirm Ticket (y/n):>");
	start:
	scanf(" %c",&confirm);
	if(confirm == 'y')
	{
		fprintf(fp,"%s\t\t%d\t\t%d\t\t%.2f\n",port.name,port.num_of_seats,port.sno,charges);
		printf("\n Reservation Done\n");
		printf("\nPress any key to go back to Main menu");
		getchar();
	}
	else
	{
		if(confirm=='n'){
			printf("\nReservation Not Done!\nPress any key to go back to  Main menu!");
			getchar();
		}
		else
		{
			printf("\nInvalid choice entered! Enter again-----> ");
			goto start;
		}
	}
	fclose(fp);
	getchar();
}
void viewdetailsbus(void)
{
	printf("\n\tSno\tDestinations\t\tCharges\t\n");
	printf("-----------------------------------------------------------------------------");
	printf("\n\t1\tCoimbatore to Chennai\tRs.300\t");
	printf("\n\t2\tCoimbatore to Bangalore\tRs.500\t");
	printf("\n\t3\tCoimbatore to Madurai\tRs.800\t");
	printf("\n\t4\tCoimbatore to Mumbai\tRs.350\t");
	printf("\n\t5\tCoimbatore to Trichy\tRs.650\t");
	printf("\n\t1\tCoimbatore to Salem\tRs.700\t");
	printf("\n\t2\tCoimbatore to Cuddalore\tRs.1000\t");
	printf("\n\t3\tCoimbatore to Dindigul\tRs.600\t");
	printf("\n\t4\tCoimbatore to Kanchi\tRs.250\t");
	printf("\n\t5\tCoimbatore to Cochi\tRs.750\t");	
   }
float chargebusticket(int sno,int num_of_seats)
{
	if (sno==1)
	{
		return(300.0*num_of_seats);
	}
	if (sno==2)
	{
		return(500.0*num_of_seats);
	}
	if (sno==3)
	{
		return(800.0*num_of_seats);
	}
	if (sno==4)
	{
		return(350.0*num_of_seats);
	}
    if (sno==5)
	{
		return(650.0*num_of_seats);
	}
	if (sno==6)
	{
		return(700.0*num_of_seats);
	}
	if (sno==7)
	{
		return(1000.0*num_of_seats);
	}
	if (sno==8)
	{
		return(600.0*num_of_seats);
	}
	if (sno==9)
	{
		return(250.0*num_of_seats);
	}
    if (sno==10)
	{
		return(750.0*num_of_seats);
	}
}

void cancelbusticket(void){
    FILE *srcFile;
    FILE *tempFile;
    int line;
    char name[100];
    srcFile  = fopen("bus_ticket.txt", "r");
    tempFile = fopen("delete-line.txt", "w");
    if (srcFile == NULL || tempFile == NULL)
    {
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }
    printf("\nList of the Booked Tickets.\n\n");
    printFilebusticket(srcFile);
    printf("\nEnter Name of the Ticket Holder for Cancellation: ");
    scanf("%s", name);
    rewind(srcFile);
    num=deleteLinebusticket(srcFile, tempFile, name);
    fclose(srcFile);
    fclose(tempFile);
    remove("bus_ticket.txt");
    rename("delete-line.txt", "bus_ticket.txt");
    if(num==0){
        printf("No record found for this Name\n");
        printf("\nPress Enter to go back to  Main menu!");
        getchar();
		getchar();
    }else{
        printf("\nTicket is Cancelled Successfully\n");}
        
}

void printFilebusticket(FILE *fptr)
{
    char ch;
    while((ch = fgetc(fptr)) != EOF)
        putchar(ch);
}
int deleteLinebusticket(FILE *srcFile, FILE *tempFile, char name[])
{
    char buffer[BUFFER_SIZE];
    int count = 1,c=0;
    while ((fgets(buffer, BUFFER_SIZE, srcFile)) != NULL)
    {
        char *pch =strstr(buffer,name);
        if (pch==NULL){
             fputs(buffer, tempFile); 
        }else{
            c++;
        }    
        count++;
    }
    return c;
}
void displaybusticket(void){
    FILE *fp;
    fp = fopen("bus_ticket.txt", "r");
    if(fp == NULL)
    {
        printf("No Record Found.....\n");
        printf("\nPress Enter to go back to  Main menu!");
        getchar();
    }
    printf("\nList of the Booked Tickets.\n\n");
    char ch;
    while((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    printf("\nPress Enter to go back to  Main menu!");
    getchar();
    getchar();
}

int checkbusticket(int sno)
{
		if((sno<=10)&&(sno>=1))
		{
			return 1;}
		
		else
			return 0;
}
