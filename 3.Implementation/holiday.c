#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
#include "holiday.h"
 
state status=out;


int main()
{
    User *p=NULL;
    int ch1,ch2;
    p=List(p);
    while (1)
    {
 
        if(status==out)
        {
            printf("\n\n*********Welcome to Holiday App**********\n");
            printf("\n\tNew User - 1\n\tLogin User - 2\n\tExit application - 3\n\nEnter the option:");
            scanf("%d",&ch1);
            switch(ch1)
            {
                case 1:
                    p=NewUser(p);
                    break;
                case 2:
                    LoginUser(p);
                    break;
                case 3:
                    exitprog();
                    exit(0);
                    break;
                default:
                    printf("Please enter Correctly Sorry You are exited:(\n");
                    exit(0);
                    break;
            }
        }
        else if(status==in)
        {
            system("CLS");
            printf("\n");
            printf("\n\n*************Holiday App************");
            printf("\n\tBook Bus Ticket - 1\n\tOrder Food - 2"
                   "\n\tBook a Movie Ticket - 3\n\tBook a Train Ticket - 4\n\tBook a Hotel Room - 5\n\tBack To Login Page - 6\n\nEnter Your Option: ");
            scanf("%d",&ch2);
            switch(ch2)
            {
                case 1:
                    bustickets();
                    system("PAUSE");
                    system("CLS");
                    break;
                case 2:
                    foodFeature();
                    system("PAUSE");
                    system("CLS");
                    break;
                case 3:
                    moviecall();
                    system("PAUSE");
                    system("CLS");
                    break;
                case 4:
                    railwayticket();
                    system("PAUSE");
                    system("CLS");
                    break;
                case 5:
                    hotelbooking();
                    system("PAUSE");
                    system("CLS");
                    break;
                case 6:
                    LogoutUser();
                    break;
                default:
                    printf("Please Enter Correctly Sorry You are Exited:(\n");
                    exit(0);
                    break;
            }
        }
    }
    return 0;
}
User* List(User *p)
{
    User* t,*ptr,temp;
    FILE *fp;
 
    fp=fopen("holidaydata.txt","r");
 
    if(fp==NULL)
        return NULL;
 
    if(fgetc(fp)==EOF)
        return NULL;
 
    rewind(fp);
while(fscanf(fp,"%s %s",temp.name,temp.pwd)!=EOF)
{
ptr=(User*)malloc(sizeof(User));
strcpy(ptr->name,temp.name);
strcpy(ptr->pwd,temp.pwd);
 
ptr->next=NULL;

 
if(p==NULL)
            p=t=ptr;
else
{
p->next=ptr;
p=ptr;
}
}
fclose(fp);
    return t;
}
/**
 * @brief Function to login the User
 *
 * @param p
 */
void LoginUser(User* p)
{
    char name[100];
    char pwd[100];
    fflush(stdin);
    printf("\n\n");
    printf("Username: ");
    scanf("%s",name);
    fflush(stdin);
    printf("\npwd: ");
    scanf(" %[^\n]s",pwd);
    while(p!=NULL)
    {
        if((!strcmp(p->name,name)) && (!strcmp(p->pwd,pwd)))
        {
            status=in;
            strcpy(currentUser,name);
 
            printf("\nYou are in :)\n");
            system("PAUSE");
            return;
        }
        else if((!strcmp(p->name,name)) && (strcmp(p->pwd,pwd)))
        {
            printf("Please Check your pwd :(\n");
            return;
        }
        p=p->next;
    }
    printf("You are a new User so you should create a new account!! \n");
}
 
void writefile(User *p)
{
    FILE *fp;//,*fp1,*fp2;
    fp=fopen("holidaydata.txt","w");
    while(p!=NULL)
    {
        fprintf(fp,"%s %s\n",p->name,p->pwd);
        
        p=p->next;
    }
    fclose(fp);
    
}

/**
 * @brief Adding a new User detail
 *
 * @param p
 * @return User*
 */
User* NewUser(User* p)
{
    User *t;
    t=p;
    User *nw;
    nw=(User*)malloc(sizeof(User));
    fflush(stdin);
    printf("\n\n");
    printf("Enter name:");
    scanf("%s",nw->name);
    while(p!=NULL)
    {
        if(!strcmp(p->name,nw->name))
        {
            printf("That email already exists\n");
            return t;
        }
        p=p->next;
    }
    p=t;
    fflush(stdin);
    printf("\nEnter pwd: ");
    scanf("%[^\n]s",&nw->pwd);
    nw->next=NULL;
    strcpy(nw->place,"N/A");
    nw->price=0.0;
    nw->tick=0;
 
    if(p==NULL)
    {
        p=t=nw;
    }
    else
    {
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=nw;
    }
    writefile(t);
    
    return t;
}
void LogoutUser()
{
    if(status==out )
    {
        printf("You must be logged in to logout\n");
        return;
    }
    strcpy(currentUser,"\0");
    status=out;
    printf("You have been successfully logged out\n");
}
void exitprog()
{
    printf("Exiting...\nPress Enter to exit");
    char exitprog;
    fflush(stdin);
    scanf("%c",&exitprog);
}
 

