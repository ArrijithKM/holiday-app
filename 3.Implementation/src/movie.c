#include"movie.h"

int moviecall()
{

    int ch;
 	do{
	printf("\n/*/*/*/*/*/**/*/*/*/*/**/**/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/");
	printf("\n");
	printf("\t Movie Ticket booking ");
	printf("\n");
	printf("\n/*/*/*/*/*/**/*/*/*/*/**/**/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/");

   	printf("\nPress <1> View All Movie");
	//printf("\nPress <2> Find Movie ");
	printf("\nPress <2> Book Ticket");
	//printf("\nPress <4> View All Transactions");
   	printf("\nPress <0> Exit ");

   	printf("\nEnter your Choice ::");
   	scanf("%d",&ch);

   	switch (ch)
   	{
    		case 1 :
    		viewAll();
   		break;
		case 2:
    		book_ticket();
   		break;

        case 0:
    		return 0;
        break;

        default:
    		printf("Please enter correct choice !");
        break;
   	}
 }while(ch!=0);




}


void insert_details()
{

	FILE *fp;
	struct book b;
	printf("Enter movie code :- ");
	scanf("%s",b.code);
	printf("Enter  name :- ");
	scanf("%s",b.name);
	printf("Enter Relice Date:- ");
	scanf("%s",b.date);
	printf("Enter Ticket Price:- ");
	scanf("%d",&b.cost);

	fp=fopen("data.txt","a");

	if(fp == NULL)
	{
		printf("File not Found");
	}
	else
	{
		fprintf(fp,"%s %s %s %d \n",b.code,b.name,b.date,b.cost);
		printf("Record insert Successful");
	}
		printf("\n");
	fclose(fp);
}
void find() //find details
{
	struct book b;
	FILE *fp;

	char ch[20];
	printf("Enter movie code :");
	scanf("%s",ch);
	system("CLS");
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %s %s %d",b.code,b.name,b.date,&b.cost);
			if(strcmp(b.code,ch) == 0)
			{
				//printf("%s / %s / %s / %d\n",b.code,b.name,b.date,b.cost);
				printf("\n Record Found\n");
				printf("\n\t\tCode ::%s",b.code);
				printf("\n\t\t movie name ::%s",b.name);
				printf("\n\t\t movie date ::%s",b.date);
				printf("\n\t\t price of ticket ::%d",b.cost);
				break;
			}
		}

	}

	fclose(fp);
}
void viewAll()
{
	char ch;
	FILE *fp;

	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		//system("CLS");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}
	fclose(fp);
}
//for ticket booking
void book_ticket()
{
 struct book b;
	FILE *fp;

	FILE *ufp;

	int total_seat,mobile,total_amount;
	char name[20];


	char ch; //used in display all movies
	char movie_code[20]; //for searching

	// disply all moives by default for movie code
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		system("cls");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}
	fclose(fp);

	//display ends
	printf("\n For Book ticket Choice Movie(Enter Movie Code Of Movie Eg. 111,222,..)\n");
	printf("\n Enter movie code :");
	scanf("%s",movie_code);
	//system("clear");
	fp = fopen("data.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		while(getc(fp) != EOF)
		{
			fscanf(fp,"%s %s %s %d",b.code,b.name,b.date,&b.cost);
			if(strcmp(b.code,movie_code) == 0)
			{
				//printf("%s / %s / %s / %d\n",b.code,b.name,b.date,b.cost);
				printf("\n Record Found\n");
				printf("\n\t\tCode ::%s",b.code);
				printf("\n\t\tMovie name ::%s",b.name);
				printf("\n\t\t date name ::%s",b.date);
				printf("\n\t\tPrice of ticket::%d",b.cost);
			}
		}

	}
	printf("\n* Fill Details  *");
	printf("\n your name :");
	scanf("%s",name);
	printf("\n mobile number :");
	scanf("%d",&mobile);
	printf("\n Total number of tickets :");
	scanf("%d",&total_seat);


	total_amount = b.cost * total_seat;

	printf("\n ***** ENJOY MOVIE ****\n");
	printf("\n\t\t name : %s",name);
	printf("\n\t\t mobile Number : %d",mobile);
	printf("\n\t\t movie name : %s",b.name);
	printf("\n\t\t Total seats : %d",total_seat);
	printf("\n\t\t cost per ticket : %d",b.cost);
	printf("\n\t\t Total Amount : %d",total_amount);


	ufp=fopen("oldTransaction.txt","a");
	if(ufp == NULL)
	{
		printf("File not Found");
	}
	else
	{
		fprintf(ufp,"%s %d %d %d %s %d \n",name,mobile,total_seat,total_amount,b.name,b.cost);
		printf("\n Record insert Successful to the old record file");
	}
		printf("\n");
	fclose(ufp);
	fclose(fp);

}
//for view all user transactions
void old_record()
{
	char ch;
	FILE *fp;

	//system("clear");

	fp = fopen("oldTransaction.txt","r");
	if(fp == NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{
		system("CLS");
		while( ( ch = fgetc(fp) ) != EOF )
      		printf("%c",ch);

	}
	fclose(fp);
}

int testmovieCustomer(int input)
{
	if(1<=input && input<=4)
		return 1;
	else
		return 0;
}
	
