// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int lineNumber = 1;
    int totalLines;
    char playAgainChar;
    bool playAgain = true;

    do
    {
        cout << "Enter a number between 1 and 10: " << endl;
        cin >> totalLines;

        if (totalLines >= 1 && totalLines <= 10)
        {
            for (int i = 0; i < totalLines; i++)
            {
                for (int i = 0; i < lineNumber; i++)
                {
                    cout << "* ";
                }

                cout << endl;
                lineNumber++;
            }
        }
        else { cout << "Not a valid number " << endl; }

        cout << "Do you want to play again y or n? " << endl;
        cin >> playAgainChar;

        if (playAgainChar == 'y' || playAgainChar == 'Y')
        {
            lineNumber = 1;
            continue;
        }
        else
        {
            playAgain = false;
            cout << "Goodbye!" << endl;
        }

    } while (playAgain);

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
