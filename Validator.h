#pragma once
#include <string>
#include <ctime>
using namespace std;

class Validator
{
private:
	//Member variables
	string m_ccNumber;
	string m_bank;
	int m_expYear;

public:
	//Default Constructor
	Validator();
	//Non-Default Constructor
	Validator(string ccNumber, string bank, int expYear);
	
	//Accesors
	void setccNumber(string ccNumber) { m_ccNumber = ccNumber; }
	void set(string bank) { m_bank = bank; }
	void set(int expYear) { m_expYear = expYear; }
	//Mutators
	string getccNumber() { return m_ccNumber; }
	string getBank() { return m_bank; }
	int getExpYear() { return m_expYear; }

	//Method to check if string is all numbers
	bool isNum(const string& numInQ);

	//Validator method using Luhn algorith
	string Validate();
};

