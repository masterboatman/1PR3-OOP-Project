#include "Validator.h"
#include <string>
using namespace std;

//Default constructor
Validator::Validator() 
{
	m_ccNumber = "";
	m_bank = "";
	m_expYear = 0;
}

//Non-default constructor
Validator::Validator(string ccNumber, string bank, int expYear)
{
	m_ccNumber = ccNumber;
	m_bank = bank;
	m_expYear = expYear;
}

bool Validator::isNum(const string& numInQ)
{
	//Determines length
	int stringLength = numInQ.length();
	//Makes sure has num digits
	for (int ele = 0; ele < stringLength; ele++)
	{
		if (numInQ[ele] < '0' || numInQ[ele] > '9') return false;
	}
	return true;
}

string Validator::Validate()
{
	//Variable declaration & initialization
	//Length var equal to length of credit number
	int length = m_ccNumber.length(), LuhnVar = 0;

	//1: double every 2nd dig from right. if 2dig number add digs. then sum all answers to get var
	for (int dig = length; dig >= 0; dig -= 2)
	{
		int calc = ((m_ccNumber[dig] - 48) * 2);

		if (calc > 9)
		{
			calc = (calc / 10) + (calc % 10);
		}
		LuhnVar += calc;
	}

	//2: add every odd placed dig from right to var
	for (int dig = length; dig >= 0; dig -= 2)
	{
		LuhnVar += (m_ccNumber[dig] - 48);
	}

	//2.5: Check if expYear is greater/equal than current year
	time_t now = time(0);
	struct tm t;
	localtime_s(&t, &now);
	int curYear = 1900 + t.tm_year;
	//3: check final var is a multiple of 10, if yes valid, else invalid
	if (LuhnVar % 10 == 0 && m_expYear >= curYear)
	{
		return "Valid & In Date!";
	}
	else if (LuhnVar % 10 == 0 && m_expYear < curYear)
	{
		return "Valid & Out of Date!";
	}
	else if (LuhnVar % 10 != 0 && m_expYear >= curYear)
	{
		return "Invalid & In Date!";
	}
	else
		return "Invalid!";
}

