#include <iostream>
#include <string>
#include "Player.h"
#include <ctime>
#include<random>
int position;
double bet = 0.0;

void bullet();
void game();

int main()
{
	setlocale(LC_ALL, "Russian");


	game();
	return 0;
}




void bullet()
{
	srand(time(0));

	int start = 1;
	int end = 6;
	position = rand() % (end - start + 1) + start;
	
}

void game()
{
	Player Player1(100.0, "name");
	Player1.displayInfo1();
	while (Player1.getMoney() > 0)
	{
		bullet();
		std::cout << position<<"\n";
		std::cout << "������� ������\n";
		std::cin >> bet;
		if (Player1.getMoney() >= bet)
		{
			std::cout << "�������!!! \n";
			if (position == 1)
			{
				std::cout << "�� ��������!!!";
				double win = bet * 5.0;
				Player1.setWinMoney(win);
				std::cout << "����� ���������� \n";
				Player1.displayInfo1();

			}
			else
			{
				std::cout << "�� ����� ����))";
				Player1.setLoseMoney(bet);
				std::cout << "����� ���������� \n";
				Player1.displayInfo1();
			}
		}
		else
		{
			std::cout << "�� ����� ������?!?!";
		}
	}
	std::cout << "� ��� ������ ��� �����))";
}