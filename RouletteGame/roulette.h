//---------------------------------------------------------------------------
// File: roulette.h
// Author: Snehal Jogdand
// Date: 10/09/2019
// Program 1: Roman Roulette
//
// DESCRIPTION:
// Roulette: 
//  The header file for Roulette class
//  Provides the set of variables and functions to calculate survivors position
//---------------------------------------------------------------------------

#ifndef ROULETTE_H
#define ROULETTE_H

#include <iostream>
using namespace std;

//---------------------------------------------------------------------------
// Roulette: The header file for Roulette class
// Provides the set of variables and functions to calculate survivors position.
//---------------------------------------------------------------------------
class Roulette {
public:
   // default constructor: parameters are n and k respectively
   Roulette(int = 0, int = 1);

   // writes the roman roulette result
   void writeResult();

   // checks if the current program should exit
   bool shouldExit();

private:
   // count of people standing in circle
   int n;

   // the kth member to kill in circle
   int k;

   // gets the survivor position
   int getSurvivorPosition();

   // checks if the input n, k is valid
   bool isValidInput();
};
#endif