#include "pch.h"
#include <iostream>
void ShowRules();
void ShowChoices();
char Playerturn();
int Computerturn(char);
void Exit();
bool Checkchars(char);
int main()
{
	std::cout << "Welcome in \"Rock, Paper, Scissors, Lizard, Spock\" game!\n";
	do{
		ShowRules();
		char Answer;
		ShowChoices();
		std::cout << "\n\nPress any button, to continue.\n";
		std::cin.get();
		do{
			int result = Computerturn(Playerturn());
			if (result == 1)
				std::cout << "Congratulations, you have a won the game!\n";
			else if (result == 0)
				std::cout << "Computer has won a game!\n";
			else if (result == 2)
				std::cout << "Draw!\n";
			std::cout << "Do you wanna play again?[Y]/[N] ";
			do std::cin >> Answer;
			while (!Checkchars(Answer));
			if (Answer == 'y' || Answer == 'Y')
				continue;
			else if (Answer == 'n' || Answer == 'N')
				Exit();
		} while (1);
	}while(1);
}
