/**
 * @file movie.h
 * @author Madura N
 * @brief 
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef MOVIE_H_INCLUDED
#define MOVIE_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct book
{
	char code[20];
	char name[20];
	char date[20];
	int cost;


}b;

//int seat = 60 ;

void insert_details();
/**
 * @brief Insert movie details
 * @param movie name 
 * @param movie code
 * @param release date
 * @param cost
 * @return void
 */
void viewAll();
/**
 * @brief View the movie list
 * @param code 
 * @param name
 * @param cost
 * @return void
 */
void find();
/**
 * @brief Search for a particular movie
 */
void book_ticket();
/**
 * @brief Function to book bus ticket
 */

void old_record();
/**
 * @brief View older transactions
 */
int moviecall();
/**
 * @brief Main function for this file
 */
int testmovieCustomer(int input);
/**
* @brief Check function for this file
* @param input  
*/


#endif // MOVIE_H_INCLUDED
