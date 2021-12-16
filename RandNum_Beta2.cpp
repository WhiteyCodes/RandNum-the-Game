// RandNum the game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//libraries
#include <cstdlib> 
#include <ctime> 
#include <iostream>
using namespace std;

int main()
{
    //Random number generator
    srand((unsigned)time(0));
    int i;
    i = (rand() % 100 + 0);
    //cout << i; Debug line
    //define int x
    int x;
    //Header
    std::cout << "Welcome to RandNum beta 2.1.0! copyright 2021 Raiku\n\n";

    std::cout << "For game rules and compatibility info, please check RandNum info.txt (included with the program)\n\n";

    //while loop
    while (true)
    {
        //user input
        cout << "Type your number:\n\n";
        cin >> x;
        //cout << x; Debug line
        if (x < i) {
            cout << "Higher!\n\n";
        }
        else if (x > i) {
            cout << "Lower!\n\n";
        }
        else if (x = i) {
            cout << "Nice! You guessed the number!\n\n";
            system("pause");
            break;
        }
        // if (x > 0) {
             //cout << "your input is invalid! Make sure the number you entered is between 0 and 100\n\n";
         //}
         //else if (x < 100) {
             //cout << "your input is invalid! Make sure the number you entered is between 0 and 100\n\n";
         //}
    }
    return 0;
}