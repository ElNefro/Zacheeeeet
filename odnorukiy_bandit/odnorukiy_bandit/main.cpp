#include <iostream>
#include <cstdlib>
#include <ctime>

//тестова€ переменна€ значение которой равно тому сколько игрок поставит
//далее значение ставки будет приходит с клиента
int test_bet = 100;
//тестова€ переменна€ значение которой равно балансу пользовател€
//далее переменна€ будет братсь€ с Ѕƒ
int test_balance = 1000;
double ratio = 1.0; //переменна€ в которой будет финальный коэффицент выйгрыша
bool win;



bool check();
double random_position();
void final();

int main()
{
	setlocale(LC_ALL, "Russian");
	check();
	random_position();
	std::cout << ratio<<"\n";
	final();
	std::cout << test_balance;
	return 0;
}

/*
функци€ котора€ будет провер€ть можно ли вообще провести игру
*/
bool check()
{
	bool check_result; //переменна€ котора€ €вд€етс€ итогом проверки
	if (test_bet <= test_balance)
	{
		check_result = true;
	}
	else
	{
		std::cout << "чЄт много не?";
		check_result = false;
	}

	if (test_balance < 0)
	{
		std::cout << "вы должны казику " << test_balance << " фарит";
		check_result = false;
	}


	return check_result;
}
/*
функци€ котора€ просчитывает то чЄ выпало
*/
double random_position()
{
	std::string first_position = "sad";
	std::string second_position = "sad";
	std::string third_position = "sad";

	
	std::srand(std::time(0));
	int randomNumber1 = std::rand() % 51; // % 51 позвол€ет получить число в диапазоне от 0 до 50
	int randomNumber2 = std::rand() % 51;
	int randomNumber3 = std::rand() % 51;
	//тут просчитываетс€ то что выпадет
	{
		if (randomNumber1 == 50)
		{
			first_position = "€н";
		}
		else if (randomNumber1 >= 40 && randomNumber1 < 50)
		{
			first_position = "семЄрка";
		}
		else if (randomNumber1 >= 24 && randomNumber1 < 40)
		{
			first_position = "ба€рышник";
		}
		else if (randomNumber1 >= 5 && randomNumber1 < 24)
		{
			first_position = "вишн€";
		}
		else if (randomNumber1 >= 0 && randomNumber1 < 5)
		{
			first_position = "гандон";
		}


		if (randomNumber2 == 50)
		{
			second_position = "€н";
		}
		else if (randomNumber2 >= 40 && randomNumber2 < 50)
		{
			second_position = "семЄрка";
		}
		else if (randomNumber2 >= 24 && randomNumber2 < 40)
		{
			second_position = "ба€рышник";
		}
		else if (randomNumber2 >= 5 && randomNumber2 < 24)
		{
			second_position = "вишн€";
		}
		else if (randomNumber2 >= 0 && randomNumber2 < 5)
		{
			second_position = "гандон";
		}


		if (randomNumber3 == 50)
		{
			third_position = "€н";
		}
		else if (randomNumber3 >= 40 && randomNumber3 < 50)
		{
			third_position = "семЄрка";
		}
		else if (randomNumber3 >= 24 && randomNumber3 < 40)
		{
			third_position = "ба€рышник";
		}
		else if (randomNumber3 >= 5 && randomNumber3 < 24)
		{
			third_position = "вишн€";
		}
		else if (randomNumber3 >= 0 && randomNumber3 < 5)
		{
			third_position = "гандон";
		}
	} 

	//тут просчитываетс€ коэффицент
	if (first_position == second_position && second_position == third_position)
	{
		win = true;
		if (first_position == "€н")
		{
			ratio = 18.0;
		}
		else if (first_position == "семЄрка")
		{
			ratio = 7.0;
		}
		else if (first_position == "вишн€")
		{
			ratio = 5.0;
		}
		else if (first_position == "ба€рышник")
		{
			ratio = 1.5;
		}
		else if (first_position == "гандон")
			ratio = -3.0;
	}
	else
	{
		win = false;
	}







	std::cout << first_position<< "\n";
	std::cout << second_position<<"\n";
	std::cout << third_position<<"\n";



	return ratio;
}


void final()
{
	if (win == true)
	{
		test_balance = test_balance + test_bet * ratio;
	}
	else
	{
		test_balance -= test_bet;
	}



}
/*
после всего этого в бд будет отправл€тьс€ новый баланс
на клиен то чЄ выпало чотб отрисовать красивенько и то какой баланс теперь

*/