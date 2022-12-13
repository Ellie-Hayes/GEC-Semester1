// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <array>
#include <string>
#include <cctype>
#include <cstring>
#include<ctime>
#include<fstream>
#include "cat.h"
using namespace std;
using std::setw;

int main()
{
	cat button(5);
	cat* pDaisy = new cat(10);

	cout << "Button is " << button.GetAge() << " years old. " << endl; 
	cout << "Daisy is " << pDaisy->GetAge() << " years old. " << endl;

	cin.get(); 

	delete pDaisy;
}

cat::cat(int initial_age)
{
	itsAge = initial_age;
}

cat::~cat()
{

}

int cat::GetAge()
{
	return itsAge;
}

void cat::SetAge(int age)
{
	itsAge = age; 
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
