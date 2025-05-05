#pragma once
#include <iostream>
#include <string>




#ifndef PLAYER
#define PLAYER


class Player
{
private:
	double money;
	std::string name;
public:
	Player(double player_money, const std::string player_name)
		: name(player_name), money(player_money)
	{
	}

	std::string getName() const
	{

		return name;
	}

	double getMoney() const
	{ 
		return money;
	}

	void setWinMoney(double newMoney)
	{
		money += newMoney;
	}

	void setLoseMoney(double newMoney)
	{
		money -= newMoney;
	}

	void displayInfo1() const
	{
		std::cout << money <<":деньги" << std::endl << name<< ":имя" << std::endl;
	}

	void displayInfo() const {
		std::cout << "Имя игрока: " << name << ", Деньги: " << money << std::endl;
	}

};


#endif // !PLAYER