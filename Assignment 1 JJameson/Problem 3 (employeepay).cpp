#include <iostream>

using namespace std;

/*IT WAS NEVER LISTED AT WHAT POINT IN HOURS AMOUNT IS OVERTIME, HOWEVER
IN MY CURRENT JOB I AM GIVEN AN ABSOLUTE MAXIMUM OF 40 HOURS A WEEK.*/

int main() {
  //set doubles
  double ratePay;
  ratePay = 16.00;
  
  double overtimePay;
  overtimePay = ratePay * 1.50;
  
  double ssTax;
  ssTax = 0.06;
  
  double fedTax;
  fedTax = 0.14;
  
  double stateTax;
  stateTax = 0.05;
  
  double medInsurance;
  medInsurance = 10.0;
  
  double hoursWorked;
  double overtimeHours;
  double moneyEarned;
  double takeHomePay;
  double withHeld;
  
  //used an if and else statement to determine whether overtime pay would be taken in
  
  cout << "Enter hours worked:" << endl;
  cin >> hoursWorked;
  
  //chose to instead of creating integers to place in entire portions of the equations to simply type in the problems again
  if (hoursWorked > 40.0) {
    overtimeHours = hoursWorked - 40;

    moneyEarned = ((40 * ratePay) + (overtimeHours * overtimePay));

    withHeld = moneyEarned - ((40 * ratePay) + (overtimeHours * overtimePay)) * (1.0 - (ssTax + fedTax + stateTax)) - medInsurance;

    takeHomePay = ((40 * ratePay) + (overtimeHours * overtimePay)) * (1.0 - (ssTax + fedTax + stateTax)) - medInsurance;
  }
  //non overtime pay
  else {

    moneyEarned = hoursWorked * ratePay;

    withHeld = moneyEarned - ((hoursWorked * ratePay) * (1.0 -(ssTax + fedTax + stateTax)) - medInsurance);

    takeHomePay = (hoursWorked * ratePay) * (1.0 - (ssTax + fedTax + stateTax)) - medInsurance;
  }
  //now simply print the results
  cout << "Employee has earned $" << moneyEarned << "." << endl;
  cout << "$" << withHeld << " is withheld." << endl;
  cout << "Employee takes home $" << takeHomePay << "." << endl;
  return 0;
}
