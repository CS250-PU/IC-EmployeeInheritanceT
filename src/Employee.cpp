#include <iostream>
#include <string>
#include "../include/Employee.h"

Employee::Employee (const std::string &rcName, const std::string &rcID) {
  mcName = rcName;
  mcID = rcID;
}

std::string Employee::getName () const {
  return mcName;
}

std::string Employee::getID () const {
  return mcID;
}

std::ostream &operator<< (std::ostream &rcOut, const Employee &rcEmployee) {
  rcOut << "Name: " << rcEmployee.mcName << " ID: " << rcEmployee.mcID;
  return rcOut;
}

std::istream &operator>> (std::istream &rcIn, Employee &rcEmployee) {
  rcIn >> rcEmployee.mcName >> rcEmployee.mcID;
  return rcIn;
}