/*
Control Structure
The work of control structures is to give flow and logic to a program. There are three types of basic control structures in C++.



Sequence Structure
Sequence structure refers to the sequence in which program execute instructions one after another.



Selection Structure
Selection structure refers to the execution of instruction according to the selected condition, which can be either true or false. There are two ways to implement selection structures. They are done either by if-else statements or by switch case statements.



Loop Structure
Loop structure refers to the execution of an instruction in a loop until the condition gets false.
*/

#include <iostream>

using namespace std;

int main()
{
    /*
    C++ If Else
    If else statements are used to implement a selection structure. Like any other programming language, C++ also uses the if keyword to implement the decision control instruction.



    The condition for the if statement is always enclosed within a pair of parentheses. If the condition is true, then the set of statements following the if statement will execute. And if the condition evaluates to false, then the statement will not execute, instead, the program skips that enclosed part of the code.



    An expression in if statements are defined using relational operators. The statement written in an if block will execute when the expression following if evaluates to true. But when the if block is followed by an else block, then when the condition written in the if block turns to be false, the set of statements in the else block will execute.



    Following is the syntax of if-else statements:

    if ( condition ){
    statements;}
    else {
    statements;}
    */

    /* Selection control structure If-else ladder/condition */
    int age;
    cout << "Tell me your age:" << endl;
    cin >> age;
    // if(age<18){
    //     cout<<"You can not come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"May be come."<<endl;
    // }
    // else{
    //     cout<<"You can come."<<endl;
    // }

    /*
    C++ Switch Case
    The control statement that allows us to make a decision effectively from the number of choices is called a switch, or a switch case-default since these three keywords go together to make up the control statement.

    Switch executes that block of code, which matches the case value. If the value does not match with any of the cases, then the default block is executed.

    Following is the syntax of switch case-default statements:

    switch ( integer/character expression )
    {
    case {value 1} :
    do this ;

    case {value 2} :
    do this ;

    default :
    do this ;
    }

    The expression following the switch can be an integer expression or a character expression. Remember, that case labels should be unique for each of the cases. If it is the same, it may create a problem while executing a program. At the end of the case labels, we always use a colon ( : ). Each case is associated with a block. A block contains multiple statements that are grouped together for a particular case.

    The break keyword in a case block indicates the end of a particular case. If we do not put the break in each case, then even though the specific case is executed, the switch will continue to execute all the cases until the end is reached. The default case is optional. Whenever the expression's value is not matched with any of the cases inside the switch, then the default case will be executed.
    */
    /* Selection control structure Switch case */
    switch (age)
    {
    case 18:
        cout << "May be come." << endl;
        break;
    case 22:
        cout << "You can come." << endl;
        break;
    case 2:
        cout << "No come." << endl;
        break;
    default:
        cout << "Not so special." << endl;
        break;
    }
    cout << "Done with switch case" << endl;
    return 0;
}
