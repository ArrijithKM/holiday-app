#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../inc/hotel.h"

int list(int temp)
{
    int hotelOpt;       //Selecting a best Hotel from the below list
    if (!temp)
    {
        printf("--------------------------------------\n");
        printf("          ");
        printf("\n**  Hotel Booking System 1.0 ** \n");
        printf("\n");
        printf("             ");
        printf("\nPress  1---->Green Valley Hotel ");
        printf("             ");
        printf("\nPress  2---->Crown Plaza Hotel ");
        printf("             ");
        printf("\nPress  3---->Emerald Bay Inn Hotel ");
        printf("             ");
        printf("\nPress  4---->Sapphires Hotel ");
        printf("             ");
        printf("\nPress  5---->The Glory Hotel ");
        printf("             ");
        printf("\nPress  6---->Exit ");
        printf("             ");
        printf("\n\nSelect your option please===> ");
        scanf("%d", &hotelOpt);
        if(hotelOpt == 6)
            return 0;
        else
            selectedOptions(hotelOpt, temp);
    }
    
}

int selectedOptions(int hotelOpt, int temp)        //Selecting the process to proceed and entering thier details
{
    char name[20];
    char name2[20];
    char dtin[10], dtout[10];
    int noofPersons, noofDays;
    int flag = 0;
    char choice = 'q';
    char typeofRoom[10];
    if (hotelOpt != 6)
    {
        printf("\nPlease fill your details accordingly by selecting for the option below you want to proceed\n");
        printf("             ");
        printf("\nPress  b---->Booking ");
        printf("             ");
        printf("\nPress  v---->Viewing ");
        printf("             ");
        printf("\nPress  s---->Searching ");
        printf("             ");
        printf("\nPress  q---->Quit ");
        printf("             ");
        printf("\nSelect the process you want to go for===> ");
        scanf("%c", &choice);
        while (choice != 'q' && choice != ' ')
        {
            switch (choice)
            {
            case 'b': //inserting the customer details(booking)
                system("CLS");
                printf("\nPlease select Type of Room from the below options\n\n");
                printf("1.Deluxe:\n");
                printf("2.Regular:\n");
                printf("\nPlease enter your choice here:");
                scanf("%s", typeofRoom);
                menu(typeofRoom, temp);
                printf("\nEntering the following Details\n");
                printf("Name: ");
                scanf("%19s", name);
                printf("Enter the check-in date: ");
                scanf("%s", dtin);
                printf("Enter the check out date: ");
                scanf("%s", dtout);
                printf("Number of persons Checking-in: ");
                scanf("%d", &noofPersons);
                printf("Number of Days of stay: ");
                scanf("%d", &noofDays);
                printf("\n");
                temp = booking(name, dtin, dtout, noofPersons, noofDays, typeofRoom, hotelOpt);
                printf("\nThank you for providing your details\n");
                list(temp);
                break;
            case 'v':
                temp = view(hotelOpt);
                list(temp);
                break;
            case 's':
                system("CLS");
                printf("\nSearch for your details\n");
                printf("\n");
                printf("You can search only by giving your Name\n");
                printf("\n");
                printf("Please enter the Name you want to search : ");
                scanf("%s", name2);
                temp = search(name2);
                break;
            case 'q':
                printf("\nThank you for using our Hotel Management System\n");
                return 0;;
                break;
            }
            scanf("%c", &choice);
        }
    }
    else
    {
        printf("\nThank you for using our Hotel Management System\n");
        exit(0);
    }
}

int booking(char *name, char *dtin, char *dtout, int noofPersons, int noofDays, char *typeofRoom, int hotelOpt)
{
    customerdt *ctm;
    FILE *fp1;
    ctm = (customerdt *)calloc(1, sizeof(customerdt));
    fp1 = fopen("customerdetails.txt", "a");
    strcpy(ctm->name, name);
    strcpy(ctm->dtin, dtin);
    strcpy(ctm->dtout, dtout);
    ctm->noofPersons = noofPersons;
    ctm->noofDays = noofDays;
    strcpy(ctm->typeofRoom, typeofRoom);
    ctm->hotelOpt = hotelOpt;
    fwrite(ctm, sizeof(customerdt), 1, fp1);
    printf("Your details are recorded succesfully\n");
    printf("Exiting\n");
    fclose(fp1);
    return 0;
}

int view(int hotelOpt)      //Viewing the Details by giving the Hotel selected
{
    //system("clear");
    int i, j;
    customerdt ctm;
    FILE *fp2;
    fp2 = fopen("customerdetails.txt", "r");
    printf("\n         **Customer Details**\n");
    printf("\n");
    printf("Name           CheckinDate      CheckoutDate   Persons    Days        HotelSelected      TypeofRoom\n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    while (fread(&ctm, sizeof(customerdt), 1, fp2))
    {
        if (hotelOpt == ctm.hotelOpt)
        {
            printf("%s", ctm.name);
            j = 15 - strlen(ctm.name);
            for (; j > 0; j--)
            {
                printf(" ");
            }
            printf("\t  %s", ctm.dtin);
            printf("\t  %s", ctm.dtout);
            printf("%10d", ctm.noofPersons);
            printf("%10d", ctm.noofDays);
            printf("%13d", ctm.hotelOpt);
            printf("\t\t  %s", ctm.typeofRoom);
            printf("\n");
        }
    }
    printf("\n\n");
    fclose(fp2);
    return 0;
}
int search(char *name2)     //Searching for the details by giving name
{
    printf("name->%s",name2);
    int i, j;
    customerdt ctm;
    int flag = 0;
    FILE *fp3;
    fp3 = fopen("customerdetails.txt", "r");
    while (fread(&ctm, sizeof(customerdt), 1, fp3))
    {
        if (!strcmp(ctm.name,name2))
        {
            printf("\n\n        **List The Table**");
            printf("\n\n\n");
            printf("Name           CheckinDate      CheckoutDate   Persons    Days        HotelSelected      TypeofRoom\n");
            printf("---------------------------------------------------------------------------------------------------------\n");
            flag = 1;
            printf("%s", ctm.name);
            j = 15 - strlen(ctm.name);
            for (; j > 0; j--)
            {
                printf(" ");
            }
            printf("\t  %s", ctm.dtin);
            printf("\t  %s", ctm.dtout);
            printf("%10d", ctm.noofPersons);
            printf("%10d", ctm.noofDays);
            printf("%13d", ctm.hotelOpt);
            printf("\t\t  %s", ctm.typeofRoom);
            printf("\n\n");
        }
    }
    if (flag == 0)
    {
        return -1;
    }
    fclose(fp3);
    return 0;
}
void menu(char *typeofRoom, int temp)       //Provisions provided in different types of rooms
{
    if (!strcmp(typeofRoom, "deluxe"))
    {
        printf("\nAs you have decided to go with Deluxe room these are the Advantages\n");
        printf("\n1.AC Room\n");
        printf("2.Number of rooms-2\n");
        printf("3.Television Availability\n");
        printf("4.Complimentary Breakfast\n");
    }
    else if (!strcmp(typeofRoom, "regular"))
    {
        printf("\nAs you have decided to go with Regular room these are that include in room\n");
        printf("1.Non AC Room\n");
        printf("2.Number of rooms-1\n");
        printf("3.Television Availability\n");
    }
    else
    {
        printf("\nYou have selected the unvalid type of room\n\n");
        exit(0);
    }
}

int hotelbooking()  //Main function
{
    int temp;
    customerdt ctm1;
    FILE *fp;
    temp = list(0);
    if (temp == 0)
        return 0;
}