/*
 Jeremy Turney
 023299492
 April 13, 2015
 Assignment 7
 Computing Interest rates with For Loop.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   
    double rate, balance, interest;
    int terms;
    int i= 1;
    cout << fixed << setprecision(2) << setw(8);
    
    cout << "Enter your rate " << endl;
    cin >> rate;
    
    cout << "Enter your balance "<< endl;
    cin >> balance;
    
    cout << "Enter the number of years " << endl;
    cin >> terms;
    
    for (i= 1; i<= terms; i++)
    {
        interest = balance * rate/100.0;
        balance = balance + interest;
        
        cout << "Years   "<< i << ":   " << balance << endl;
    
    }
   
    return 0;
}
