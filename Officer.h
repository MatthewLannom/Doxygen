/**
 * @file Officer.h
 * @author Matthew Lannom
 * @date 2023-11-18
 * @brief Officer class (header file)
 * 
 * This file contains the definition for the Officer class
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"


/**
 * A class that represents an officer and contains data about the officer, as well as methods to print the information
 *
 * @class Officer Officer.h "Doxygen/Officer.h"
 * @brief Officer class
 *
 */
class Officer : public Employee {
 private:
  double evilness;
 public:

/**
 * Prints the officer's ID, years employed, hourly rate, hours worked, and evilness
 *
 * @pre 
 * @return void 
 * @post Information has been printed to the screen
 * 
 */
  void print();

/**
 * Calculates the officer's pay
 *
 * @pre 
 * @return double The officer's pay
 * @post Pay has been calculated 
 * 
 */
  double calculatePay();

/**
 * Default constructor
 *
 * @pre 
 * @post evilness has been initialized
 * 
 */
  Officer();

/**
 * Parameterized constructor
 *
 * @param int ID The officer's ID number
 * @param int years The number of years the officer has worked at the company
 * @param double hourlyRate The officer's hourly rate of pay
 * @param float hoursWorked The amount of hours the officer works
 * @param double evilness How evil the officer is
 * @pre 
 * @post ID, years, hourlyRate, hoursWorked, and evilness are equal to the parameters entered
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H

