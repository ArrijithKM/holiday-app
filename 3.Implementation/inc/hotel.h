/**
 * @file hotel.h
 * @author 99004400-Annapoorna
 * @brief 
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __HOTEL_H__
#define __HOTEL_H__
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct customerdt
{
    char name[20];
    char dtin[10];
    char dtout[10];
    int noofPersons;
    int noofDays;
    char typeofRoom[10];
    int hotelOpt;
} customerdt;

/**
 * @brief List of the Hotels
 * 
 * @param temp temporary variable
 * @return int 
 */
int list(int temp);
/**
 * @brief Selecting the process to proceed
 * 
 * @param hotelOpt Selecting a hotel
 * @param temp 
 */
int selectedOptions(int hotelOpt, int temp);
/**
 * @brief Booking Details
 * 
 * @param name Customer name
 * @param dtin Checkin Date 
 * @param dtout Checkout Date
 * @param noofPersons Number of Persons
 * @param noofDays Number of Days
 * @param typeofRoom Type of the Room
 * @param hotelOpt Option to select the Hotel
 * @return int 
 */
int booking(char *name, char *dtin, char *dtout, int noofPersons, int noofDays, char *typeofRoom, int hotelOpt);
/**
 * @brief View the customer details
 * 
 * @param hotelOpt Option to select a Hotel
 * @return int 
 */
int view(int hotelOpt);
/**
 * @brief Search the details
 * 
 * @param name2 Name for searching the details
 * @return int 
 */
int search(char *name2);
/**
 * @brief Selecting the type of room and getting the advantages in that room
 * 
 * @param typeofRoom Type of Room
 * @param temp Temporary Variable
 */
void menu(char *typeofRoom, int temp);
/**
 * @brief Main function
 * 
 * @return int 
 */
int hotelbooking();
#endif