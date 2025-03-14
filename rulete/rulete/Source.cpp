#include <iostream>
#include <random>
#include <cstdlib>
int rulete();
void menu();
double balance = 1000;
double rates;
bool mew = true;
int main()
{
	
	setlocale(LC_ALL, "ru");
	menu();
}

void menu()
{
	
	do
	{
		
		int choise;
		std::cout << "добро пожаловать в европейскую рулетку\n";
		std::cout << "выберите действие\n";
		std::cout << "1 - посмотреть баланс\n";
		std::cout << "2 - начать игру\n";
		std::cout << "3 - выход\n";
		std::cin >> choise;
		if (choise == 1)
		{
			mew = true;
			std::cout << balance << " фарит\n";
		}
		else if (choise == 2)
		{
			mew = false;
			rulete();
		}
		else if (choise == 3)
		{
			break;
		}
		else
		{
			system("cls");
			std::cout << "ДОБОЁБ!?!?!??!?!?\n\n";
			continue;
		}

	} while (mew == true);
}
int rulete()
{
	srand(time(NULL));
	int choise;
	std::cout << "выберите тип ставки\n";
	std::cout << "1 - одиночная ставка 1 \n";
	std::cout << "2 - пара 1 \n";
	std::cout << "3 - стрит 0 \n";
	std::cout << "4 - каре 0\n";
	std::cout << "5 - линия 0\n";
	std::cout << "6 - корзина 0\n";
	std::cout << "7 - первая четвёрка 0\n";
	std::cout << "8 - меньшие/бельшие 1\n";
	std::cout << "9 - красное/чёрное 0\n";
	std::cout << "10 - чётное/нечётное 0\n";
	std::cout << "11 - дюжины 1\n";
	std::cout << "12 - колонны 0\n";
	std::cout << "13 - змея 0\n";
	std::cin >> choise;
	int start = 0;
	int end = 36;
	int x = rand() % (end - start + 1) + start;
	x = 1;
	if (choise == 1)
	{
		std::cout << "выберите число для ставки (от 0 до 36)\n";
		std::cin >> choise;
		if (choise >= 0 && choise < 37)
		{
			std::cout << "\nвведите сумму для ставки\n";
			std::cin >> rates;
			if (rates < balance)
			{
				
				if (choise == x)
				{
					std::cout << "вы выйграли " << rates * 35 << " фарит\n";
					balance = balance + (rates * 35);
					menu();

				}
				else
				{
					std::cout << "проёб\n";
					balance = balance - rates;
					menu();
				}
			}
			else
			{
				std::cout << "ты в кукушку въебался? у тебя нема столько!\n";
			}
		}
		else
		{
			std::cout << "еблан блять ты на какое число ставишь?!\n";
		}
	}
	else if (choise == 2)
	{
		std::cout << "введите первое число пары\n";
		std::cin >> choise;
		if (choise >= 0 && choise < 37)
		{
			std::cout << "\nвведите сумму для ставки\n";
			std::cin >> rates;
			if (rates < balance)
			{
				if (choise == x)
				{
					std::cout << "вы выйграли " << rates * 17 << " фарит\n";
					balance = balance + (rates * 17);
					menu();
				}
				else if (choise + 1 > 36)
				{
					choise = 1;
					if (choise == x)
					{
						std::cout << "вы выйграли " << rates * 17 << " фарит\n";
						balance = balance + (rates * 17);
						menu();
					}
				}
				else if (choise == 0)
				{
					std::cout << "ты ебоклаша блять тут незя на зеро ставить\n";
					menu();
				}
				else
				{
					std::cout << "проёб\n";
					balance = balance - rates;
					menu();
				}
			}
			else
			{
				std::cout << "ты в кукушку въебался? у тебя нема столько!\n";
				menu();
			}
		}
		else
		{
			std::cout << "еблан блять ты на какое число ставишь?!\n";
			menu();
		}

	}
	else if (choise == 8)
	{
		std::cout << "меньшие - 1, большие - 2\n";
		std::cin >> choise;
		std::cout << "введите сумму для ставки\n";
		std::cin >> rates;

		if (choise == 1)
		{
			if (x >= 1 && x < 19)
			{
				std::cout << "вы выйграли " << rates * 2 << " фарит\n";
				balance = balance + (rates * 2);
				menu();
			}

			else
			{
				std::cout << "проёб\n";
				balance = balance - rates;
				menu();
			}
		}
		else if (choise == 2)
		{
			if (x >= 19)
			{
				std::cout << "вы выйграли " << rates * 2 << " фарит\n";
				balance = balance + (rates * 2);
				menu();
			}
			else
			{
				std::cout << "проёб\n";
				balance = balance - rates;
				menu();
			}
		}
		else
		{
			std::cout << "ДОБОЁБ!?!?!??!?!?\n\n";
			menu();
		}
	}
	else if (choise == 11)
	{
		std::cout << "выберите дюжину для ставки\n";
		std::cout << "1 - первая дюжина\n";
		std::cout << "2 - вторая дюжина\n";
		std::cout << "3 - третья дюжина\n";
		std::cin >> choise;
		std::cout << "выберите сумму для ставки\n";
		std::cin >> rates;
		if (choise == 1)
		{
			if (x >= 1 && x <= 12)
			{
				std::cout << "вы выйграли " << rates * 2 << " фарит\n";
				balance = balance + (rates * 2);
				menu();
			}
			else
			{
				std::cout << "проёб\n";
				balance = balance - rates;
				menu();
			}
		}
		else if (choise == 2)
		{
			if (x >= 13 && x <= 24)
			{
				std::cout << "вы выйграли " << rates * 2 << " фарит\n";
				balance = balance + (rates * 2);
				menu();

			}
			else
			{
				std::cout << "проёб\n";
				balance = balance - rates;
				menu();
			}
		}
		else if (choise == 3)
		{
			if (x >= 25 && x <= 36)
			{
				std::cout << "вы выйграли " << rates * 2 << " фарит\n";
				balance = balance + (rates * 2);
				menu();
			}
			else
			{
				std::cout << "проёб\n";
				balance = balance - rates;
				menu();
			}
		}
		else
		{
			std::cout << "еблан блять ты на какую дюжину ставишь?!\n";
		}
	}
	else if (choise == 10)
	{
		std::cout << "1 - чётное, 2 - нечётное\n";
		std::cin >> choise;
		std::cout << "введите сумму для ставки\n";
		std::cin >> rates;
		if (choise == 1)
		{
			if (x % 2 == 0)
			{
				std::cout << "вы выйграли " << rates * 1 << " фарит\n";
				balance = balance + (rates * 1);
				menu();
			}
			else
			{
				std::cout << "проёб\n";
				balance = balance - rates;
				menu();
			}
		}
		else if (choise == 2)
		{
			if (x % 2 != 0)
			{
				std::cout << "вы выйграли " << rates * 1 << " фарит\n";
				balance = balance + (rates * 1);
				menu();
			}
			else
			{
				std::cout << "проёб\n";
				balance = balance - rates;
				menu();
			}
		}
		else
		{
			std::cout << "ты долбоёб.\n";
		}
	}
	return 0;
}