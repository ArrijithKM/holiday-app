/**
 * @file foodorder.h
 * @author 99004393 - Arrijith KM  (arrijithkm@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef TUTORIAL1_H_INCLUDED
#define TUTORIAL1_H_INCLUDED
#include<stdio.h>
//#include<conio.h>
#include<string.h>
#include<stdlib.h>
/**
 * @brief function to display the main menu
 * 
 */
void mainmenu(void);
/**
 * @brief Function to get customer details
 * 
 */
void customers(void);
/**
 * @brief Function to store the details of customer
 * 
 */
void details(void);
/**
 * @brief Function for ordering Vegetarian foods
 * 
 */
void vegetarian(void);
/**
 * @brief Function for ordering Non-Vegetarian foods
 * 
 */
void nonvegetarian(void);
/**
 * @brief Function to interface with the main function in holiday.c
 * 
 */
void foodFeature();
/**
 * @brief Unit Test Function for customer menu
 * 
 * @param input 
 * @return char 
 */
char testfoodCustomerFunction(int input);
/**
 * @brief Unit Test function for Vegetarian Foods
 * 
 * @param input 
 * @return int 
 */
int testVegfunction(int input);
/**
 * @brief Unit test function for Non-Vegetarian Foods
 * 
 * @param input 
 * @return int 
 */
int testNonvegfuntion(int input);

#endif // TUTORIAL1_H_INCLUDED
