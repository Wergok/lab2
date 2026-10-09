#include <iostream>

using namespace std;

int main() {
	int month, year;

	cout << "Введите номер месяца и год: ";
	cin >> month >> year;

	if (year < 0 || month < 1 || month > 12) {
		cout << "Invalid date";			
		return 1;
	}

	bool is_leap_year = year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);

	switch (month) {
		case 1:
			cout << "Это зима! \n";
			cout << "Дней в месяце: 30";
			break;
		case 2:
			cout << "Это зима! \n";
			if (is_leap_year)
			{
				cout << "Дней в месяце: 29";
				break;
			}
			else {
				cout << "Дней в месяце: 28";
				break;
			}
		case 3:
			cout << "Это весна! \n";
			cout << "Дней в месяце: 30";
			break;
		case 4:
			cout << "Это весна! \n";
			cout << "Дней в месяце: 31";
			break;
		case 5:
			cout << "Это весна! \n";
			cout << "Дней в месяце: 30";
			break;
		case 6:
			cout << "Это лето! \n";
			cout << "Дней в месяце: 31";
			break;
		case 7:
			cout << "Это лето! \n";
			cout << "Дней в месяце: 30";
			break;
		case 8:
			cout << "Это лето! \n";
			cout << "Дней в месяце: 31";
			break;
		case 9:
			cout << "Это осень! \n";
			cout << "Дней в месяце: 30";
			break;
		case 10:
			cout << "Это осень! \n";
			cout << "Дней в месяце: 31";
			break;
		case 11:
			cout << "Это осень! \n";
			cout << "Дней в месяце: 30";
			break;
		case 12:
			cout << "Это зима! \n";
			cout << "Дней в месяце: 31";
			break;
	}
}