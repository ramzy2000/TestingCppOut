#include "Employee.h"

void Employee::test()
{
	printEmployeeInfo(Employee_Data::Casey_Duffy);
}


void Employee::printEmployeeInfo(Employee employee)
{
	std::cout << "ID: " << employee.id << '\n';
	std::cout << "Age: " << employee.age << '\n';
	std::cout << "Wage: " << employee.wage << '\n';
}