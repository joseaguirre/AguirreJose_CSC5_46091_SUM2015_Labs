/*
 *File:	 main.cpp
 *Author: Jose Aguirre
 *Created on June 24, 2015, 10:55 AM
 *Purpose:calculate the military budget as a percentage of the federal budget
 * 
 */ 

//System Libraries 
#include <iostream> //I/O Library 
using namespace std;//Namespace for iostream 

//User Libraries

//Global Constants
const float fedBudget = 3.8e12;//federal budget in scientific notation
const float milSpending = 6.06e11;//military spending 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
	//Declare Variables
        float MilitaryasPerofFed;//military spending as a % of fed budget
        
        
        //Calculate the military spending as a % of fed budget
        //Output the results
        MilitaryasPerofFed = milSpending / fedBudget * 100;
        
        cout<<"military spending as a % of fed budget is: \n"; 
        cout<<MilitaryasPerofFed << " percent" << endl; 
        //Exit stage right!
	return 0; 
}

