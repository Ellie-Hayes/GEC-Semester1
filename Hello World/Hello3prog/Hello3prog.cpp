// Hello3prog.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <array>
#include <string>


using std::setw;
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

    //Week 4

    /*
    int AddTwoNumbers(int number1, int number2);

    int main()
    {
        int result = AddTwoNumbers(10, 5);
        cout << result << endl;
        int myNum1 = 2;
        int myNum2 = 4;

        AddTwoNumbers(myNum1, myNum2);
        AddTwoNumbers(myNum1, 12);

        return 0;
    }

    int AddTwoNumbers(int number1, int number2)
    {
        return number1 + number2;
    }
    */

    /*
    void AddTwo(int num);

    int main()
    {
        int myNum = 6;
        cout << "Main : " << myNum << endl;
        AddTwo(myNum);
        cout << "Main : " << myNum << endl;
    }

    void AddTwo(int num)
    {
        num += 2;
        cout << "Function : " << num << endl;
    }
    */

    /*
    void SmallestNumber(int a, int b);
    float multiply(float number1);
    float divideNum(float num1);

    int main()
    {
        for (int i = 0; i < 3; i++)
        {
            int playerInput1;
            int playerInput2;

            cout << "Please input your first Number" << endl;
            cin >> playerInput1;

            cout << "Please input your second Number" << endl;
            cin >> playerInput2;

            SmallestNumber(playerInput1, playerInput2);
        }

        for (int i = 0; i < 3; i++)
        {
            float playerNumInput;

            cout << "Please enter your number to be multiplied" << endl;
            cin >> playerNumInput;

            float multAns = multiply(playerNumInput);
            float finalAns = divideNum(multAns);

            cout << playerNumInput << " times by 10 equals " << multAns << " divide by 3 equals " << finalAns << endl;
            cout << endl;
        }

    }

    void SmallestNumber(int a, int b)
    {
        if (a > b) { cout << a << " is bigger than " << b << endl; }
        else if (b > a) { cout << b << " is bigger than " << a << endl; }
        else { cout << a << " is equal to " << b << endl; }

        cout << endl;
    }

    float multiply(float number1)
    {
        return number1 * 10;
    }

    float divideNum(float num1)
    {
        return num1 / 3;
    }*/

    /*
    bool OddOrEven(int number);
    void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);

    int main()
    {
        //true = even false = odd
        int numEven = 0;
        int numOdd = 0;
        int oddTotal = 0;
        int evenTotal = 0;


        for (int i = 1; i < 11; i++)
        {
            int playerInput;

            cout << i << ": Please input a number " << endl;
            cin >> playerInput;

            bool result = OddOrEven(playerInput);

            if (result)
            {
                evenTotal += playerInput;
                numEven++;
            }
            else
            {
                oddTotal += playerInput;
                numOdd++;
            }

        }

        outputResults(numOdd, oddTotal, numEven, evenTotal);
    }

    bool OddOrEven(int number)
    {
        if (number % 2 == 0) { return true; }
        else { return false; }
    }

    void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
    {
        cout << "There were " << numOfEven << " even numbers with a total of " << evenTotal << endl;
        cout << "There were " << numOfOdd << " odd numbers with a total of " << oddTotal << endl;
    }*/
/*
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
*/

    //Week 5

    
    using namespace std;
    
    
    int myNumbers2[10];

    for (int i = 0; i < 10; i++)
    {
        myNumbers2[i] = i;
    }

    cout << "Array Element" << setw(17) << "Stored value" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << setw(7) << i << setw(17) << myNumbers2[i] << endl;
    }

    //

    int myNumbers[5][2] = {
        {0, 0},
        {1, 2},
        {2, 4},
        {3, 6},
        {4, 8},
    };

    for (int row = 0; row < 5; row++)
    {
        for (int column = 0; column < 2; column++)
        {
            cout << "myNumbers[" << row << "][" << column << "]: ";
            cout << myNumbers[row][column] << endl;
        }
    }
    
    //

    vector<int> myNumbers3;

    myNumbers3.push_back(18);
    myNumbers3.push_back(22);
    myNumbers3.push_back(12);

    for (int i = 0; i < myNumbers3.size(); i++)
    {
        cout << myNumbers3[i] << endl;
    }

    cout << "\nPosition 2 in the vector holds: " << myNumbers3[1] << endl;
    myNumbers3.pop_back(); //deletes the third element
    cout << "\nVector now contains: " << endl;

    for (int i = 0; i < myNumbers3.size(); i++)
    {
        cout << myNumbers3[i] << endl;
    }

    myNumbers3.clear();

    if (myNumbers3.empty())
    {
        cout << "Vector is empty" << endl;
    }

    //

    int playerInput;
    int playerNumbers[10];


    for (int i = 0; i < 10; i++)
    {
        cout << "Please input a number" << endl;
        cin >> playerInput;
        playerNumbers[i] = playerInput;
        cout << endl;
    }

    //int SmallestNumber = playerNumbers[0];
    int SmallestNumberPos = 0;

    for (int i = 0; i < 10; i++)
    {
        if (playerNumbers[i] < playerNumbers[SmallestNumberPos])
        {
            SmallestNumberPos = i;
        }
    }

    cout << "Array Element" << setw(17) << "Stored value" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << setw(7) << i + 1 << setw(17) << playerNumbers[i] << endl;
    }

    cout << endl;
    cout << "The smallest value is in position " << SmallestNumberPos + 1 << " with a value of " << playerNumbers[SmallestNumberPos] << endl;

    //

    std::array<int, 5> numbers;

    for (int i = 0; i < 5; i++)
    {
        int playerInput;
        cout << "Please input a number" << endl;
        cin >> playerInput;
        numbers[i] = playerInput;

        cout << endl;

    }

    int SmallestNumberPos = 0;

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] < numbers[SmallestNumberPos])
        {
            SmallestNumberPos = i;
        }
    }

    cout << "The smallest value is in position " << SmallestNumberPos + 1 << " with a value of " << numbers[SmallestNumberPos] << endl;

    std::sort(numbers.begin(), numbers.end());

    for (int i = 0; i < 5; ++i)
        cout << numbers[i] << " ";
    cout << ": Sorted into acending order " << endl;

    std::sort(numbers.begin(), numbers.end(), greater<int>());

    for (int i = 0; i < 5; ++i)
        cout << numbers[i] << " ";
    cout << ": Sorted into decending order " << endl;

    //

    string Inventory[4] = { "Sword", "Battle Axe", "Healing potion", "Dagger" };
    char playerChoice;

    cout << "You have picked up a wizards staff, would you like to drop the dagger to make room in your inventory?  y/n" << endl;
    cin >> playerChoice;

    if (playerChoice == 'y' || playerChoice == 'Y')
    {
        cout << "You have picked up the staff" << endl;
        Inventory[3] = "Wizards staff";
    }
    else if (playerChoice == 'n' || playerChoice == 'N')
    {
        cout << "You left the staff behind" << endl;
    }
    else
    {
        cout << "Not a valid yes or no answer" << endl;
    }

    cout << "Inventory" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << i + 1 << ": " << Inventory[i] << endl;
    }


    //Week 6

    char initialString[50];
    cout << "Please enter your first name initial, middle name initial and full last name: ";
    cin.getline(initialString, 50);

    for (int i = 0; i < sizeof(initialString) / sizeof(int); i++)
    {
        if (initialString[i] == NULL) { return 0; }
        if (initialString[i] == ' ') { cout << endl; }
        else { cout << initialString[i]; }
    }


    string testString;
    cout << "please enter two words" << endl;
    //cin >> testString; 
    getline(cin, testString);
    cout << testString;

    string testString;
    cout << "please enter a sentance" << endl;
    getline(cin, testString);

    std::string stringToFind = "e";

    int index = 0;
    while ((index = testString.find(stringToFind, index)) != std::string::npos) { //std::string::npos == "no matches"
        testString.replace(index, 1, "X");
        index += stringToFind.length();
    }

    cout << testString << endl;
    return 0;



    string nameString;
    string secondNameString;
    string outputString = "Do you know who loves C++? XX does!";


    cout << "Please enter your name" << endl;
    getline(cin, nameString);

    int Xpos = outputString.find("X");
    outputString.insert(Xpos + 1, nameString, 0, nameString.length());
    cout << outputString << endl;

    int secondXpos = outputString.rfind("X");
    outputString.erase(Xpos, 1);
    outputString.erase(secondXpos - 1, 1);
    cout << outputString << endl;

    cout << "Please enter a longer name" << endl;
    getline(cin, secondNameString);

    Xpos = outputString.find(nameString);
    outputString.replace(Xpos, nameString.length(), secondNameString);

    cout << outputString << endl;


    /*
    void OutputInventory(vector<string> items);

    int main()
    {
        bool canProgress = false;
        string PlayerInput;

        vector<string> inventoryItems;
        inventoryItems.push_back("sword");
        string item1;
        string item2;

        for (int i = 1; i < 3; i++)
        {
            if (i == 1) { item1 = "staff"; item2 = "knife"; }
            else { item1 = "healing potion"; item2 = "fire spell"; }

            while (!canProgress)
            {
                cout << "What item do you want to keep: " << item1 << " or " << item2 << "?" << endl;
                getline(cin, PlayerInput);

                std::transform(PlayerInput.begin(), PlayerInput.end(), PlayerInput.begin(),
                    [](unsigned char c) { return std::tolower(c); });

                if (PlayerInput == item1) {
                    canProgress = true;
                    inventoryItems.push_back(item1);
                }
                else if (PlayerInput == item2) {
                    canProgress = true;
                    inventoryItems.push_back(item2);
                }
                else { cout << "Invalid item, please try again" << endl; }
            }

            canProgress = false;
            OutputInventory(inventoryItems);
        }

        cout << "Your inventory is full!" << endl;


        while (!canProgress)
        {
            cout << "You have found a magic ring, what would you like to replace in your inventory?" << endl << endl << "Choices: " << endl;
            for (int i = 0; i < inventoryItems.size(); i++) { cout << i + 1 << ": " << inventoryItems[i] << endl; }
            cout << "4: nothing" << endl;

            getline(cin, PlayerInput);

            std::transform(PlayerInput.begin(), PlayerInput.end(), PlayerInput.begin(),
                [](unsigned char c) { return std::tolower(c); });

            if (PlayerInput == inventoryItems[0]) {
                canProgress = true;
                inventoryItems[0] = "magic ring";
            }
            else if (PlayerInput == inventoryItems[1]) {
                canProgress = true;
                inventoryItems[1] = "magic ring";
            }
            else if (PlayerInput == inventoryItems[2]) {
                canProgress = true;
                inventoryItems[1] = "magic ring";
            }
            else if (PlayerInput == "nothing") {
                canProgress = true;
            }
            else { cout << "Not in inventory, please try again" << endl; }
        }

        canProgress = false;
        OutputInventory(inventoryItems);

        cout << "You have been robbed" << endl;
        for (int i = 0; i < 3; i++)
        {
            inventoryItems.pop_back();
        }

        OutputInventory(inventoryItems);
    }

    void OutputInventory(vector<string> items)
    {
        cout << endl << "Your inventory holds: " << endl;

        if (items.size() == 0) { cout << "Nothing you broke ass" << endl; }
        else
        {
            for (int i = 0; i < items.size(); i++)
            {
                cout << i + 1 << ": " << items[i] << endl;
            }
            cout << endl;
        }
    }*/
    


    /*
    int CheckWinner(string choice);

    int main()
    {
        int playerScore = 0;
        int computerScore = 0;
        string playerInput;
        bool isPlaying = true;

        while (isPlaying)
        {
            cout << "Enter your selection: ";
            getline(cin, playerInput);

            std::transform(playerInput.begin(), playerInput.end(), playerInput.begin(),
                [](unsigned char c) { return std::tolower(c); });

            cout << "You chose " << playerInput << endl;

            int winner = CheckWinner(playerInput);
            if (winner == 0) {
                cout << "Congratulations, you won!" << endl;
                playerScore++;
            }
            else if (winner == 1) {
                cout << "The computer won this round" << endl;
                computerScore++;
            }
            else { cout << "It was a draw" << endl; }

            cout << "You need: " << 3 - playerScore << " to win" << endl;
            cout << "The computer needs: " << 3 - computerScore << " to win" << endl;
            cout << "*********************************" << endl;

            if (playerScore == 3)
            {
                cout << "Congratulations, you won" << endl << "Game over";
                isPlaying = false;
            }
            else if (computerScore == 3)
            {
                cout << "The computer won, better luck next time" << endl << "Game over";
                isPlaying = false;
            }
        }

    }

    int CheckWinner(string choice)
    {								//0		//1			//2
        string computerChoices[] = { "rock", "paper", "scissors" };
        int randomChoice = rand() % 3;

        cout << "Computer chose " << computerChoices[randomChoice] << endl;

        if (choice == computerChoices[randomChoice]) { return 2; }
        else if (choice == "rock" && randomChoice == 2) { return 0; }
        else if (choice == "paper" && randomChoice == 0) { return 0; }
        else if (choice == "scissors" && randomChoice == 1) { return 0; }
        else { return 1; }
    }*/

    //Week 7

    int count = 3;

    for (int i = 1; i <= count; i++)
    {
        cout << i;
        if (i %= 2)
            cout << " is an even number" << endl;
        else
            cout << " is an odd number" << endl;
    }

    // Pause the output
    cin.get();

    return 0;

    /*
    int height();
    int weight();
    void output_bmi(float weight, float height);

    int total_inches, total_weight;


    int main()
    {
        double bmi;
        const string message = "Welcome to your BMI Calculator.";
        string name;

        cout << message << endl;
        cout << "Firstly what is your full name?" << endl;
        getline(cin, name);
        cout << "Hi " << name << " lets get started." << endl;

        total_weight = weight();
        total_inches = height();
        output_bmi(total_weight, total_inches);
    }

    int height()
    {
        int inches = 0;
        int feet = 0;

        while (true)
        {
            cout << "Please enter your height in feet:" << endl;
            cin >> feet;
            if (feet < 2 || feet > 7)
            {
                cout << "You must be between 2 and 7 feet" << endl;
            }
            else
            {
                cout << "Thank you!" << endl;
                break;
            }
        }

        while (true)
        {
            cout << "\nPlease enter the inches:" << endl;
            cin >> inches;

            if (inches < 0 || inches > 11)
            {
                cout << "\nInches must be between 0 and 11" << endl;
            }
            else
            {
                cout << "Thank you!" << endl;
                break;
            }

        }

        total_inches = feet * 12 + inches;
        cout << "Your total height in inches is: " << total_inches << endl;
        return total_inches;
    }

    int weight()
    {
        int stone, pounds;
        while (true)
        {
            cout << "\nPlease enter your weight in stone:" << endl;
            cin >> stone;
            if (stone < 3 || stone > 30)
            {
                cout << "\nYou must be between 3 and 30 stone" << endl;
            }
            else
            {
                cout << "Thank you!" << endl;
                break;
            }
        }

        while (true)
        {
            cout << "Please enter the pounds:" << endl;
            cin >> pounds;

            if (pounds < 0 || pounds > 13)
            {
                cout << "Pounds must be between 0 and 13" << endl;
            }
            else
            {
                cout << "Thank you!" << endl;
                break;
            }

        }

        total_weight = stone * 12 + pounds;
        cout << "Your total weight in pounds is: " << total_weight << endl;
        return total_weight;
    }

    void output_bmi(float weight, float height)
    {
        float BMI = weight * (703 / (height * height));
        cout << "Your BMI is: " << BMI << endl;
    }
    */

        /*
        * struct PersonDetails
    {
	    string name; 
	    int age;
	    string phoneNumber;

	    PersonDetails() // Default Constructor
	    {
		
	    }

	    void PrintDetails()
	    {
		    cout << name << endl;
		    cout << age << endl;
		    cout << phoneNumber << endl;
	    }
    }; 

    PersonDetails personDetails;

    int main()
    {
	    int age;
	    string name; 
	    string number; 

	    personDetails = PersonDetails(); 

	    personDetails.name = "Ellie";
	    personDetails.age = 18;
	    personDetails.phoneNumber = "Slay"; 
	
	    personDetails.PrintDetails();
    }*/ 
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
