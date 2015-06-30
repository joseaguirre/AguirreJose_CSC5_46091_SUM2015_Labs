/*
 *File:	 main.cpp
 *Author: Jose Aguirre
 *Created on June 24, 2015, 6:50 PM
 *Purpose:Calculate the base price of a gallon of gas without tax then
 *calculate the tax per gallon of gas and what effective tax rate this 
 *represents.
 * URL: http://ideone.com/96RrcW
 */ 

//System Libraries 
#include <iostream> //I/O Library 
using namespace std;//Namespace for iostream 

//User Libraries

//Global Constants
const float  cvtPer = 100; //converting to a percent
//Function Prototypes

//Execution Begins Here!
int main(){
	//Declare Variables
        float fedTax=0.18f;   //Federal Tax $'s 

        float calTax=0.36f;   //California Tax $'s 

        float slsTax=0.08f;  //California Sales Tax % 

        float gallon=3.69f;   //Price of a gallon of gas $'s with all taxes included

        float galBsPr; //base price of a gallon of gas w/o tax
        
        float totTax; //calculate the tax per gallon of gas, total tax
    
        float taxRate; //total tax tax rate
        //Calculate base price of a gallon of gas w/o tax
        galBsPr = gallon - fedTax - calTax - gallon*slsTax; 
        totTax = fedTax + calTax + gallon*slsTax; 
        taxRate = ((fedTax/gallon) + (calTax/gallon) + slsTax) * cvtPer; 
 
        //Output the results
        cout << "The base price of a gallon of gas without tax is: ";
        cout << galBsPr << endl; 
        cout << "The total tax per gallon of gas is: "; 
        cout << totTax << endl; 
        cout << "The total tax rate per gallon of gas is: "; 
        cout << taxRate << "%" << endl; 
        //Exit stage right!


}