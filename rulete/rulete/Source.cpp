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
		std::cout << "����� ���������� � ����������� �������\n";
		std::cout << "�������� ��������\n";
		std::cout << "1 - ���������� ������\n";
		std::cout << "2 - ������ ����\n";
		std::cout << "3 - �����\n";
		std::cin >> choise;
		if (choise == 1)
		{
			mew = true;
			std::cout << balance << " �����\n";
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
			std::cout << "���Ψ�!?!?!??!?!?\n\n";
			continue;
		}

	} while (mew == true);
}
int rulete()
{
	srand(time(NULL));
	int choise;
	std::cout << "�������� ��� ������\n";
	std::cout << "1 - ��������� ������ 1 \n";
	std::cout << "2 - ���� 1 \n";
	std::cout << "3 - ����� 0 \n";
	std::cout << "4 - ���� 0\n";
	std::cout << "5 - ����� 0\n";
	std::cout << "6 - ������� 0\n";
	std::cout << "7 - ������ ������� 0\n";
	std::cout << "8 - �������/������� 1\n";
	std::cout << "9 - �������/������ 0\n";
	std::cout << "10 - ������/�������� 0\n";
	std::cout << "11 - ������ 1\n";
	std::cout << "12 - ������� 0\n";
	std::cout << "13 - ���� 0\n";
	std::cin >> choise;
	int start = 0;
	int end = 36;
	int x = rand() % (end - start + 1) + start;
	x = 1;
	if (choise == 1)
	{
		std::cout << "�������� ����� ��� ������ (�� 0 �� 36)\n";
		std::cin >> choise;
		if (choise >= 0 && choise < 37)
		{
			std::cout << "\n������� ����� ��� ������\n";
			std::cin >> rates;
			if (rates < balance)
			{
				
				if (choise == x)
				{
					std::cout << "�� �������� " << rates * 35 << " �����\n";
					balance = balance + (rates * 35);
					menu();

				}
				else
				{
					std::cout << "����\n";
					balance = balance - rates;
					menu();
				}
			}
			else
			{
				std::cout << "�� � ������� ��������? � ���� ���� �������!\n";
			}
		}
		else
		{
			std::cout << "����� ����� �� �� ����� ����� �������?!\n";
		}
	}
	else if (choise == 2)
	{
		std::cout << "������� ������ ����� ����\n";
		std::cin >> choise;
		if (choise >= 0 && choise < 37)
		{
			std::cout << "\n������� ����� ��� ������\n";
			std::cin >> rates;
			if (rates < balance)
			{
				if (choise == x)
				{
					std::cout << "�� �������� " << rates * 17 << " �����\n";
					balance = balance + (rates * 17);
					menu();
				}
				else if (choise + 1 > 36)
				{
					choise = 1;
					if (choise == x)
					{
						std::cout << "�� �������� " << rates * 17 << " �����\n";
						balance = balance + (rates * 17);
						menu();
					}
				}
				else if (choise == 0)
				{
					std::cout << "�� �������� ����� ��� ���� �� ���� �������\n";
					menu();
				}
				else
				{
					std::cout << "����\n";
					balance = balance - rates;
					menu();
				}
			}
			else
			{
				std::cout << "�� � ������� ��������? � ���� ���� �������!\n";
				menu();
			}
		}
		else
		{
			std::cout << "����� ����� �� �� ����� ����� �������?!\n";
			menu();
		}

	}
	else if (choise == 8)
	{
		std::cout << "������� - 1, ������� - 2\n";
		std::cin >> choise;
		std::cout << "������� ����� ��� ������\n";
		std::cin >> rates;

		if (choise == 1)
		{
			if (x >= 1 && x < 19)
			{
				std::cout << "�� �������� " << rates * 2 << " �����\n";
				balance = balance + (rates * 2);
				menu();
			}

			else
			{
				std::cout << "����\n";
				balance = balance - rates;
				menu();
			}
		}
		else if (choise == 2)
		{
			if (x >= 19)
			{
				std::cout << "�� �������� " << rates * 2 << " �����\n";
				balance = balance + (rates * 2);
				menu();
			}
			else
			{
				std::cout << "����\n";
				balance = balance - rates;
				menu();
			}
		}
		else
		{
			std::cout << "���Ψ�!?!?!??!?!?\n\n";
			menu();
		}
	}
	else if (choise == 11)
	{
		std::cout << "�������� ������ ��� ������\n";
		std::cout << "1 - ������ ������\n";
		std::cout << "2 - ������ ������\n";
		std::cout << "3 - ������ ������\n";
		std::cin >> choise;
		std::cout << "�������� ����� ��� ������\n";
		std::cin >> rates;
		if (choise == 1)
		{
			if (x >= 1 && x <= 12)
			{
				std::cout << "�� �������� " << rates * 2 << " �����\n";
				balance = balance + (rates * 2);
				menu();
			}
			else
			{
				std::cout << "����\n";
				balance = balance - rates;
				menu();
			}
		}
		else if (choise == 2)
		{
			if (x >= 13 && x <= 24)
			{
				std::cout << "�� �������� " << rates * 2 << " �����\n";
				balance = balance + (rates * 2);
				menu();

			}
			else
			{
				std::cout << "����\n";
				balance = balance - rates;
				menu();
			}
		}
		else if (choise == 3)
		{
			if (x >= 25 && x <= 36)
			{
				std::cout << "�� �������� " << rates * 2 << " �����\n";
				balance = balance + (rates * 2);
				menu();
			}
			else
			{
				std::cout << "����\n";
				balance = balance - rates;
				menu();
			}
		}
		else
		{
			std::cout << "����� ����� �� �� ����� ������ �������?!\n";
		}
	}
	else if (choise == 10)
	{
		std::cout << "1 - ������, 2 - ��������\n";
		std::cin >> choise;
		std::cout << "������� ����� ��� ������\n";
		std::cin >> rates;
		if (choise == 1)
		{
			if (x % 2 == 0)
			{
				std::cout << "�� �������� " << rates * 1 << " �����\n";
				balance = balance + (rates * 1);
				menu();
			}
			else
			{
				std::cout << "����\n";
				balance = balance - rates;
				menu();
			}
		}
		else if (choise == 2)
		{
			if (x % 2 != 0)
			{
				std::cout << "�� �������� " << rates * 1 << " �����\n";
				balance = balance + (rates * 1);
				menu();
			}
			else
			{
				std::cout << "����\n";
				balance = balance - rates;
				menu();
			}
		}
		else
		{
			std::cout << "�� ������.\n";
		}
	}
	return 0;
}