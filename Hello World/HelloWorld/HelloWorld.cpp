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

using namespace std;
using std::setw;

struct Details
{
	string name;
	int accountNumber;
	double balance;

	Details() // Default Constructor
	{

	}

	void Details()
	{
		
	}
};

Details person1Details;
Details person2Details;

int main()
{
	person1Details = Details();
	person2Details = Details();

	bool looPY1 = true;
	bool loop2 = true;

	int UserChoice;
	char MoreDetails; 

	ofstream out_stream;
	ifstream in_stream1;

	out_stream.open("Details");
	out_stream.close();
	in_stream1.open("Details");

	while (looPY1)
	{
		cout << "Please enter a choice: " << endl; 
		cout << "1. Enter new details" << endl; 
		cout << "2. Display file" << endl; 
		cout << "3. Display accounts with over £10,000" << endl;
		cout << "4. Exit program" << endl;
		cin >> UserChoice;

		switch (UserChoice)
		{
		default:
			break;
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
