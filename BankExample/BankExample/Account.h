#pragma once
#include "Customer.h"
#include <queue>
class Account
{
private:
  int _accountNumber;
  int _balance = 0;
  Customer _accountOwner;
  std::queue<std::string> *_transactionlog = new std::queue<std::string>();
public:
  Account(Customer customer, int accountNumber);
  ~Account();
  
  std::string GetAccountInfo();
  bool Deposit(int pennies);
  bool Withdraw(int pennies);
  int GetBalanceInPennies();
  std::string ShowTransactionLog();
};
