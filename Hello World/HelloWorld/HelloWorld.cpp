// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int playerHealth = 1000; 
int enemyHealth = 2000; 

void AttackChoice(int choice);
bool PlayState();

int main()
{
	bool playing = true;

	while (playing)
	{
		int playerChoice;

		cout << "You have met a troll, how will you attack?" << endl;
		cout << "1: Use a sword      2: Use magic      3:Use an axe" << endl; 
		cout << endl << "Choices have different effects" << endl;

		cin >> playerChoice;
		AttackChoice(playerChoice);
		playing = PlayState();
	}
}

void AttackChoice(int choice)
{
	const int sword_damage = 300, magic_damage = 650, axe_damage = 450, troll_sword = 350, troll_magic = 50, troll_axe = 100;

	switch (choice)
	{
		case 1:
			enemyHealth -= sword_damage; 
			playerHealth -= troll_sword; 
			cout << "You have hit the troll for " << sword_damage << " damage!" << endl; 
			cout << "The troll has hit you for " << troll_sword << " damage!" << endl;
			if (playerHealth < 0) { playerHealth = 0; }
			if (enemyHealth < 0) { enemyHealth = 0; }
			cout << endl << "You have " << playerHealth << " and the troll has " << enemyHealth << endl << endl; 
			break;
		case 2:
			enemyHealth -= magic_damage;
			playerHealth -= troll_magic;
			cout << "You have hit the troll for " << magic_damage << " damage!" << endl;
			cout << "The troll has hit you for " << troll_magic << " damage!" << endl;
			if (playerHealth < 0) { playerHealth = 0; }
			if (enemyHealth < 0) { enemyHealth = 0; }
			cout << endl << "You have " << playerHealth << " and the troll has " << enemyHealth << endl << endl;
			break;
		case 3:
			enemyHealth -= axe_damage;
			playerHealth -= troll_axe;
			cout << "You have hit the troll for " << axe_damage << " damage!" << endl;
			cout << "The troll has hit you for " << troll_axe << " damage!" << endl;
			if (playerHealth < 0) { playerHealth = 0; }
			if (enemyHealth < 0) { enemyHealth = 0; }
			cout << endl << "You have " << playerHealth << " and the troll has " << enemyHealth << endl << endl;
			break;
		default:
			cout << "Not a valid weapon type!" << endl; 
			break;
	}
}

bool PlayState()
{
	char playAgain;
	
	if (enemyHealth <= 0)
	{
		cout << "You have killed the troll! Do you want to play again? y / n" << endl; 
		cin >> playAgain;

		if (playAgain == 'y' || playAgain == 'Y')
		{
			enemyHealth = 2000; playerHealth = 1000;
			return true; 
		}
		else if (playAgain == 'n' || playAgain == 'N')
		{
			return false;
		}
		else
		{
			cout << "Not a valid input. Playing again anyway" << endl;
			return true;
		}
	}
	else if (playerHealth <= 0)
	{
		cout << "You have been slain! Do you want to play again? y / n" << endl;
		cin >> playAgain;

		if (playAgain == 'y' || playAgain == 'Y')
		{
			enemyHealth = 2000; playerHealth = 1000;
			return true;
		}
		else if (playAgain == 'n' || playAgain == 'N')
		{
			return false;
		}
		else
		{
			cout << "Not a valid input. Playing again anyway" << endl;
			return true;
		}
	}
	
	return true; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
