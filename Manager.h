#pragma once
#include "Employee.h"
using namespace std;

//CHILD CLASS OF EMPLOYEE

class Manager :
    public Employee
{
private:
    //Member variable
    bool m_IsManager = false;
public:
    //Mutator & accessor
    void setIsManager(bool IsManager) { m_IsManager = IsManager; }
    bool getIsManager() { return m_IsManager; }

    //Default constructor
    Manager();
    //Non-Default constructor
	Manager(bool IsManager, string name, int code, string designation,
		int exp, int age, double salary, char AnyLoan, double HealthBonus, double savings,
		double tax, double MealAllowance, double TransportAllowance, double MedicalAllowance, double LoanBalance,
		double LoanDebit, double grosspray, double InflationAllowance);
};


