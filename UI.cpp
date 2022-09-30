#pragma warning(disable: 6031)
#include "UI.h"
#include "Employee.h"
#include "Manager.h"
#include "Validator.h"

//Decreases num by 1
void UI::decrease() 
{
	num--;
}

//Creates time delay
void UI::delay(int seconds)
{
	long wait = seconds + (clock());
	while (wait > (clock()));
}

//Login Function
void UI::login()
{
	//Variable declaration
	string username, password;
	system("cls");
	borderNoDelay();

	//Username acceptance
	gotoXY(25, 10);
	cout << "Enter Username: ";
	cin >> username;

	//Password acceptance
	gotoXY(25, 12);
	cout << "Enter Password: ";
	cin >> password;

	//Validates credentials
	if (username == "admin" && password == "Password")
	{
		//Border
		system("cls");
		borderNoDelay();

		gotoXY(27, 10);
		cout << "Login Success!!!";
		gotoXY(20, 12);
		cout << "Will be redirected in 3 Seconds...";
		gotoXY(12, 12);
		delay(1000);
		gotoXY(43, 12);
		cout << "\b \b2";
		gotoXY(12, 12);
		delay(1000);
		gotoXY(43, 12);
		cout << "\b \b1";
		gotoXY(12, 12);
		delay(1000);
	}
	//Wrong password
	else
	{
		//Border
		system("cls");
		borderNoDelay();

		gotoXY(27, 10);
		cout << "Access Denied!!!\a";
		gotoXY(20, 12);
		cout << "Will be redirected in 3 Seconds...";
		gotoXY(12, 12);
		delay(1000);
		gotoXY(43, 12);
		cout << "\b \b2";
		gotoXY(12, 12);
		delay(1000);
		gotoXY(43, 12);
		cout << "\b \b1";
		gotoXY(12, 12);
		delay(1000);

		//Formats to run again
		system("cls");
		borderNoDelay();
		login();
	}
}

//Window size formatting
void UI::setWindowSize()
{
	int width = 510, height = 340;

	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}

//Function for changing location of print in console
void UI::gotoXY(int X, int Y)
{
	//Coordinate structure
	COORD coordinates;
	coordinates.X = X;
	coordinates.Y = Y;
	//Sets console position to coordinates
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

//Creates immediate UI border
void UI::borderNoDelay()
{
	//int xLen1 = 2, int yLen1 = 2, int xLen2 = 76, int yLen2 = 24;
	int xLen1 = 2, yLen1 = 2, xLen2 = 76, yLen2 = 24;
	system("cls");

	//Corners
	gotoXY(xLen1, yLen1);
	cout << (char)201;
	gotoXY(xLen1, yLen2);
	cout << (char)200;

	//Top & bot line
	for (int i = xLen1 + 1; i <= xLen2 - 1; i++)
	{
		gotoXY(i, yLen1);
		cout << (char)205;
		gotoXY(i, yLen2);
		cout << (char)205;
	}

	//Corners
	gotoXY(xLen2, yLen1);
	cout << (char)187;
	gotoXY(xLen2, yLen2);
	cout << (char)188;

	//Left & right line
	for (int i = yLen1 + 1; i <= yLen2 - 1; i++)
	{
		gotoXY(xLen1, i);
		cout << (char)186;
		gotoXY(xLen2, i);
		cout << (char)186;
	}
	cout << ("\n\n");
}

//Creates UI border
void UI::border()
{
	int xLen1 = 2, yLen1 = 2, xLen2 = 76, yLen2 = 22;
	system("cls");

	//Corners
	gotoXY(xLen1, yLen1);
	cout << (char)201;
	gotoXY(xLen1, yLen2);
	cout << (char)200;

	//Top & bot line
	for (int i = xLen1 + 1; i <= xLen2 - 1; i++)
	{
		delay(15);
		gotoXY(i, yLen1);
		cout << (char)205;
		//puts(style);
		gotoXY(i, yLen2);
		//puts(style);
		cout << (char)205;
	}

	//Corners
	gotoXY(xLen2, yLen1);
	cout << (char)187;
	gotoXY(xLen2, yLen2);
	cout << (char)188;

	//Left & right line
	for (int i = yLen1 + 1; i <= yLen2 - 1; i++)
	{
		delay(15);
		gotoXY(xLen1, i);
		cout << (char)186;
		//puts(style);
		gotoXY(xLen2, i);
		cout << (char)186;
		//puts(style);
	}
	cout << ("\n\n");
}

//Intro screen
void UI::intro()
{
	//Outputs
	gotoXY(23, 9); cout << "C++ OOP PAYROLL MANAGEMENT SYSTEM";
	gotoXY(22, 10); cout << "-----------------------------------";
	gotoXY(25, 20); cout << "Press Any key to continue...";
	_getch();
}

//Loading screen
void UI::loading()
{
	//Formatting
	system("cls");
	borderNoDelay();
	gotoXY(35, 12);
	cout << "Loading...";
	gotoXY(30, 13);

	//Loading blocks
	for (int i = 0; i < 20; i++)
	{
		delay(200);
		cout << (char)223;
	}
}

//Main Menu UI
void UI::menu()
{
	//Outputs menu options
	borderNoDelay();
	gotoXY(21, 4);
	cout << "----- Employee Payroll Manager -----";
	gotoXY(12, 6);
	cout << "Press 'i' to insert New Record.";
	gotoXY(12, 8);
	cout << "Press 'e' to edit a Record.";
	gotoXY(12, 10);
	cout << "Press 'd' to delete a Record.";
	gotoXY(12, 12);
	cout << "Press 's' to search a Record.";
	gotoXY(12, 14);
	cout << "Press 'l' to list The Employee Table.";
	gotoXY(12, 16);
	cout << "Press 'p' to print Employee PaySlip.";
	gotoXY(12, 18);
	cout << "Press 'v' to validate Employee Card.";
	gotoXY(12, 20);
	cout << "Press 'q' to quit Program.";
	gotoXY(16, 22);
	cout << "Select Your Option: ";
}

//Menu to edit employee
void UI::editmenu()
{
	//Output choices
	borderNoDelay();
	gotoXY(28, 4);
	cout << "Edit An Entry";
	gotoXY(10, 6);
	cout << "What Do You Want To edit?";
	gotoXY(12, 8);
	cout << "n: Name";
	gotoXY(12, 9);
	cout << "c: Code";
	gotoXY(12, 10);
	cout << "d: Designation";
	gotoXY(12, 11);
	cout << "e: Experience";
	gotoXY(12, 12);
	cout << "a: Age";
	gotoXY(12, 13);
	cout << "s: Salary";
	gotoXY(12, 14);
	cout << "q: QUIT";
	gotoXY(10, 16);
	cout << "Enter Choice: ";
}

//Reads employees from file
void UI::getrecords()
{
	//Opens file
	fstream readFile;
	readFile.open("Records.txt", ios::in);
	int countEmp = 0;

	//Reads
	if (readFile.is_open())
	{
		//Reads until end of file
		while (!readFile.eof())
		{
			//temp var declaration
			string tempName = "";
			int tempCode = 0;
			string tempDesignation = "";
			int tempExp = 0;
			int tempAge = 0;
			double tempSalary = 0.0;
			char tempAnyLoan = 'N';
			bool tempIsManager = false;

			//Calculated
			double tempHealthBonus = 0.0;
			double tempSavings = 0.0;
			double tempTax = 0.0;
			double tempMealAllowance = 0.0;
			double tempTransportAllowance = 0.0;
			double tempMedicalAllowance = 0.0;
			double tempLoanBalance = 0.0;
			double tempLoanDebit = 0.0;
			double tempGrosspay = 0.0;
			double tempInflationAllowance = 0.0;

			//Reads all from file
			readFile >> tempName >> tempCode >> tempDesignation >> tempExp >> tempAge >> tempSalary >> tempAnyLoan >> tempHealthBonus >> tempSavings >> tempTax
				>> tempMealAllowance >> tempTransportAllowance >> tempMedicalAllowance >> tempLoanBalance >> tempLoanDebit >> tempGrosspay >> tempInflationAllowance >> tempIsManager;

			//Sets employee
			Employee emp(tempName, tempCode, tempDesignation,
				tempExp, tempAge, tempSalary, tempAnyLoan, tempHealthBonus, tempSavings,
				tempTax, tempMealAllowance, tempTransportAllowance, tempMedicalAllowance, tempLoanBalance,
				tempLoanDebit, tempGrosspay, tempInflationAllowance);
			m_employee[countEmp] = emp;

			//Calls mutators for managers if manager
			if (tempIsManager == true)
			{
				//Calls mutators
				Manager mana(tempIsManager, tempName, tempCode, tempDesignation,
					tempExp, tempAge, tempSalary, tempAnyLoan, tempHealthBonus, tempSavings,
					tempTax, tempMealAllowance, tempTransportAllowance, tempMedicalAllowance, tempLoanBalance,
					tempLoanDebit, tempGrosspay, tempInflationAllowance);
				m_manager[countEmp] = mana;
			}

			//Increments employee
			countEmp++;
		}
		//Sets global var to # of employees found
		num = countEmp;
	}
	//Closes files
	readFile.close();
}

//Writes employeeloyees to file
void UI::saverecords()
{
	//Deletes file if no employees
	if (num == 0) system("del Records.txt");
	//Else saves to file
	else
	{
		//Opens files
		fstream writeFile;
		writeFile.open("Records.txt", ios::out | ios::trunc);

		//Writes employee data to file
		for (int index = 0; index < num; index++)
		{
			writeFile << m_employee[index].getName() << "\t" << m_employee[index].getCode() << "\t" << m_employee[index].getDesignation() << "\t" << m_employee[index].getExp()
				<< "\t" << m_employee[index].getAge() << "\t" << m_employee[index].getSalary() << "\t" << m_employee[index].getAnyLoan() << "\t" << m_employee[index].getHealthBonus()
				<< "\t" << m_employee[index].getSavings() << "\t" << m_employee[index].getTax() << "\t" << m_employee[index].getMealAllowance() << "\t" << m_employee[index].getTransportAllowance()
				<< "\t" << m_employee[index].getMedicalAllowance() << "\t" << m_employee[index].getLoanBalance() << "\t" << m_employee[index].getLoanDebit() << "\t" << m_employee[index].getGrossPay()
				<< "\t" << m_employee[index].getInflationAllowance() << "\t" << m_manager[index].getIsManager() << "\n";
		}
		//Closes file
		writeFile.close();
	}
}

//Checks to see if record file exists
bool UI::isFilePresent()
{
	ifstream infile("Records.txt");
	//Checks if no error has occured and I/O is available
	return infile.good();
}

//Lists employees stored
void UI::list()
{
	//Formatting Output
	borderNoDelay();
	gotoXY(20, 4);
	cout << " ******** List of the Employees ******** ";
	gotoXY(6, 6);
	cout << "Name\tCode\tDesignation\tYears(EXP)\tAge\tSalary " << endl;
	gotoXY(6, 7);
	cout << "------------------------------------------------------------------" << endl;

	//employee output
	for (int i = 0, j = 8; i <= num - 1; i++, j++)
	{
		gotoXY(6, j);
		cout << m_employee[i].getName();
		gotoXY(19, j);
		cout << m_employee[i].getCode();
		gotoXY(26, j);
		cout << m_employee[i].getDesignation();
		gotoXY(47, j);
		cout << m_employee[i].getExp();
		gotoXY(58, j);
		cout << m_employee[i].getAge();
		gotoXY(66, j);
		cout << m_employee[i].getGrossPay();
	}

	//Waits for user input
	_getch();
}

//Deletes a record
void UI::deletes()
{
	/*Deletion works by assigning tempemployee with values of employee
	* then reassigning employee with tempemployee values, skipping
	* requested deleted one*/

	//Assigns temp with employee objects
	for (int i = 0; i < num; i++)
	{
		m_temp[i] = m_employee[i];
	}

	//Outputs & inputs
	borderNoDelay();
	int code, check = -1;
	gotoXY(28, 4);
	cout << "Delete a Record?";
	gotoXY(10, 6);
	cout << "Enter the Code To Delete That Record: ";
	cin >> code;

	//Deletion mechanism
	int i, j;
	for (i = 0; i <= num - 1; i++)
	{
		//Loops & finds requested one
		if (m_employee[i].getCode() == code) check = i;
	}
	if (check != -1)
	{
		for (i = 0, j = 0; i <= num - 1; i++, j++)
		{
			//Reassigns to remove requested
			if (i == check) i++;
			m_employee[j] = m_temp[i];
		}
		//Decreases global number of employees
		num--;
	}
}

//Searches for employee
void UI::search()
{
	borderNoDelay();
	int jobcode;
	bool found = false;

	//Formatting & employee specification
	gotoXY(10, 4);
	cout << "You can Search only through the Jobcode of an Employee";
	gotoXY(10, 6);
	cout << "Enter Code Of the Employee: ";
	cin >> jobcode;

	//Outputs record
	for (int i = 0; i <= num - 1; i++)
	{
		if (m_employee[i].getCode() == jobcode)
		{
			gotoXY(6, 8);
			cout << "Name\tCode\tDesignation\tYears(EXP)\tAge\tSalary " << endl;
			gotoXY(6, 9);
			cout << "------------------------------------------------------------------" << endl;
			gotoXY(6, 11);
			cout << m_employee[i].getName();
			gotoXY(19, 11);
			cout << m_employee[i].getCode();
			gotoXY(26, 11);
			cout << m_employee[i].getDesignation();
			gotoXY(47, 11);
			cout << m_employee[i].getExp();
			gotoXY(58, 11);
			cout << m_employee[i].getAge();
			gotoXY(66, 11);
			cout << m_employee[i].getGrossPay();
			found = true;
		}
	}
	//Outputs lack of record
	if (!found)
	{
		gotoXY(26, 11);
		cout << "No records Found...!!!\a";
	}

	//User input
	_getch();
}

//Edits name
void UI::editname(int i)
{
	//Var declaration
	string editName;

	//Outputs
	gotoXY(10, 18);
	cout << "Enter New Name: ";
	cin >> editName;

	//Sets value
	m_employee[i].setName(editName);
}

//Edits code
void UI::editcode(int i)
{
	//Var declaration
	int editCode;

	//Outputs
	gotoXY(10, 18);
	cout << "Enter New Job Code: ";
	cin >> editCode;

	//Sets value
	m_employee[i].setCode(editCode);
}

//Edits description
void UI::editdes(int i)
{
	//Var declaration
	string editDesignation;

	//Outputs
	gotoXY(10, 18);
	cout << "enter new designation: ";
	cin >> editDesignation;

	//Sets value
	m_employee[i].setDesignation(editDesignation);
}

//Edits experience
void UI::editexp(int i)
{
	//Var declaration
	int currentExp = 0;

	//Outputs
	gotoXY(10, 18);
	cout << "Enter new Years of Experience: ";
	cin >> currentExp;

	//Sets value
	m_employee[i].setExp(currentExp);
}

//Edits age
void UI::editage(int i)
{
	//Var declaration
	int editAge;

	//Outputs
	gotoXY(10, 18);
	cout << "Enter new Age: ";
	cin >> editAge;

	//Sets value
	m_employee[i].setAge(editAge);
}

//Allows user to edit salary
void UI::editsalary(int i)
{
	//Variable definition
	double sal, save, TAX, HBonus, MealA, MedicalA, TransportA, LoanBal = m_employee[i].getLoanBalance(), LoanDeb, IA;
	char loan = 0;

	//New salary input
	gotoXY(10, 18);
	cout << "Enter new Salary: ";
	cin >> sal;

	//Monetary calculations
	IA = 1.20 * sal;
	TAX = 0.13 * sal;
	save = 0.12 * sal;
	HBonus = 4000;
	MealA = 300;
	MedicalA = 300;
	TransportA = 300;
	LoanDeb = sal * 0.09;

	//Debt into balance
	if (LoanDeb > LoanBal)
	{
		LoanBal = 0;
		LoanDeb = LoanBal;
	}

	//Sets values
	m_employee[i].setSalary(sal);
	m_employee[i].setTax(TAX);
	m_employee[i].setSavings(save);
	m_employee[i].setHealthBonus(HBonus);
	m_employee[i].setMealAllowance(MealA);
	m_employee[i].setMedicalAllowance(MedicalA);
	m_employee[i].setTransportAllowance(TransportA);
	m_employee[i].setLoanBalance(LoanBal);
	m_employee[i].setAnyLoan(loan);
	m_employee[i].setLoanDebit(LoanDeb);
	m_employee[i].setGrossPay((sal + MealA + MedicalA + TransportA + HBonus + IA) - (save + TAX + LoanDeb));
}

//Edits code
void UI::edit()
{
	//Border output
	borderNoDelay();
	int jobcode;

	//Outputs
	gotoXY(28, 4);
	cout << "Edit a Record";
	int i;
	char choice;
	gotoXY(10, 6);
	cout << "Enter the jobcode To Edit: ";
	cin >> jobcode;

	//Chooses what to edit
	editmenu();
	for (i = 0; i <= num - 1; i++)
	{
		if (m_employee[i].getCode() == jobcode)
		{
			//While no q (which quits)
			//Calls edit functions
			while ((choice = cin.get()) != 'q')
			{
				switch (choice)
				{
				case 'n':
					editname(i);
					break;
				case 'c':
					editcode(i);
					break;
				case 'd':
					editdes(i);
					break;
				case 'e':
					editexp(i);
					break;
				case 'a':
					editage(i);
					break;
				case 's':
					editsalary(i);
					break;
				}
				editmenu();
			}
		}
	}
}

//Displays employee pays
void UI::displayPayslip()
{
	//UI formatting
	system("cls");
	borderNoDelay();
	gotoXY(10, 4);
	int code, i;

	//Acceptance for which employee to output
	cout << "Enter Employee Job Code: ";
	cin >> code;

	//Loops to find correct employee
	for (i = 0; i <= num - 1; i++)
	{
		if (m_employee[i].getCode() == code)
		{
			//Outputs monetary values by accesors
			gotoXY(10, 6);
			cout << "Name: " << m_employee[i].getName();
			gotoXY(45, 6);
			gotoXY(10, 8);
			cout << "Manager: ";
			bool managerTemp = m_manager[i].getIsManager();
			if (managerTemp == true) cout << 'Y' << endl;
			else cout << 'N' << endl;
			gotoXY(10, 10);
			cout << "Basic Pay: " << m_employee[i].getSalary() << endl;
			gotoXY(10, 12);
			cout << "Health Bonus (27% of Sal): " << m_employee[i].getHealthBonus() << endl;
			gotoXY(10, 14);
			cout << "Inflation (120% of Sal): " << m_employee[i].getInflationAllowance();
			gotoXY(10, 16);
			cout << "Meal Allowance: " << m_employee[i].getMealAllowance() << endl;
			gotoXY(10, 18);
			cout << "Medical Alowance: " << m_employee[i].getMedicalAllowance() << endl;
			gotoXY(10, 20);
			cout << "Transport Allowance: " << m_employee[i].getTransportAllowance() << endl;
			gotoXY(45, 8);
			cout << "Deductions: -- " << endl << endl;
			gotoXY(45, 10);
			cout << "Savings: " << m_employee[i].getSavings() << endl;
			gotoXY(45, 12);
			cout << "Tax: " << m_employee[i].getTax() << endl;
			gotoXY(45, 14);
			//Makes anyloan a captial 'Y/N'
			int in = m_employee[i].getAnyLoan();
			char out = toupper(in);
			cout << "Loan Status: " << out << endl;
			gotoXY(45, 16);
			cout << "Loan Debit This Month: " << m_employee[i].getLoanDebit() << endl;
			gotoXY(45, 18);
			cout << "Loan Balance: " << m_employee[i].getLoanBalance() << endl;
			gotoXY(32, 22);
			cout << "Total Gross Pay: " << m_employee[i].getGrossPay();
		}
	}
	//Waits for user input
	_getch();
}

//Acceptance for new person
void UI::insert()
{
	borderNoDelay();
	//Variable definition
	int currentCode, currentAge, currentExp;
	double sal, save, TAX, HBonus, MealA, MedicalA, TransportA, LoanBal, LoanDeb, IA;
	char loan, manager;
	string currentName, currentDesignation;
	bool mans;

	//Outputs & accepts values
	gotoXY(28, 4);
	cout << "Insert New Record";
	gotoXY(10, 6);
	cout << "Name: ";
	cin >> currentName;
	gotoXY(10, 8);
	cout << "Code: ";
	cin >> currentCode;
	gotoXY(10, 10);
	cout << "Designation: ";
	cin >> currentDesignation;

	//Sets child class manager to T/F
	do
	{
		gotoXY(40, 10);
		cout << "Manager (Y/N)?:  \b \b";
		manager = _getche();
		if (manager == 'Y' || manager == 'y' || manager == 'n' || manager == 'N')
		{
			if (manager == 'Y' || manager == 'y') 
			{
				mans = true;
			}
			else 
			{
				mans = false;
			}
				
			break;
		}
	} while (1);
	//Sets manager
	m_manager[num].setIsManager(mans);

	gotoXY(10, 12);
	cout << "Years of Experience: ";
	cin >> currentExp;
	gotoXY(10, 14);
	cout << "Age: ";
	cin >> currentAge;
	gotoXY(10, 16);
	cout << "Enter Base Salary: ";
	cin >> sal;

	//Loan handling
	do
	{
		gotoXY(10, 18);
		cout << "Any Loan (Y/N)?:  \b \b";
		loan = _getche();
		if (loan == 'Y' || loan == 'y' || loan == 'n' || loan == 'N') break;
	} while (1);
	if (loan == 'y' || loan == 'Y')
	{
		gotoXY(10, 20);
		cout << "Enter Loan Balance: ";
		cin >> LoanBal;
	}
	else
		LoanBal = 0;

	//Outputs success
	gotoXY(14, 22);
	cout << "Recorded Succesfully!";

	//Calculates values
	TAX = 0.13 * sal;
	IA = 1.20 * sal;
	save = 0.12 * sal;
	HBonus = sal * 0.27;
	MealA = 300;
	MedicalA = 300;
	TransportA = 300;
	LoanDeb = sal * 0.09;

	//Changes balance into debt
	if (LoanDeb > LoanBal)
	{
		LoanBal = 0;
		LoanDeb = LoanBal;
	}

	//Calculates values
	double grosspay = (sal + MealA + MedicalA + TransportA + HBonus + IA) - (save + TAX + LoanDeb);
	double loanBals = (LoanBal - LoanDeb);

	//Sets Employees
	Employee newEmp(currentName, currentCode, currentDesignation,
		currentExp, currentAge, sal, loan, HBonus, save,
		TAX, MealA, TransportA, MedicalA, loanBals,
		LoanDeb, grosspay, IA);
	m_employee[num] = newEmp;
	num++;
	//Waits for user input
	_getch();
}

void UI::validate()
{
	//Variable declaration
	string ccNumber, bank;
	int expYear;

	//Loop to allow multiple validations
	while (1)
	{
		//Window formatting
		system("cls");
		borderNoDelay();
		gotoXY(28, 4);
		cout << "----- Validator -----";

		//Variable initialization
		ccNumber = "", bank = "";
		expYear = 0;

		//Gets CC values
		gotoXY(8, 7);
		cout << "('exit' to end)";
		gotoXY(8, 8);
		cout << "Enter credit card number to validate: ";
		cin >> ccNumber;
		if (ccNumber == "exit") break;
		gotoXY(8, 10);
		cout << "Enter its expiry year for validation (YYYY): ";
		cin >> expYear;
		gotoXY(8, 12);
		cout << "Enter the associated bank for validation: ";
		cin >> bank;

		//Calls non-default constructor to create object
		Validator val(ccNumber, bank, expYear);

		//Bad number handling (reloops)
		if (!val.isNum(ccNumber))
		{
			gotoXY(8, 14);
			cout << "Bad input! ";
			continue;
		}
		//Acceptable number handling
		else
		{
			//Outputs
			gotoXY(8, 18);
			cout << "The " << val.getBank() << " card with number " << val.getccNumber() << " is:";
			gotoXY(8, 19);
			//Calls Validate method
			cout << val.Validate();
		}
		//Waits for input to loop
		_getch();
	}
}