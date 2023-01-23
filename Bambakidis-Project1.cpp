/*
Author: Costa Bambakidis
Title: CS 3100 Project 1, Dice Rolling Simulator
Date: WSU Spring 2023, January 21

BLUF: Design a program that prompts for an input for a number of rolls for 2 dice. Then, simulate rolling 2 dice N amount
of times, and print the quantity each possible result was rolled to the console.
*/

#include <iostream>
using namespace std;

int main()
{

    // get input from user for n number of rolls.
    cout << "Input a number of rolls: ";

    int numRolls;
    cin >> numRolls;

    // initialize/fill an array with size 11 (there are 11 possible outcomes for rolling 2 dice.)
    int totalsPerRoll[11];
    for (int n = 0; n < 11; n++)
    {
        totalsPerRoll[n] = 0;
    }

    // seed random with the time. "Roll" our dice N amount of times. Log each entry into it's matching array slot.
    srand(time(nullptr));
    for (int i = 0; i < numRolls; i++)
    { 

        int dieOne = (rand() % 6) + 1; 
        int dieTwo = (rand() % 6) + 1;
        int diceTotal = dieOne + dieTwo; 
        for (int j = 0; j < 11; j++)
        { 
            if (diceTotal == j + 2)
            {
                totalsPerRoll[j]++;
            }
        }
    }

    // output results to console.
    for (int k = 0; k < sizeof(totalsPerRoll) / sizeof(int); k++)
    {
        cout << "Number of rolls resulting in " << k + 2 << ": " << totalsPerRoll[k] << endl;
    }

    return 1;
}

