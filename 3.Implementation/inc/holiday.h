#ifndef TUTORIAL_H_INCLUDED
#define TUTORIAL_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

    typedef enum {out,in,sub}state;
	extern state status;
    

    typedef struct User
    {
    char name[100];
    char pwd[100];
    char place[100];
    float price;
    int tick;
    struct User *next;
    }User;
    char foodname[100];
    char currentUser[100];
    void menuCard();
    User* List(User*);
    User* NewUser(User*);
    void LoginUser(User* p);
  
    void foodFeature();
    int moviecall();
    int bustickets();
    void hotelbooking();
    int railwayticket();
    void LogoutUser();
    void exitprog();



#endif // TUTORIAL_H_INCLUDED
