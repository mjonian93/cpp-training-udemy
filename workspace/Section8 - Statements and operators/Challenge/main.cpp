//Section 8 Challenge
/*
  For this program I will be using US dollars and cents.
  Write a program that asks the user to enter the following:
  An integer representing the number of cents
  
  You may assume that the number of cents entered is greather than or equal to zero
  The program should then display how to provide that change to the user
  
  In the US:
    1 dollar is 100 cents
    1 quarter is 25 cents
    1 dime is 10 cents
    1 nickel is 5 cents, and
    1 penny is 1 cent.
    
  Here is a sample run:
  
  Enter an amount in cents : 92
  
  You can provide this change as follow:
  dollars   : 0
  quarters  : 3
  dimes     : 1
  nickels   : 1
  pennies   : 2
  
  Feel free to use your own currency system.
  Also, think of how you might solve the problem using the modulo operator
  
  have fun and test your program!!
*/

#include <iostream>

using namespace std;

void split_cents(int cents, int* dollars, int* quarters, int* dimes, int* nickels, int* pennies);

int main()
{
    int cents {};
    cout << "Enter an integer representing the number of cents:";
    cin >> cents;
    
    int dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
    
    split_cents(cents, &dollars, &quarters, &dimes, &nickels, &pennies);
    
    cout << "Here it is the change:" << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;
    
    cout << endl;
    return 0;
}

void split_cents(int remain, int* dollars, int* quarters, int* dimes, int* nickels, int* pennies)
{
    
    *dollars = remain/100;
    remain %= 100;
    
    *quarters = remain/25;
    remain %= 25;
    
    *dimes = remain/10;
    remain %= 10;
    
    *nickels = remain/5;
    remain %= 5;
    
    *pennies = remain;
}

