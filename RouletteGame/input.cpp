//---------------------------------------------------------------------------
// File: input.cpp
// Author: Snehal Jogdand
// Date: 10/09/2019
// Program 1: Roman Roulette
//
// DESCRIPTION:
// Input:
//  The header file for Input class
//  Provides helper functions to get valid user input
//---------------------------------------------------------------------------

#include "input.h"

//----------------------------------------------------------------------------
// getUserIntInput
// Continually prompts user to enter a valid integer input
// Prints invalid message for a non integer input
// returns the valid integer input
int Input::getUserIntInput() {
   int input;
   bool isInvalid = false;
   do {
      cin >> input;
      isInvalid = cin.fail();
      if (isInvalid) {
         cout << "Not a number. Please try again." << endl;
         cin.clear();
         cin.ignore();
      }
   } while (isInvalid);

   return input;
}