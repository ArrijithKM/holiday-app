# Test plan and Test ouput

## Integration test (High level test)
|      ID      | Feature                        |Description                                      |    Status | Type of test |
|----------------|-------------------------------|------------------------------------|------------------|--------|
| HR_01 |Login credentials | username and password | Passing | Additonal requirement test |
| HR_02 |Bookings for Holiday | all booking functions | Passing | Requirement based test |
 |HR_03|Displaying of tickets | all displaying of booking function |Passing | Requirement based test |
 | HR_04 |Cancellation | cancelling of booked ticket | Passing | Requirement based test | 
 | HR_05 |Integratin | all booking functions of different domain| Passing | Requirement based test | 

## Unit Test (Low level test)
| LR ID |     HR ID      | Feature                        |Description                                      |    Type of test | Status |
|----------|----------------|-------------------------------|------------------------------------|------------------|--------|
| LR_01 |     HR_01      |login| entering username  | Additional requirement based test|Passing|
| LR_02 |     HR_01      |login| entering password  | Additional requirement based test|Passing|
| LR_03 |     HR_02    |Booking of train ticket option function |choosing|Requirement based test | Passing
| LR_04 |     HR_02     | Input of details | getting user details| Requirement based test| Passing |
| LR_05 |     HR_03    | Displaying the details|details of available train| Requirement based test | Passing|
 | LR_06 |     HR_04     |Cancellation of ticket function |cancelling the booked ticket| Requirement based test | Passing|
 | LR_07 |     HR_02      |Booking of bus ticket |choosing|Requirement based test | Passing|
 | LR_08 |     HR_03|Displaying bus ticket function | Viewing of booked ticket details|Requirement based test | Passing|
 | LR_09 |     HR_04     |Cancellation of bus ticket function | cancelling the booked ticket|Requirement based test | Passing|
 | LR_10 |     HR_03      |Displaying the Hotel List |option to choose the hotel |Requirement based test | Passing|
 | LR_11 |     HR_03     |Selecting different Types of Rooms|choosing room type | Option based test | Passing|
| LR_12|     HR_02    | Booking function| booking room on the given details| Requirement based test | Passing|
 | LR_13 |     HR_03      |Viewing function|view the details by giving hotel number as input |Requirement based test | Passing
 | LR_14 |     HR_03     |Searching function|search details by giving name as input | Requirement based test | Passing|
 | LR_15|     HR_03   |viewing function|  viewing food menu   |Requirement based test | Passing
| LR_16|     HR_02      |Ordering function| order food after viewing food menu displayed  |Option based test | Passing
| LR_17 |     HR_03    |Confirming order through input features| viewing the details given | Option based test | Passing
| LR_18|     HR_03     | Reviewing order | order displayed| Additional requirement based test | Passing
| LR_19 |     HR_03    |Displaying movie list| Option to choose movie | Requirement based test | Passing
| LR_20 |     HR_03    |Find a movie| Search for a particular movie | Requirement based test | Passing
| LR_21 |     HR_02    |Booking movie| Booking movie based on list | Requirement based test | Passing
| LR_22 |     HR_03    |View transaction| viewing the transaction details after booking | Option based test | Passing





