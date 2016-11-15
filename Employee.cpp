#include "Employee.h"

Employee::Employee()
{
	address = 12345;
	city = "N/A";
	state = "N/A";
	socialSecurity = 123456789;
	salary = 0;
}

string Employee::getAddress() const
{
	return address;
}

int Employee::getSocialSecurity() const
{
	return socialSecurity;
}

double Employee::getSalary() const
{
	return salary;
}

void Employee::setAddress(const string& newAddress, const string& newCity, const string& newState)
{
	address = newAddress;
	city = newCity;
	state = newState;
}

void Employee::setSocialSecurity(const int newSocialSecurity)
{
	socialSecurity = newSocialSecurity;
}

void Employee::setSalary(const double newSalary)
{
	salary = newSalary;
}

void Employee::printEmployeeInfo() const
{
	printName();
	cout << address << ' ' << city << ' ' << state << '\n';
	string socialSecurityParse = to_string(socialSecurity);

}

Employee::~Employee()
{

}