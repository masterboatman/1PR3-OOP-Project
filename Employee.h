#pragma once
#include <string>
using namespace std;

class Employee
{
private:

	//Non-calculated member variables
	string m_name;
	int m_code;
	string m_designation;
	int m_exp;
	int m_age;
	double m_salary;
	char m_AnyLoan;

	//Calculated member variables
	double m_HealthBonus;
	double m_savings;
	double m_tax;
	double m_MealAllowance;
	double m_TransportAllowance;
	double m_MedicalAllowance;
	double m_LoanBalance;
	double m_LoanDebit;
	double m_grosspay;
	double m_InflationAllowance;

public:
	//A billion accesors and mutators
	void setName(string name) { m_name = name; }
	string getName() { return m_name; }
	
	void setCode(int code) { m_code = code; }
	int getCode() { return m_code; }

	void setDesignation(string designation) { m_designation = designation; }
	string getDesignation() { return m_designation; }

	void setExp(int exp) { m_exp = exp; }
	int getExp() { return m_exp; }

	void setAge(int age) { m_age = age; }
	int getAge() { return m_age; }

	void setSalary(double salary) { m_salary = salary; }
	double getSalary() { return m_salary; }

	void setAnyLoan(char anyLoan) { m_AnyLoan = anyLoan; }
	char getAnyLoan() { return m_AnyLoan; }

	void setHealthBonus(double healthBonus) { m_HealthBonus = healthBonus; }
	double getHealthBonus() { return m_HealthBonus; }

	void setSavings(double savings) { m_savings = savings; }
	double getSavings() { return m_savings; }

	void setTax(double tax) { m_tax = tax; }
	double getTax() { return m_tax; }

	void setMealAllowance(double mealAllowance) { m_MealAllowance = mealAllowance; }
	double getMealAllowance() { return m_MealAllowance; }

	void setTransportAllowance(double transportAllowance) { m_TransportAllowance = transportAllowance; }
	double getTransportAllowance() { return m_TransportAllowance; }

	void setMedicalAllowance(double medicalAllowance) { m_MedicalAllowance = medicalAllowance; }
	double getMedicalAllowance() { return m_MedicalAllowance; }

	void setLoanBalance(double loanBalance) { m_LoanBalance = loanBalance; }
	double getLoanBalance() { return m_LoanBalance; }

	void setLoanDebit(double loanDebit) { m_LoanDebit = loanDebit; }
	double getLoanDebit() { return m_LoanDebit; }

	void setGrossPay(double grossPay) { m_grosspay = grossPay; }
	double getGrossPay() { return m_grosspay; }

	void setInflationAllowance(double inflationAllowance) { m_InflationAllowance = inflationAllowance; }
	double getInflationAllowance() { return m_InflationAllowance; }


	//Default constructor
	Employee();
	//Non-Default Constructor
	Employee(string name, int code, string designation,
		int exp, int age, double salary, char AnyLoan, double HealthBonus, double savings,
		double tax, double MealAllowance, double TransportAllowance, double MedicalAllowance, double LoanBalance,
		double LoanDebit, double grosspray, double InflationAllowance);

};

