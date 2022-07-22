/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cmath>
#include<ctime>
#include<string>
#include <iomanip>
#include <fstream>

using namespace std;
int lyear(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		return 366;
	}
	else
		return 365;
}

int days_of_month(int year, int m) {
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		return 31;
	}
	else if (lyear(year) == 366 && m == 2) {
		return 29;
	}
	else if (lyear(year) == 365 && m == 2) {
		return 28;
	}
	else {
		return 30;
	}
}

int main()
{
	cout << "enter the year ";
	int year;
	cin >> year;

	cout << "Enter The First Day Of The year ";
	int FirstDay;
	cin >> FirstDay;
	int count = 1;
	int days = 1;
	for (int month = 1; month <= 12; month++)
	{
		cout << "             ";
		switch (month)
		{
		case 1: cout << "January " << year << endl;
			break;
		case 2: cout << "February " << year << endl;
			break;
		case 3: cout << "March  " << year << endl;
			break;
		case 4: cout << "April  " << year << endl;
			break;
		case 5: cout << "May " << year << endl;
			break;
		case 6: cout << "June  " << year << endl;
			break;
		case 7: cout << "July  " << year << endl;
			break;
		case 8: cout << "August " << year << endl;
			break;
		case 9: cout << "September " << year << endl;
			break;
		case 10: cout << "October " << year << endl;
			break;
		case 11: cout << "November " << year << endl;
			break;
		case 12: cout << "December " << year << endl;
			break;
		}
		cout << " --------------------------------------------------------- " << endl;
		cout << "  Sun Mon Tue Wed Thu Fri Sat" << endl;
		for (int i = 0; i < FirstDay; i++)
		{
			cout << "    ";
		}
		for (int i = 1; i <= days_of_month(year,month); i++)// change 31 to the days of the month
		{
			if (i < 10) {
				cout << "   " << i;
			}
			else {
				cout << "  " << i;
			}
			if ((i + FirstDay) % 7 == 0) {
				cout << endl;
			}
		}
		cout << endl;

		FirstDay = (FirstDay + days_of_month(year, month)) % 7;// here you use default 31, change to the days of the month

	}


}

