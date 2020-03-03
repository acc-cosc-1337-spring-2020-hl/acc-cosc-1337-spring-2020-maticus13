#include "bank_account.h"
#include<iostream>
using std::cout; 

int main()
{
	BankAccount account(500);
	int balance = account.get_balance();
	cout << "Balance: " << balance;

	try
	{
		account.deposit(-10);
	}
	catch(InvalidAmount e)
	{
		cout << e.get_message;
	}
	return 0;
}