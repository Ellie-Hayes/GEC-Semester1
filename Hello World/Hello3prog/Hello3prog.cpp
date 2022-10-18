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
