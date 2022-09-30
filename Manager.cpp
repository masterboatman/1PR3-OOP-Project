#include "Manager.h"
#include <string>
using namespace std;

//Default constructor with base class Employee
Manager::Manager() : Employee()
{
	m_IsManager = false;
}

//Non-default constructor with base class employee
Manager::Manager(bool IsManager, string name, int code, string designation,
	int exp, int age, double salary, char AnyLoan, double HealthBonus, double savings,
	double tax, double MealAllowance, double TransportAllowance, double MedicalAllowance, double LoanBalance,
	double LoanDebit, double grosspray, double InflationAllowance) : Employee (name, code, designation,
		exp, age, salary, AnyLoan, HealthBonus, savings,
		  tax, MealAllowance, TransportAllowance, MedicalAllowance, LoanBalance,
		  LoanDebit, grosspray, InflationAllowance)
{
	m_IsManager = IsManager;
}