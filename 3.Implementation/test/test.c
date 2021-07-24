#include "unity.h"
#include "unity_internals.h"
#include "../inc/bus.h"
#include "../inc/foodorder.h"
#include "../inc/movie.h"
#include "../inc/railway.h"
#include "../inc/hotel.h"

/* Modify these two lines according to the project */

#define PROJECT_NAME "holidayapp"



/* Prototypes for all the test functions */
void test_bus(void);
void test_bus1(void);
void test_bus2(void);
void test_bus3(void);
void test_bus4(void);
void test_bus5(void);
void test_bus6(void);
void test_bus7(void);
void test_bus8(void);
void test_bus9(void);

/* Food Order function declaration */
void test_food1(void);
void test_food2(void);
void test_food3(void);
void test_food4(void);
void test_food5(void);
void test_food6(void);
void test_food7(void);
void test_food8(void);
void test_food9(void);
void test_food10(void);
void test_food11(void);
void test_food12(void);
void test_food13(void);
void test_food14(void);
void test_food15(void);
void test_food16(void);
void test_food17(void);
void test_food18(void);
void test_food19(void);
void test_food20(void);

/* Movie booking function declaration */
void test_movie1(void);
void test_movie2(void);
void test_movie3(void);
void test_movie4(void);
void test_movie5(void);
void test_movie6(void);
void test_movie7(void);
void test_movie8(void);
void test_movie9(void);
void test_movie10(void);

/* Railway Booking Function declaration */
void test_train1(void);
void test_train2(void);
void test_train3(void);
void test_train4(void);
void test_train5(void);
void test_train6(void);
void test_train7(void);
void test_train8(void);
void test_train9(void);
void test_train10(void);
void test_train11(void);

/*Hotel room booking function declaration*/
void test_searchdetails1();
void test_searchdetails2();
void test_searchdetails3();
void test_searchdetails4();
void test_searchdetails5();
void test_viewdetails1();
void test_viewdetails2();
void test_viewdetails3();
void test_viewdetails4();
void test_viewdetails5();
void test_bookingdetails1();
void test_bookingdetails2();
void test_bookingdetails3();
void test_bookingdetails4();
void test_bookingdetails5();



/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_bus);
  RUN_TEST(test_bus1);
  RUN_TEST(test_bus2);
  RUN_TEST(test_bus3);
  RUN_TEST(test_bus4);
  RUN_TEST(test_bus5);
  RUN_TEST(test_bus6);
  RUN_TEST(test_bus7);
  RUN_TEST(test_bus8);
  RUN_TEST(test_bus9);

/* Run test for food order */
  RUN_TEST(test_food1);
  RUN_TEST(test_food2);
  RUN_TEST(test_food3);
  RUN_TEST(test_food4);
  RUN_TEST(test_food5);
  RUN_TEST(test_food6);
  RUN_TEST(test_food7);
  RUN_TEST(test_food8);
  RUN_TEST(test_food9);
  RUN_TEST(test_food10);
  RUN_TEST(test_food11);
  RUN_TEST(test_food12);
  RUN_TEST(test_food13);
  RUN_TEST(test_food14);
  RUN_TEST(test_food15);
  RUN_TEST(test_food16);
  RUN_TEST(test_food17);
  RUN_TEST(test_food18);
  RUN_TEST(test_food19);
  RUN_TEST(test_food20);
  
  /* Run test for movie booking */
  RUN_TEST(test_movie1);
  RUN_TEST(test_movie2);
  RUN_TEST(test_movie3);
  RUN_TEST(test_movie4);
  RUN_TEST(test_movie5);
  RUN_TEST(test_movie6);
  RUN_TEST(test_movie7);
  RUN_TEST(test_movie8);
  RUN_TEST(test_movie9);
  RUN_TEST(test_movie10);

/* Run test for Train booking */
  RUN_TEST(test_train1);
  RUN_TEST(test_train2);
  RUN_TEST(test_train3);
  RUN_TEST(test_train4);
  RUN_TEST(test_train5);
  RUN_TEST(test_train6);
  RUN_TEST(test_train7);
  RUN_TEST(test_train8);
  RUN_TEST(test_train9);
  RUN_TEST(test_train10);
  RUN_TEST(test_train11);

  /*Run test for hotel booking*/
  RUN_TEST(test_searchdetails1);
  RUN_TEST(test_searchdetails2);
  RUN_TEST(test_searchdetails3);
  RUN_TEST(test_searchdetails4);
  RUN_TEST(test_searchdetails5);
  RUN_TEST(test_viewdetails1);
  RUN_TEST(test_viewdetails2);
  RUN_TEST(test_viewdetails3);
  RUN_TEST(test_viewdetails4);
  RUN_TEST(test_viewdetails5);
  RUN_TEST(test_bookingdetails1);
  RUN_TEST(test_bookingdetails2);
  RUN_TEST(test_bookingdetails3);
  RUN_TEST(test_bookingdetails4);
  RUN_TEST(test_bookingdetails5);

  
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* test functions */ 
void test_bus(void) {
  TEST_ASSERT_EQUAL_INT(1, checkbusticket(1));
  
}
void test_bus1(void) {
  TEST_ASSERT_EQUAL_INT(1, checkbusticket(2));
  
}

void test_bus2(void) {
  TEST_ASSERT_EQUAL_INT(0, checkbusticket(11));
  
}
void test_bus3(void) {
  TEST_ASSERT_EQUAL_INT(1, checkbusticket(3));
  
}
void test_bus4(void) {
  TEST_ASSERT_EQUAL_INT(1, checkbusticket(4));
  
}
void test_bus5(void) {
  TEST_ASSERT_EQUAL(1, checkbusticket(5));
  
}

void test_bus6(void) {
  TEST_ASSERT_EQUAL(0, checkbusticket(12));
  
}
void test_bus7(void) {
  TEST_ASSERT_EQUAL(1, checkbusticket(8));
  
}
void test_bus8(void) {
  TEST_ASSERT_EQUAL(1, checkbusticket(10));
  
}
void test_bus9(void) {
  TEST_ASSERT_EQUAL(1, checkbusticket(7));
  
}

/* Test functions for FoodOrder */

void test_food1(void)
{
  TEST_ASSERT_EQUAL_CHAR('v',testfoodCustomerFunction(1));
}
void test_food2(void)
{
  TEST_ASSERT_EQUAL_CHAR('n',testfoodCustomerFunction(2));
}
void test_food3(void)
{
  TEST_ASSERT_EQUAL_CHAR('e',testfoodCustomerFunction(3));
}
void test_food4(void)
{
  TEST_ASSERT_EQUAL_CHAR('x',testfoodCustomerFunction(4));
}
void test_food5(void)
{
  TEST_ASSERT_NOT_EQUAL_CHAR('v',testfoodCustomerFunction(5));
}
void test_food6(void)
{
  TEST_ASSERT_NOT_EQUAL_CHAR('n',testfoodCustomerFunction(5));
}
void test_food7(void)
{
  TEST_ASSERT_NOT_EQUAL_CHAR('e',testfoodCustomerFunction(5));
}
void test_food8(void)
{
  TEST_ASSERT_NOT_EQUAL_CHAR('a',testfoodCustomerFunction(5));
}
void test_food9(void)
{
  TEST_ASSERT_EQUAL_INT(1,testVegfunction(1));
}
void test_food10(void)
{
  TEST_ASSERT_EQUAL_INT(1,testVegfunction(2));
}
void test_food11(void)
{
  TEST_ASSERT_EQUAL_INT(1,testVegfunction(3));
}
void test_food12(void)
{
  TEST_ASSERT_EQUAL_INT(1,testVegfunction(4));
}
void test_food13(void)
{
  TEST_ASSERT_EQUAL_INT(1,testVegfunction(5));
}
void test_food14(void)
{
  TEST_ASSERT_EQUAL_INT(0,testVegfunction(6));
}
void test_food15(void)
{
  TEST_ASSERT_EQUAL_INT(1,testNonvegfuntion(1));
}
void test_food16(void)
{
  TEST_ASSERT_EQUAL_INT(1,testNonvegfuntion(2));
}
void test_food17(void)
{
  TEST_ASSERT_EQUAL_INT(1,testNonvegfuntion(3));
}
void test_food18(void)
{
  TEST_ASSERT_EQUAL_INT(1,testNonvegfuntion(4));
}
void test_food19(void)
{
  TEST_ASSERT_EQUAL_INT(1,testNonvegfuntion(5));
}
void test_food20(void)
{
  TEST_ASSERT_EQUAL_INT(0,testNonvegfuntion(6));
}

/* Test functions for movie booking */

void test_movie1(void)
{
  TEST_ASSERT_EQUAL_INT(1,testmovieCustomer(1));
}
void test_movie2(void)
{
  TEST_ASSERT_NOT_EQUAL_INT(2,testmovieCustomer(2));
}
void test_movie3(void)
{
  TEST_ASSERT_EQUAL_INT(1,testmovieCustomer(3));
}
void test_movie4(void)
{
  TEST_ASSERT_EQUAL_INT(1,testmovieCustomer(4));
}
void test_movie5(void)
{
  TEST_ASSERT_NOT_EQUAL_INT(2,testmovieCustomer(2));
}
void test_movie6(void)
{
  TEST_ASSERT_NOT_EQUAL_INT(2,testmovieCustomer(3));
}
void test_movie7(void)
{
  TEST_ASSERT_EQUAL_INT(1,testmovieCustomer(3));
}
void test_movie8(void)
{
  TEST_ASSERT_EQUAL_INT(1,testmovieCustomer(1));
}
void test_movie9(void)
{
  TEST_ASSERT_EQUAL_INT(1,testmovieCustomer(1));
}
void test_movie10(void)
{
  TEST_ASSERT_NOT_EQUAL_INT(2,testmovieCustomer(2));
}
void test_train1(void)
{
  TEST_ASSERT_NOT_EQUAL_INT(1,checktrainticket(20));
}
void test_train2(void)
{
  TEST_ASSERT_EQUAL_INT(1,checktrainticket(2));
}
void test_train3(void)
{
  TEST_ASSERT_EQUAL_INT(1,checktrainticket(3));
}
void test_train4(void)
{
  TEST_ASSERT_EQUAL_INT(1,checktrainticket(4));
}
void test_train5(void)
{
  TEST_ASSERT_EQUAL_INT(1,checktrainticket(5));
}
void test_train6(void)
{
  TEST_ASSERT_EQUAL_INT(1,checktrainticket(6));
}
void test_train7(void)
{
  TEST_ASSERT_EQUAL_INT(1,checktrainticket(7));
}
void test_train8(void)
{
  TEST_ASSERT_EQUAL_INT(1,checktrainticket(8));
}
void test_train9(void)
{
  TEST_ASSERT_EQUAL_INT(1,checktrainticket(9));
}
void test_train10(void)
{
  TEST_ASSERT_EQUAL_INT(1,checktrainticket(10));
}
void test_train11(void)
{
  TEST_ASSERT_NOT_EQUAL_INT(1,checktrainticket(11));
}
/* Test functions for hotel booking */

void test_bookingdetails1(void)
{
  TEST_ASSERT_EQUAL_INT(0,booking("abcd",27/05/21,31/05/21,4,5,"deluxe",3));
}
void test_bookingdetails2(void)
{
  TEST_ASSERT_EQUAL_INT(0,booking("abhiram",26/05/21,28/05/21,3,3,"deluxe",1));
}
void test_bookingdetails3(void)
{
  TEST_ASSERT_EQUAL_INT(0,booking("priya",31/05/21,01/06/21,1,2,"regular",2));
}
void test_bookingdetails4(void)
{
  TEST_ASSERT_EQUAL_INT(0,booking("ramesh",28/05/21,05/06/21,2,8,"deluxe",4));
}
void test_bookingdetails5(void)
{
  TEST_ASSERT_EQUAL_INT(0,booking("user",26/05/21,27/05/21,2,2,"regular",5));
}
void test_searchdetails1(void)
{
  TEST_ASSERT_NOT_EQUAL_INT(0,search("abcd"));
}
void test_searchdetails2(void)
{
  TEST_ASSERT_NOT_EQUAL_INT(0,search("abhiram"));
}
void test_searchdetails3(void)
{
  TEST_ASSERT_NOT_EQUAL_INT(0,search("priya"));
}
void test_searchdetails4(void)
{
  TEST_ASSERT_NOT_EQUAL_INT(0,search("ramesh"));
}
void test_searchdetails5(void)
{
  TEST_ASSERT_EQUAL_INT(-1,search("user1"));
}
void test_viewdetails1(void)
{
  TEST_ASSERT_EQUAL_INT(0,view(1));
}
void test_viewdetails2(void)
{
  TEST_ASSERT_EQUAL_INT(0,view(2));
}
void test_viewdetails3(void)
{
  TEST_ASSERT_NOT_EQUAL_INT(1,view(3));
}
void test_viewdetails4(void)
{
  TEST_ASSERT_NOT_EQUAL_INT(1,view(4));
}
void test_viewdetails5(void)
{
  TEST_ASSERT_NOT_EQUAL_INT(1,view(5));
}
