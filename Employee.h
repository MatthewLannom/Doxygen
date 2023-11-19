/**
 * @file Employee.h
 * @author Matthew Lannom
 * @date 2023-11-18
 * @brief Employee class (header file)
 * 
 * This file contains the definition for the Employee class
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * A class that represents an employee and contains data about the employee, as well as methods to print the information  
 *
 * @class Employee Employee.h "Doxygen/Employee.h"
 * @brief Employee class
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:

/**
 * Prints the employees ID, years employed, hourly rate, and hours worked
 *
 * @pre 
 * @return virtual 
 * @post Information has been printed to the screen
 * 
 */
  virtual void print();

/**
 * Calulates the employee's pay 
 *
 * @pre 
 * @return virtual The employee's pay
 * @post Pay has been calculated
 * 
 */
  virtual double calculatePay();

/**
 * Prints a congratulatory message to an employee celebrating their anniversary, as well as increasing years and hourlyRate
 *
 * @pre 
 * @return void 
 * @post years has been increased by 1, hourlyRate has increased
 * 
 */
  void anniversary();

/**
 * Default constructor
 *
 * @pre 
 * @post ID, years, hoursWorked, and hourlyRate are all initialized
 * 
 */
  Employee();

/**
 * Parameterized constructor
 *
 * @param int ID The employee's ID number
 * @param int years The amount of years the employee has worked at the company
 * @param double hourlyRate The employee's hourly rate of pay
 * @param float hoursWorked The amount of hours the employee works
 * @pre 
 * @post ID, years, hourlyRate, and hoursWorked are equal to the parameters entered
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H

