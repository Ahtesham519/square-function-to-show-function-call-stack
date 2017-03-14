//callStack.cpp
//demonstrates square function used to demonstrates the function 
//call stack and activation records

#include <iostream>
using namespace std;

int square( int );  // prototype for function square

int main()
{
int a=10;  // value to square (local automatic variable in main )

cout<< a << "squared: " << square( a )<<endl;        //display a squared
}  // end main

/return the square of an intergers
int square( int x ) //x is a local variables
{
return x * x;  //calculate square and return results
} 

