//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int day, month, year;
//	cout << "Введите день, месяц, год: ";
//	cin >> day >> month >> year;
//	
//	bool is_leap_year = year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
//
//	if (year < 0 || month < 1 || month > 12) {
//		cout << "Invalid date";
//		return 1;
//	}
//
//	if (is_leap_year && month == 2 && (day < 0 || day > 29)) {
//		cout << "invalid date";
//		return 1;
//	}
//
//	if (!is_leap_year && month == 2 && (day < 0 || day > 28)) {
//		cout << "invalid date";
//		return 1;
//	}
//
//	if (month % 2 == 0 && (day < 0 || day > 30)) {
//		cout << "invalid date";
//		return 1;
//	}
//
//	if (month % 2 == 1 && (day < 0 || day > 31)) {
//		cout << "invalid date";
//		return 1;
//	}
//
//	cout << "valid date";
//}