#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
	Employee Employee1("John", 24, "4302426456", 234, 24.5);
	Employee1.printEmployeeInfor();
	Employee1.calculateSalaryPerMonth();
	cout << endl;
	Manager Manager1("Heley", 35, "9302451006", 435, true);
	Manager1.printManagerInfor();
	Manager1.bePromoted();
	cout << endl;

	Customer Customer1("Mia", 44, "1234567890", false, "Skirt");
	Customer1.printCustomerInfor();
	Customer1.haveDiscount();
	

	return 0;
}