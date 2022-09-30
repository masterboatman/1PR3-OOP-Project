#include "Employee.h"
#include <string>
using namespace std;

//Default Constuctor
Employee::Employee()
{
	//Non-calculated
	m_name = "";
	m_code = 0;
	m_designation = "";
	m_exp = 0 ;
	m_age = 0 ;
	m_salary = 0.0;
	m_AnyLoan = 'N';

	//Calculated
	m_HealthBonus = 0.0;
	m_savings = 0.0;
	m_tax = 0.0;
	m_MealAllowance = 0.0;
	m_TransportAllowance = 0.0;
	m_MedicalAllowance = 0.0;
	m_LoanBalance = 0.0;
	m_LoanDebit = 0.0;
	m_grosspay = 0.0;
	m_InflationAllowance = 0.0;

}

//Non-default constructor
Employee::Employee(string p_name, int p_code, string p_designation,
	int p_exp, int p_age, double p_salary, char p_AnyLoan, double p_HealthBonus, double p_savings,
	double p_tax, double p_MealAllowance, double p_TransportAllowance, double p_MedicalAllowance, double p_LoanBalance,
	double p_LoanDebit, double p_grosspay, double p_InflationAllowance)
{
	//Non-Calculated
	m_name = p_name;
	m_code = p_code;
	m_designation = p_designation;
	m_exp = p_exp;
	m_age = p_age;
	m_salary = p_salary;
	m_AnyLoan = p_AnyLoan;

	//Calculated
	m_HealthBonus = p_HealthBonus;
	m_savings = p_savings;
	m_tax = p_tax;
	m_MealAllowance = p_MealAllowance;
	m_TransportAllowance = p_TransportAllowance;
	m_MedicalAllowance = p_MedicalAllowance;
	m_LoanBalance = p_LoanBalance;
	m_LoanDebit = p_LoanDebit;
	m_grosspay = p_grosspay;
	m_InflationAllowance = p_InflationAllowance;
}
