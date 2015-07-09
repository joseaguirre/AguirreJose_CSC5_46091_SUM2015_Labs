/* LAB6 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Modified by: Jose Aguirre
 * Modified at: 6:56 PM
 * Created on July 8, 2015, 10:45 AM
 * Purpose:  Retirement Calculator
 */
//System Library
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
void heading();
void retire(float, float, float, float, float, float, float);
void table();
//Execution Begins Here!
int main(int argc, char** argv) 
{
    table();
    //Exit Stage Right!
    return 0;
}
void heading()
{
    cout << "\tRetirement Calculator" << endl
         << "\t$100,000.00 = Salary $'s" << endl
         << "\t6.00% = Investment Rate -> See Muni Bonds" << endl
         << "\t20.00% = Deposit as a % of Salary" << endl
         << "\t$1,666,667 = Amount needed to Retire $'s"<<endl;
}


void retire(float salary,float invRate,float savReq,float pDep,
        float deposit,float savings,float year)
{
        //Calculate required savings
    savReq=salary/invRate; //Required Savings
    deposit=pDep*salary;   //Deposit based salary
    
    cout<<"year"<<"\t"<<"date"<<"\t"<<"\t"<<"savings"
             <<"\t\t"<<"interest"<<"\t\t"<<"deposit"<<endl; 
    
    //Loop to calculate when Retirement is possible
    int index = 18; 
    do{
        cout<<static_cast<int>(year)
            <<fixed<<showpoint<<setprecision(2)<<"\t"<<"06/18/"
            <<index<<"\t"<<static_cast<int>(savings)<<"\t"<<"\t"
            <<static_cast<int>((savings*invRate)+.05)<<"\t\t\t";

        savings*=(1+invRate);//Earning based upon investment rate
        savings+=deposit;    //Add the deposit after earning interest

        year++;
        cout<<static_cast<int>(deposit)<<endl; 
        index++;
    }while(savings<savReq);//When we have enough to retire then exit the loop
       cout<<static_cast<int>(year)
           <<fixed<<showpoint<<setprecision(2)<<"\t"<<"06/18/"
           <<index<<"\t"<<static_cast<int>(savings+.05)<<"\t\t"
           <<static_cast<int>((savings*invRate)+.05)<<"\t\t\t"
           <<static_cast<int>(deposit)<<endl; 
          
}
void table()
{
        //Declare Variables
    float salary=100000; //Average Salary in $'s
    float invRate=0.06f;//Investment Rate -> see Calif Muni Bonds
    float savReq;       //Savings required at retirement
    float pDep=0.20f;   //Of your gross Salary -> Percentage Deposited 
    float deposit;      //Yearly deposit in $'s
    float savings=0;    //Initial Savings at start of Employment
    float year=0;       //Start at year 0
    
    heading();
    retire(salary, invRate, savReq, pDep, deposit, savings, year);
}