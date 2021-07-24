/**
 * @file bus.h
 * @author Rakshita R K
 * @brief 
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __RAILWAY_H__
#define __RAILWAY_H__
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char name[50];
	int train_num;
	int num_of_seats;
}customer;

void reservation(void);	
/**
 * @brief input customer details
 *
 * @param reservation of train
 * @return int 
 */

void viewdetails(void);
/**
 * @brief View the customer details
 * @param name Customer 
 * @param number of seats
 * @param route
 * @param cost
 * @param time
 * @return void
 */

void cancel(void);
/**
 * @brief cancel the customer booking
 * 
 * @param  Option to select
 * @return void
 */

void printticket(char name[],int,int,float);	
/**
 * @brief View the customer details
 * 
 * @param printing details
 * @return int 
 */

void specifictrain(int);
/**
 * @brief View the train details
 * 
 * @param specifictrain Option to view 
 * @return int 
 */

float charge(int,int);
/**
 * @brief View the charge
 * 
 * @param calculating charge
 * @return int 
 */
void logintrain();
int railwayticket();
int checktrainticket(int );
#endif