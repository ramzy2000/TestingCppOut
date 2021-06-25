#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Enums.h"

struct Employee
{
	int id{};
	int age{};
	double wage{};

	void test();

private:
	void printEmployeeInfo(Employee employee);
};

namespace Employee_Data
{
	inline constexpr Employee Casey_Duffy{ 340, 20, 15 };
}

#endif