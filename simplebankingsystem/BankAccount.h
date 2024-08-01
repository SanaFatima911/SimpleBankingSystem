#include <iostream>
using namespace std;

#include <string>
class BankAccount {
	string AccountHoldername;
	int accountnumber;
	double accountbalance;
public:
	BankAccount(string name,int number,double balance)  // constructor
	{
		AccountHoldername = name;
		accountnumber= number;
		accountbalance = balance;
	}
	void deposit(double amount)
	{
		accountbalance+=amount;
	}
	void withdraw(double amount)
	{
		if(accountbalance>=amount)
			accountbalance-=amount;
		else
			cout<<"insufficient balance"<<endl;
	}
	double getaccountbalance()
	{
		return accountbalance;

	}
	void display()
	{
		cout<<"AccountHolder name ="<<AccountHoldername<<endl;
		cout<<"Accountnumber ="<<accountnumber<<endl;
		cout<<" Current balance ="<<accountbalance<<endl;

	}
	int getaccountnumber()
	{
		return accountnumber;

	}
};
