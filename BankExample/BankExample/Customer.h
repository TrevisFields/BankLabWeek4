#pragma once
#include <string>

class Customer
{
private:
  std::string _firstName;
  std::string _lastName;
public:
  std::string getFullName();
  
  Customer(std::string firstName, std::string lastName);
  ~Customer();
};
