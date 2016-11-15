#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"

using namespace std;

class Employee: public Person
{
public:
	Employee();
	string getAddress() const;
	int getSocialSecurity() const;
	double getSalary() const;
	void setAddress(const string& newAddress, const string& newCity, const string& newState);
	void setSocialSecurity(const int newSocialSecurity);
	void setSalary(const double newSalary);
	void printEmployeeInfo() const;

	~Employee();
private:
	string address, city, state;
	int socialSecurity;
	double salary;
};
#endif // !EMPLOYEE_H