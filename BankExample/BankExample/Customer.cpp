#include "Customer.h"

Customer::Customer(std::string firstName, std::string lastName) : _firstName(firstName), _lastName(lastName)
{
  
}

Customer::~Customer()
{
  
}

std::string Customer::getName()
{
  return _lastName + ", " + _firstName;
}
  //Why does the + work on a string?
  //the + is overloaded
