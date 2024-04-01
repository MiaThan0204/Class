#pragma once
#include <iostream>

using namespace std;

class Person
{
public:
	string name;
	int age;
	string phoneNumber;
	Person();
	Person(string n, int a, string number);
};
class Employee: public Person
{
private:
	float hourlyPay;
	double salary;
	int hourWorkingPerDay = 8;
	int dayWorkingPerMonth = 26;
public:
	int employeeNumber;

	Employee();
	Employee(string n, int a, string number, int employNum, float hp);
	void printEmployeeInfor();
	void calculateSalaryPerMonth();
};
class  Customer :public Person
{
private:
	bool isRoyalty;
	string itemsPurchase;
public:
	Customer(string n, int a, string number, bool royalty, string item);
	void printCustomerInfor();
	void haveDiscount();
};
class Manager :public Employee
{
private:
	bool meetKPI;
public:
	Manager(string n, int a, string number, int employNum, bool KPI);
	void printManagerInfor();
	void bePromoted();
};

