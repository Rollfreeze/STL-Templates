#include"Header.h"
#include "menu.h"
#include"numbers.h"

template class numbers<int>;
template class numbers<float>;
template class numbers<double>;

void menu::show_menu()
{
	checker = 1;
	while (checker)
	{
		system("CLS");
		cout << "1. int\n";
		cout << "2. float\n";
		cout << "3. double\n";
		cout << "0. quit\n";

		cin >> choice;

		switch (choice)
		{
		case '1':
		{
			numbers<int> number;
			vector<int> kek(1);
			cout << "You choosed int\n";
			kek = number.InputFile(number.CreateFile(1));
			number.get_vector(number.modify(kek));
			number.get_vector(number.change_vector(kek));
			system("pause");

			break;
		}
		case '2':
		{
			numbers<float> number;
			vector<float> kek(1.0f);
			cout << "You choosed float\n";
			kek = number.InputFile(number.CreateFile(1.0f));
			number.get_vector(number.modify(kek));
			number.get_vector(number.change_vector(kek));
			system("pause");

			break;
		}
		case '3':
		{
			numbers<double> number;
			vector<double> kek(1.0);
			cout << "You choosed double\n";
			kek = number.InputFile(number.CreateFile(1.0));
			number.get_vector(number.modify(kek));
			number.get_vector(number.change_vector(kek));
			system("pause");

			break;
		}
		case '0':
		{
			checker = 0;
			break;
		}
		default:
			cout << "Incorrect input! Try again!\n";
			system("pause");

			break;
		}
	}
}