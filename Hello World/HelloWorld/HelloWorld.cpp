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

int main()
{
	char character;
	int number = 8; 
	int count = 0; 

	ofstream out_stream; 
	ifstream in_stream1; 
	ifstream in_stream2;

	out_stream.open("Integers");

	for (count = 1; count <= 5; count++)
	{
		out_stream << number++ << " ";
	}
	out_stream.close();

	in_stream1.open("Integers");
	count = 0; 
	in_stream1 >> number; 

	while (!in_stream1.eof())
	{
		count++;
		in_stream1 >> number; 
	}
	in_stream1.close();
	cout << "There are " << count << " integers in the file." << endl; 

	in_stream2.open("Integers");
	count = 0; 
	in_stream2 >> character; 

	while (!in_stream2.eof())
	{
		count++;
		in_stream2 >> character; 
	}

	in_stream2.close();
	cout << "represented by " << count << " characters " << endl; 
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
