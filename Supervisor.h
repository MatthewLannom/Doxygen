/**
 * @file Supervisor.h
 * @author Matthew Lannom
 * @date 2023-11-18
 * @brief Supervisor class (header file)
 * 
 * This file contains the definition for the Supervisor class
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * A class that represents a supervisor and contains data about the supervisor, as well as methods to print the information
 *
 * @class Supervisor Supervisor.h "Doxygen/Supervisor.h"
 * @brief Supervisor class
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

/**
 * Prints the supervisor's Id, years employed, hourly rate, hours worked, and number of employees supervised
 *
 * @pre 
 * @return void 
 * @post Information has been printed to the screen
 * 
 */
  void print();

/**
 * Calculates the supervisor's pay
 *
 * @pre 
 * @return double The supervisor's pay
 * @post Pay has been calculated
 * 
 */
  double calculatePay();

/**
 * Default constructor
 *
 * @pre 
 * @post numSupervised has been initialized
 * 
 */
  Supervisor();

/**
 * Parameterized constructor
 *
 * @param int ID The supervisor's ID number 
 * @param int years The number of years the supervisor has worked at the company
 * @param double hourlyRate The supervisor's hourly rate of pay
 * @param float hoursWorked The amount of hours the supervisor works
 * @param int numSupervised The number of employees supervised by the supervisor
 * @pre 
 * @post ID, years, hourlyRate, hoursWorked, and numSupervised are equal to the parameters entered
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
