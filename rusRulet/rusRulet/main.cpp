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
		std::cout << "введите ставку\n";
		std::cin >> bet;
		if (Player1.getMoney() >= bet)
		{
			std::cout << "выстрел!!! \n";
			if (position == 1)
			{
				std::cout << "вы выйграли!!!";
				double win = bet * 5.0;
				Player1.setWinMoney(win);
				std::cout << "новые показатели \n";
				Player1.displayInfo1();

			}
			else
			{
				std::cout << "не попал хихи))";
				Player1.setLoseMoney(bet);
				std::cout << "новые показатели \n";
				Player1.displayInfo1();
			}
		}
		else
		{
			std::cout << "не много хочешь?!?!";
		}
	}
	std::cout << "у вас больше нет денег))";
}