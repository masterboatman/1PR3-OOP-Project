#pragma once
#include <iostream>
#include <fstream>
#include <cstring>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <iomanip>
#include <cctype>
#include "Employee.h"
#include "Manager.h"
using namespace std;

class UI
{
private:
	int num = 0;
	Employee m_employee[25];
	Employee m_temp[25];
	Manager m_manager[25];

public:
	//Member variable methods
	void setEmployee(Employee emp) { *m_employee = emp; }
	void setManager(Manager mana) { *m_manager = mana; }
	void setTemp(Employee temp) { *m_temp = temp; }
	void decrease();

	//UI methods
	void delay(int seconds);
	void login();
	void setWindowSize();
	void gotoXY(int X, int Y);
	void borderNoDelay();
	void border();
	void intro();
	void loading();
	void menu();
	void editmenu();
	void validate();
	void insert();
	void displayPayslip();
	void edit();
	void editsalary(int i);
	void editage(int i);
	void editexp(int i);
	void editdes(int i);
	void editcode(int i);
	void editname(int i);
	void search();
	void deletes();
	void saverecords();
	void list();
	void getrecords();
	bool isFilePresent();
};
