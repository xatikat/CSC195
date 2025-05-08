#include "Employee.h"
using namespace std;

const float Employee::TAX_RATE = 0.1f;

void Employee::read() 
{
	cout << "enter name: ";
	cin >> name;
	
	cout << "enter age: ";
	cin >> age;

	cout << "enter zipcode: ";
	cin >> zipcode;

	cout << "enter hourly wage: ";
	cin >> wage;

	cout << "enter hours worked this week: ";
	cin >> hoursWorked;
}

void Employee::write()
{
	float weeklyGross = wage * hoursWorked;
	float weeklyTax = weeklyGross * TAX_RATE;
	float weeklyNet = weeklyGross - weeklyTax;
	float yearlyGross = weeklyGross * 52;
	float yearlyNet = yearlyGross - (yearlyGross * TAX_RATE);

	cout << "\nEmployee Payroll Information\n";
	cout << "============================\n";
	cout << "Name: " << name << "\n";
	cout << "Age: " << age << "\n";
	cout << "Zipcode: " << zipcode << "\n";
	cout << "Hourly Wage: " << wage << "\n";
	cout << "Hours Worked: " << hoursWorked << "\n";
	cout << "Weekly Gross Pay: $" << weeklyGross << "\n";
	cout << "Weekly Net Pay: $" << weeklyNet << "\n";
	cout << "Yearly Gross Pay: $" << yearlyGross << "\n";
	cout << "Yearly Net Pay: $" << yearlyNet << "\n";
}