//---------------------------------------------------------------------------
// File: input.h
// Author: Snehal Jogdand
// Date: 10/09/2019
// Program 1: Roman Roulette
//
// DESCRIPTION:
// Input:
//  The header file for Input class
//  Provides helper functions to get valid user input
//---------------------------------------------------------------------------

#ifndef INPUT_H
#define INPUT_H

#include <iostream>
using namespace std;

//---------------------------------------------------------------------------
// Input: The header file for Input class
//  Provides helper functions to get valid user input
//---------------------------------------------------------------------------
class Input {
public:
   // Gets a valid integer input and continually prompt user if invalid
   static int getUserIntInput();
};
#endif