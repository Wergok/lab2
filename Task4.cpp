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
		case 'N': {
			int next_day, next_month, next_year;

			cout << "Введите номер день, месяца и год: ";
			cin >> day >> month >> year;

			if (year <= 0 || month < 1 || month > 12) {
				cout << "Invalid date";
				return 1;
			}

			is_leap_year = year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);

			int days_in_month;

			switch (month) {
			case 2:
				days_in_month = is_leap_year ? 29 : 28;
				break;
			case 4: case 6: case 9: case 11:
				days_in_month = 30;
				break;
			default:
				days_in_month = 31;
				break;
			}

			if (day <= 0 || day > days_in_month) {
				cout << "Invalid date";
				return 1;
			}


			next_month = month;
			next_year = year;

			if (day == days_in_month)
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
			else {
				next_day = day + 1;
			}
			cout << "Следующая дата: " << next_day << "." << next_month << "." << next_year;

			break;
		}
		case 'D': {

			cout << "Введите номер месяца и год: ";
			cin >> month >> year;

			if (year <= 0 || month < 1 || month > 12) {
				cout << "Invalid date";
				return 1;
			}

			is_leap_year = year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);

			int days_in_month;

			switch (month) {
			case 2:
				days_in_month = is_leap_year ? 29 : 28;
				break;
			case 4: case 6: case 9: case 11:
				days_in_month = 30;
				break;
			default:
				days_in_month = 31;
				break;
			}


			cout << "valid date \n";
			cout << days_in_month;
			break;
		}
			default:
				cout << "Неизвестный код операции";
				return 1;
		}
	}