#include <iostream>

using namespace std;

int main() 
{
	char mode;
	int day, month, year;
	bool is_leap_year;

	cout << "Выберите мод N или D: ";
	cin >> mode;

	switch (mode) {
		case 'N':
			int next_day, next_month, next_year;

			cout << "Введите номер день, месяца и год: ";
			cin >> day >> month >> year;

			if (year < 0 || month < 1 || month > 12 || (month % 2 == 0 && day > 31) || (month % 2 == 1 && day > 30)) {
				cout << "Invalid date"; 
				return 1;
			}

			is_leap_year = year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
			
			next_month = month;
			next_year = year;

			if (is_leap_year && month == 2 && day == 29) {
				next_day = 1;
				next_month = month + 1;
			}
			else if (!is_leap_year && month == 2 && day == 28) {
				next_day = 1;
				next_month = month + 1;
			}
			else if (month % 2 == 0 && day == 31)
			{
				if (month < 12)
				{
					next_day = 1;
					next_month = month + 1;
				}
				else
				{
					next_day = 1;
					next_month = 1;
					next_year = year + 1;
				}
			}
			else if (month % 2 == 1 && day == 30) {
				next_day = 1;
				next_month = month + 1;
			}
			else
			{
				next_day = day + 1;
			}
			cout << "Следующая дата: " << next_day << "." << next_month << "." << next_year;

			break;	
		case 'D':

			cout << "Введите номер месяца и год: ";
			cin >> month >> year;

			if (year < 0 || month < 1 || month > 12) {
				cout << "Invalid date";
				return 1;
			}

			is_leap_year = year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);

			if (is_leap_year && month == 2) {
				cout << "Valid date \n";
				cout << "Дней в месяце: 29";
			}
			else if (!is_leap_year && month == 2) {
				cout << "Valid date \n";
				cout << "Дней в месяце: 28";
			}
			else if (month % 2 == 0) {
				cout << "Valid date \n";
				cout << "Дней в месяце: 31";
			}
			else {
				cout << "Valid date \n";
				cout << "Дней в месяце: 30";
			}
			break;
		default:
			cout << "Неизвестный код операции";
			return 1;
	}
}