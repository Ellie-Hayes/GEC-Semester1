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

using namespace std;
using std::setw;
void inputDetails(int* n1, int* n2);
void outputDetails(int& integer1, int& interger2, int* pointer);

int main()
{
    int num1;
    int num2;

    inputDetails(&num1, &num2);

    int* pNum = &num1;
    outputDetails(num1, num2, pNum);

    cout << "pNum now points to num2" << endl;
    pNum = &num2;
    outputDetails(num1, num2, pNum);

    delete pNum; 
}

void inputDetails(int* n1, int* n2)
{
    int num1input;
    int num2input;

    cout << "Please enter the first number" << endl;
    cin >> num1input;
    *n1 = num1input;

    cout << "Please enter the second number" << endl;
    cin >> num2input;
    *n2 = num2input;
}

void outputDetails(int& integer1, int& interger2, int* pointer)
{
    cout << endl << "Num 1: " << endl << "Value: " << integer1 << endl << "Address: " << &integer1 << endl << endl;
    cout << endl << "Num 2: " << endl << "Value: " << interger2 << endl << "Address: " << &interger2 << endl << endl;
    cout << endl << "pNum: " << endl << "Value: " << *pointer << endl << "Address: " << pointer << endl << "Address of pointer: " << &pointer << endl << endl;
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
