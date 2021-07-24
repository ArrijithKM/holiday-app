/**
 * @file bus.h
 * @author Preethiy V (Preethiyv@embedded.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __BUS_H__
#define __BUS_H__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char name[50];
	int num_of_seats;
    int sno;
}pd;
#define BUFFER_SIZE 1000
int num;
/**
 * @brief delete function
 * 
 * @param srcFile 
 * @param tempFile 
 * @param name 
 * @return int 
 */
int deleteLinebusticket(FILE *srcFile, FILE *tempFile, char name[]);
/**
 * @brief Print function
 * 
 * @param fptr 
 */
void printFilebusticket(FILE *fptr);
/**
 * @brief Function for logging in
 * 
 */
void login();
/**
 * @brief Function to cancel bus ticket
 * 
 */
void cancelbusticket(void);
/**
 * @brief Function to view details 
 * 
 */
void viewdetailsbus(void);
/**
 * @brief Function to book bus ticket
 * 
 */
void bookbusticket(void);
/**
 * @brief Function to display bus ticket
 * 
 */
void displaybusticket(void);
/**
 * @brief Function to charge
 * 
 * @param sno Serial number of bus
 * @param num_of_seats Number of seats  
 * @return float Charges
 */
float chargebusticket(int sno,int num_of_seats);
/**
 * @brief Main function for this file
 * 
 */
int bustickets();
/**
* @brief Check function for this file
* @param sno Serial number of bus
 */
int checkbusticket(int sno);

#endif  