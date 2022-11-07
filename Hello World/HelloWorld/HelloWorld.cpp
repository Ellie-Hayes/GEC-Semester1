// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <array>

using namespace std;
using std::setw;

void InitialiseBoard();
void DrawBoard(int guess1, int guess2);

char lettersMixed[10] = {
		'E','C','A','B','D',
		'D','E','B','C','A'
};

bool CardsFound[10];
int AttemptCount = 0;

int main()
{                          
	for (int i = 0; i < 10; i++) { CardsFound[i] = false; }

	int score = 0;
	bool IsPlaying = true;

	while (IsPlaying)
	{
		InitialiseBoard();

		int guess1;
		int guess2;

		cout << endl << "Please select a card" << endl;
		cin >> guess1;

		cout << "Please select a card" << endl;
		cin >> guess2;
		DrawBoard(guess1, guess2);

		if (lettersMixed[guess1 -1] == lettersMixed[guess2 -1])
		{
			score++;
			CardsFound[guess1- 1] = true;
			CardsFound[guess2 - 1] = true;
		}

		if (score >= 5){ 
			cout << endl << "Congratulations, you've won" << endl; 
			IsPlaying = false;
		}
		else{ AttemptCount++; }
		
	}
}

void InitialiseBoard()
{
	system("cls");
	cout << "Attempts: " << AttemptCount << endl;

	for (int i = 0; i < 10; i++)
	{
		if (CardsFound[i]){ cout << "[" << lettersMixed[i] << "]"; }
		else{ cout << "[" << i + 1 << "]"; }

		if (i == 4){ cout << endl; }
	}
	
}

void DrawBoard(int guess1, int guess2)
{
	system("cls");
	cout << "Attempts: " << AttemptCount << endl;

	for (int i = 0; i < 10; i++)
	{
		if (CardsFound[i] || i + 1 == guess1 || i + 1 == guess2)
		{
			cout << "[" << lettersMixed[i] << "]";
		}
		else{ cout << "[" << i + 1 << "]"; }
		
		if (i == 4) { cout << endl; }
	}
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
