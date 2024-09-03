/*
Break Statement
Break statement is used to break the loop or switch case statements execution and brings the control to the next block of code after that particular loop or switch case it was used in.

Break statements are used to bring the program control out of the loop it was encountered in. The break statement is used inside loops or switch statements in C++ language.

Continue Statement
The continue statement is used inside loops in C++ language. When a continue statement is encountered inside the loop, the control jumps to the beginning of the loop for the next iteration, skipping the execution of statements inside the body of the loop after the continue statement.

It is used to bring the control to the next iteration of the loop. Typically, the continue statement skips some code inside the loop and lets the program move on with the next iteration. It is mainly used for a condition so that we can skip some lines of code for a particular condition.

It forces the next iteration to follow in the loop unlike a break statement, which terminates the loop itself the moment it is encountered.
*/
#include <iostream>
using namespace std;

int main()
{
    // Break
    //  for (int i = 0; i < 4; i++)
    //  {
    //      /* code */
    //      cout<<i<<endl;
    //      if(i==2){
    //          break;
    //      }
    //  }

    // Continue
    for (int i = 0; i < 4; i++)
    {
        /* code */
        if (i == 2)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}