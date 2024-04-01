#include "Person.h"

Person::Person()
{
	name = "no name";
	age = 0;
	phoneNumber = "00000000";
}

Person::Person(string n, int a, string number)
{
	name = n;
	age = a;
	phoneNumber = number;
}

Employee::Employee()
{
	name = "no name";
	age = 0;
	phoneNumber = "00000000";
	employeeNumber = 0;
	hourlyPay = 0;
}

Employee::Employee(string n, int a, string number, int employNum, float hp)
{
	name = n;
	age = a;
	phoneNumber = number;
	employeeNumber = employNum;
	hourlyPay = hp;
}

void Employee::printEmployeeInfor()
{
	cout << "The Employee's name is : " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Phone number is: " << phoneNumber << endl;
}

void Employee::calculateSalaryPerMonth()
{
	salary = hourlyPay * hourWorkingPerDay * dayWorkingPerMonth;
	cout << "Salary per month of the Employee number " << employeeNumber << " is " << salary << endl;
}

Customer::Customer(string n, int a, string number, bool royalty, string item)
{
	name = n;
	age = a;
	phoneNumber = number;
	isRoyalty = royalty;
	itemsPurchase = item;
}

void Customer::printCustomerInfor()
{
	cout << "The customer's name is : " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Phone number is: " << phoneNumber << endl;
}

void Customer::haveDiscount()
{
	if (isRoyalty)
	{
		cout << "The customer who bought " << itemsPurchase << " has discount!" << endl;
	}
	else {
		cout << "The customer who bought " << itemsPurchase << " doesn't have discount!" << endl;
	}
}

Manager::Manager(string n, int a, string number, int employNum, bool KPI)
{
	name = n;
	age = a;
	phoneNumber = number;
	employeeNumber = employNum;
	meetKPI = KPI;

}

void Manager::printManagerInfor()
{
	cout << "The Manager's name is : " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Phone number is: " << phoneNumber << endl;
}

void Manager::bePromoted()
{
	if (meetKPI)
	{
		cout << "The manager with the Employee number " << employeeNumber << " will be promoted!Congrat!!" << endl;
	}
	else {
		cout << "The manager with the Employee number " << employeeNumber << " failed to meet the required KPI, no promoted!" << endl;
	}
}
