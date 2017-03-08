#include "Account.h"

Account::Account(Customer customer, int accountNumber) : _accountOwner(customer), _accountNumber(accountNumber)
{
  
}
Account::~Account()
{
  
}

std::string Account::GetAccountInfo()
{
  return _accountOwner.getName();
}

bool Account::Deposit(int pennies)
{
  if (pennies > 0)
	 {
		_transactionlog->push(_accountOwner.getName() + " deposited $" + std::to_string(pennies/100));
		_balance += pennies;
		return true;
	 }
  return false;
}

bool Account::Withdraw(int pennies)
{
  if (pennies > 0)
	 {
		_balance -= pennies;
		_transactionlog->push(_accountOwner.getName() + "withdrew $" + std::to_string(pennies/100));
		return true;
	 }
  return false;
}

int Account::GetBalanceInPennies()
{
  return _balance;
}

std::string Account::ShowTransactionLog()
{
  std::string output = "Transaction Log \n";
  while(!_transactionlog->empty())
	 {
		output += _transactionlog->front() + "\n";
		_transactionlog->pop();
	 }
  return output;
}
