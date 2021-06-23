#include <iostream>
using namespace std;

int main()
{
	char month;
	int year;

	cout << "Enter a month (1-12): ";
	cin >> month;
	cout << "Enter a year: ";
	cin >> year;

	switch (month)
	{
	case '1':
		cout << "This month has 31 days" << endl;
		break;
	case '3':
		cout << "This month has 31 days" << endl;
		break;
	case '4':
		cout << "This month has 30 days" << endl;
		break;
	case '5':
		cout << "This month has 31 days" << endl;
		break;
	case '6':
		cout << "This month has 30 days" << endl;
		break;
	case '7':
		cout << "This month has 31 days" << endl;
		break;
	case '8':
		cout << "This month has 31 days" << endl;
		break;
	case '9':
		cout << "This month has 30 days" << endl;
		break;
	case '10':
		cout << "This month has 31 days" << endl;
		break;
	case '11':
		cout << "This month has 30 days" << endl;
		break;
	case '12':
		cout << "This month has 31 days" << endl;
		break;
	case '2':
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				cout << "This month has 29 days" << endl;
			}
			else
			{
				cout << "This month has 28 days" << endl;
			}
		}
		else if (year % 4 == 0)
		{
			cout << "This month has 29 days" << endl;
		}
		else
		{
			cout << "This month has 28 days" << endl;
		}

		//year % 100 == 0 && year % 400 == 0 ? cout << "This month has 29 days" : cout << "This month has 28 days";

		break;
	default:
		cout << "Please enter a number 1 - 12" << endl;
		break;
	}

	return 0;
}
