/*Payroll Managment System*/

//_getch() warning ignore
#pragma warning(disable: 6031)

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
#include "Validator.h"
#include "UI.h"

using namespace std;

int main()
{
	//Class Creations
	UI ui;
	Employee* Emps = new Employee[25];
	Employee* TempEmps = new Employee[25];
	Manager* Manas = new Manager[25];

	//Calls setters
	ui.setEmployee(*Emps);
	ui.setManager(*Manas);
	ui.setTemp(*TempEmps);

	//Method calls to setup UI
	ui.setWindowSize();
	ui.border();
	ui.intro();
	ui.loading();
	ui.login();
	ui.menu();
	ui.getrecords();
	//Char declaration
	char option;

	//Decreases num counter if employee with 0 exists
	if (Emps[0].getCode() == 0 && ui.isFilePresent()) ui.decrease();

	//Menu choices (Not Menu Display)
	//Each option calls its respective function
	while (1)
	{
		option = _getch();
		switch (option)
		{
		case 'l':
			ui.list();
			break;
		case 'i':
			ui.insert();
			break;
		case 'd':
			ui.deletes();
			break;
		case 'e':
			ui.edit();
			break;
		case 's':
			ui.search();
			break;
		case 'p':
			ui.displayPayslip();
			break;
		case 'v':
			ui.validate();
			break;
		case 'q':
			ui.saverecords();
			//Ends program
			exit(0);
		}
		ui.menu();
	}

	return 0;
}
