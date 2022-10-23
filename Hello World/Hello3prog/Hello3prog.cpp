// Hello3prog.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //Week 1
    std::cout << "Hello World!" << std::endl;


    std::cout << "Size of char: " << sizeof(char) << "bytes " << std::endl;
    std::cout << "Size of int: " << sizeof(int) << "bytes " << std::endl;
    std::cout << "Size of short int: " << sizeof(short int) << "bytes " << std::endl;
    std::cout << "Size of long int: " << sizeof(long int) << "bytes " << std::endl;
    std::cout << "Size of float: " << sizeof(float) << "bytes " << std::endl;
    std::cout << "Size of double: " << sizeof(double) << "bytes " << std::endl;
    std::cout << "Size of wchar_t: " << sizeof(wchar_t) << "bytes " << std::endl;

    int myInt = 5, myInt2 = 10;
    cout << "Value stored in myInt1 is " << myInt << endl;
    cout << "Value stored in myInt2 is " << myInt2 << endl;

    float myFloat = 1.2, myFloat2 = 9.9;
    cout << "Value stored in myFloat1 is " << myFloat << endl;
    cout << "Value stored in myFloat2 is " << myFloat2 << endl;

    char myChar = 'a';
    cout << "Value stored in myChar is " << myChar << endl;

    string myString = "Bob";
    cout << "Value stored in myString is " << myString << endl;

    typedef int health;

    enum Weapons
    {
        SWORD = 1,
        DAGGER,
        MACE,
        TWIN_SWORDS,
        SAMURAI,
        WIZARD_STAFF,
        FIRE_POTION,
        ICE_BLADE,
        SMALL_KNIFE,

    };

    Weapons currentWeapon = SAMURAI;
    health currentHealth = 1300;

    cout << "Current health is: " << currentHealth << endl;
    cout << "Weapon ID is: " << currentWeapon << endl;

    int num = 1;
    cout << "num = " << num << endl;
    cout << "increment operator before num = " << ++num << endl;
    cout << "num after = " << num << endl;

    num = 1;

    cout << "num = " << num << endl;
    cout << "increment operator after num = " << num++ << endl;
    cout << "num after = " << num << endl;

    num = 1;

    cout << "num = " << num << endl;
    cout << "decrement operator before num = " << --num << endl;
    cout << "num after = " << num << endl;

    num = 1;

    cout << "num = " << num << endl;
    cout << "decrement operator after num = " << num-- << endl;
    cout << "num after = " << num << endl;

    num = 1;

    const float pi = 3.14159f;
    float radius = 25.0f;
    float area = pi * radius * radius;
    cout << "The area of a circle with a radius of " << radius << " equals " << area << endl;

    //Week 2

    bool a = true;
    int num1 = 12;
    int num2 = 5;
    int num3 = 7;

    if (a)

        num1++;
    num2 += 5;
    num3 *= 2;

    if (a)
    {
        num1++; \
    }
    num2 += 5;
    num3 *= 2;

    if (a)
    {
        num1++;
        num2 += 5;
    }

    num3 *= 2;

    cout << "a = " << num1 << endl;
    cout << "b = " << num2 << endl;
    cout << "c = " << num3 << endl;

    bool a = false;
    bool b = true;
    int num1 = 12;
    int num2 = 5;
    int num3 = 7;

    if (a) { num1 += 10; num2 += 15; }
    else if (b) { num1++; num3 += 20; }
    else { num1--; num2--; num3--; }

    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;

    char playAgain;
    cout << "Do you want to play again, y or n?" << endl;

    cin >> playAgain;

    switch (playAgain)
    {
    case 'y':
        cout << "you chose to play again" << endl;
        break;
    case 'n':
        cout << "Goodbye" << endl;
        break;
    default:
        cout << "that’s not y or n" << endl;
        break;
    }

    int difficultyInput;
    cout << "Please choose your difficulty:  " << endl;
    cout << "1.	I’m too young to die!  " << endl;
    cout << "2.	Hey, not to rough!  " << endl;
    cout << "3.	Hurt me plenty.  " << endl;
    cout << "4.	Ultra-Violence.  " << endl;
    cout << "5.	Nightmare…  " << endl;

    cin >> difficultyInput;

    switch (difficultyInput)
    {
    case 1:
        cout << "If you manage to die in this mode please contact the devs to celebrate how bad you are at gaming" << endl;
        break;
    case 2:
        cout << "This is an understandable difficulty" << endl;
        break;
    case 3:
        cout << "You may need to git gud to complete this" << endl;
        break;
    case 4:
        cout << "Do you happen to like dark souls too" << endl;
        break;
    case 5:
        cout << "You are a masochist" << endl;
        break;
    default:
        cout << "that’s not a difficulty" << endl;
        break;
    }

    int mySavings = 2000;
    float yourPercentage = 50;
    int yourShare = mySavings * (yourPercentage / 100);

    cout << "Your share: " << yourShare << endl;
    return 0;

    int totalHaribos = 40;
    int students = 14;

    int HariboStudent = totalHaribos / students;
    int HariboTeacher = totalHaribos % students;

    cout << "Students share: " << HariboStudent << endl;
    cout << "teacher share: " << HariboTeacher << endl;

    int rain = 1;
    int snow = 2;
    int weather;
    int tempCelcius;

    cout << "If it is raining please enter 1, or 2 if it is snowing" << endl;
    cin >> weather;

    cout << "What is the temperature in celcius" << endl;
    cin >> tempCelcius;

    if (weather == rain)
    {
        if (tempCelcius > 15) { cout << "Please wear a light raincoat" << endl; }
        else { cout << "Please wear a thick coat" << endl; }
    }
    else if (weather == snow)
    {
        if (tempCelcius > 5) { cout << "Please wear something warm" << endl; }
        else if (tempCelcius > 0) { cout << "Please wrap up well" << endl; }
        else { cout << "Please stay home today" << endl; }
    }
    else
    {
        cout << "Have a nice day and enjoy the weather" << endl;
    }

    char userTitle;
    int gameChoice;

    cout << "Please tell me your status with s for student, t for teacher or o for other." << endl;
    cin >> userTitle;

    cout << "Which game would you like, 1 or 2?" << endl;
    cin >> gameChoice;

    if ((userTitle == 's' || userTitle == 't') && gameChoice == 1)
    {
        cout << "You are entitled to a 20% discount :) " << endl;
    }
    else if ((userTitle == 's' || userTitle == 't') && gameChoice == 2)
    {
        cout << "You are entitled to a 10% discount! " << endl;
    }
    else
    {
        cout << "You are not entitled to any discounts " << endl;
    }

    //Week 3

    int inputNum;
    int numCount = 2;
    float mean = 0.0f;
    int Total = 1;

    do
    {
        cout << endl;

        cout << "Enter a number: " << endl;
        cin >> inputNum;
        Total += inputNum;

        if (inputNum != 0)
        {
            numCount++;

            cout << "Enter a number: " << endl;
            cin >> inputNum;
            Total += inputNum;

            mean = (float)Total / numCount;

            cout << "Sum: " << Total << endl;
            cout << "Mean: " << mean << endl;
        }

    } while (inputNum != 0);

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

    int playerHealth = 100;
    int damage;
    cout << "Player health is " << playerHealth << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Question " << i << ": How much damage should I deal? " << endl;
        cin >> damage;
        playerHealth -= damage;

        if (playerHealth <= 0)
        {
            cout << "Early end! Player died" << endl;
            break;
        }

        if (i == 10)
        {
            cout << "All questions asked. Player survived" << endl;
        }
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
