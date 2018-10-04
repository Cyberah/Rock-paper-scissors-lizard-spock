#include "pch.h"
#include <iostream>
#include <time.h>
void ShowRules(){
	std::cout << "Actual rules of the game:\n# Scissors cut paper\n# Paper covers rock\n# Rock crushes lizard\n"
		      << "# Lizard poisons Spock\n# Spock smashes (or melts) scissors\n# Scissors decapitate lizard\n"
			  << "# Lizard eats paper\n# Paper disproves Spock\n# Spock vaporizes rock\n# Rock breaks scissors\n\n";
}
void ShowChoices(){
	std::cout << "Possible choices are:\n\n"
			  <<"1. Rock\n2. Paper\n3. Scissors\n4. Lizard\n5. Spock";
}
char Playerturn(){
	std::cout << "Your choice is... ";
	char Choice;
	do
	{
		std::cin >> Choice;
		switch (Choice){
		case '1': std::cout << "You have chosen Rock!\n"; break;
		case '2': std::cout << "You have chosen Paper!\n"; break;
		case '3': std::cout << "You have chosen Scissors!\n"; break;
		case '4': std::cout << "You have chosen Lizard!\n"; break;
		case '5': std::cout << "You have chosen Spock!\n"; break;
		default: std::cout << "There's no option like this!\n"; continue;
		}
	} while (!(Choice == '1' || Choice == '2' || Choice == '3' || Choice == '4'|| Choice == '5'));
	return Choice;
}

int Computerturn(char Pchoice){
	srand(time(0));
	int Cchoice = std::rand() % 5 + 1;
	switch (Cchoice){
	case 1: std::cout << "Computer have chosen Rock!\n"; break;
	case 2: std::cout << "Computer have chosen Paper!\n"; break;
	case 3: std::cout << "Computer have chosen Scissors!\n"; break;
	case 4: std::cout << "Computer have chosen Lizard!\n"; break;
	case 5: std::cout << "Computer have chosen Spock!\n"; break;
	}
	if (Pchoice == '1' && Cchoice == 1) return 2;
	if (Pchoice == '2' && Cchoice == 2) return 2;
	if (Pchoice == '3' && Cchoice == 3) return 2;
	if (Pchoice == '4' && Cchoice == 4) return 2;
	if (Pchoice == '5' && Cchoice == 5) return 2;
	if (Pchoice == '1' && Cchoice == 2) return 0;
	if (Pchoice == '1' && Cchoice == 3) return 1;
	if (Pchoice == '1' && Cchoice == 4) return 1;
	if (Pchoice == '1' && Cchoice == 5) return 0;
	if (Pchoice == '2' && Cchoice == 1) return 1;
	if (Pchoice == '2' && Cchoice == 3) return 0;
	if (Pchoice == '2' && Cchoice == 4) return 0;
	if (Pchoice == '2' && Cchoice == 5) return 1;
	if (Pchoice == '3' && Cchoice == 1) return 0;
	if (Pchoice == '3' && Cchoice == 2) return 1;
	if (Pchoice == '3' && Cchoice == 4) return 1;
	if (Pchoice == '3' && Cchoice == 5) return 0;
	if (Pchoice == '4' && Cchoice == 1) return 0;
	if (Pchoice == '4' && Cchoice == 2) return 1;
	if (Pchoice == '4' && Cchoice == 3) return 0;
	if (Pchoice == '4' && Cchoice == 5) return 1;
	if (Pchoice == '5' && Cchoice == 1) return 1;
	if (Pchoice == '5' && Cchoice == 2) return 0;
	if (Pchoice == '5' && Cchoice == 3) return 1;
	if (Pchoice == '5' && Cchoice == 4) return 0;
}
void Exit(){
	std::cout << "\nGoodbye!\n";
	exit(0);
}
bool Checkchars(char answer) {
	return (answer == 'y' || answer == 'Y' || answer == 'n' || answer == 'N');
}
