//---------------------------------------------------------------------------
// File: roulette.cpp
// Author: Snehal Jogdand
// Date: 10/09/2019
// Program 1: Roman Roulette
//
// DESCRIPTION:
// Roulette: 
//  The cpp file for Roulette class
//  Provides the set of variables and functions to calculate survivors position
//---------------------------------------------------------------------------

#include "roulette.h"

//----------------------------------------------------------------------------
// Roulette 
// Parameters are n and k respectively.
// Default constructor for Rouletter class
Roulette::Roulette(int nValue, int kValue) {
   n = nValue;
   k = kValue;
}

//----------------------------------------------------------------------------
// writeResult
// Writes the result of the given problem
// Exits program if value of n and k are 0
// Prints Invalid Input if n and k values are invalid
// Prints the survivors position for valid input
void Roulette::writeResult() {
   if (shouldExit()) {
      cout << "Thank you and Good Bye!" << endl;
      return;
   }

   if (!isValidInput()) {
      cout << "Invalid input: n=" << n << ", k=" << k << endl;
      return;
   }

   int position = getSurvivorPosition();
   cout << position << endl;
}

//----------------------------------------------------------------------------
// shouldExit
// checks if the program should exit
// returns true if program should exit, false otherwise
bool Roulette::shouldExit() {
   return n == 0 && k == 0;
}

//----------------------------------------------------------------------------
// getSurvivorPosition
// Calculates the survivor position
// returns the survivor position
int Roulette::getSurvivorPosition() {
   int position = 0;

   for (int i = 1; i <= n; i++) {
      position = (position + 1 + k) % i;
   }

   return position + 1;
}

//----------------------------------------------------------------------------
// isValidInput
// Checks if the given value of n and k are valid
// valid input of n is > 0
// valid input of k is >= 0
bool Roulette::isValidInput() {
   return n > 0 && k >= 0;
}