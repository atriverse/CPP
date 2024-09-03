/*
C++ Loops
The need to perform an action, again and again, with little or no variations in the details each time they are executed is met by a mechanism known as a loop. This involves repeating some code in the program, either a specified number of times or until a particular condition is satisfied. Loop-controlled instructions are used to perform this repetitive operation efficiently ensuring the program doesn’t look redundant at the same time due to the repetitions.

 

Following are the three types of loops in C++ programming.

 

For Loop

While Loop

Do While Loop
*/

#include<iostream>

using namespace std;

int main(){

   /*For Loop in C++
   for(initialization;condition;updation)
   {
        loop body(C++ code);
   }

   initialize counter: It will initialize the loop counter value. It is usually i=0.

    test counter: This is the test condition, which if found true, the loop continues, otherwise terminates.

    Increment/decrement counter: Incrementing or decrementing the counter.

    Set of statements: This is the body or the executable part of the for loop or the set of statements that has to repeat itself.
   */
   int i=1;
//    for(i;i<=100;i++){
//     cout<<i<<endl;
//    }

   //Infinite for loop
//    for(i;34<=100;i++){
//     cout<<i<<endl;
//    }

    /*While Loop in C++
    while(condition)
    {
        C++ statements;
    }
    */
   //Printing 1 to 40 using while loop
//    while (i<=40){
//     cout<<i<<endl;
//     i++;
//    }

   //Infinite while loop
//    while(true){
//     cout<<i<<endl;
//     i++;
//    }

    /*do While Loop in C++
    A do-while loop is a little different from a normal while loop. A do-while loop, unlike what happens in a while loop, executes the statements inside the body of the loop before checking the test condition. 

    So even if a condition is false in the first place, the do-while loop would have already run once. A do-while loop is very much similar to a while loop, except for the fact that it is guaranteed to execute the body at least once.

    Unlike for and while loops, which test the loop condition first, then execute the code written inside the body of the loop, the do-while loop checks its condition at the end of the loop. 
    
    do
    {
        C++ statements;
    }while(condition);
    */
   //Printing 1 to 40 using while loop
//    do{
//     cout<<i<<endl;
//     i++;
//    }while(i<40);

   //Table of 6
   do{
    cout<<6*i<<endl;
    i++;
   }while(i<=10);
   return 0;
}