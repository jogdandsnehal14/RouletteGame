//---------------------------------------------------------------------------
// File: rouletteDriver.cpp
// Author: Snehal Jogdand
// Date: 10/09/2019
// Program 1: Roman Roulette
//
//---------------------------------------------------------------------------
// DESCRIPTION:
// Josephus problem: 
//  For the execution ritual, we have "n" number of people that are standing
//  in a circle facing inwards. All the people in the circle are numbered 
//  from 1 to "n" sequentially in a clockwise fashion. The numbers assigned 
//  to people stay the same till the end of the ritual. Starting with person 
//  numbered 1, (k - 1) number of people are skipped (moving in clockwise
//  direction) and the kth member is killed and eliminated from the circle.
//  The process continues until there is only 1 survivor left.
//
//---------------------------------------------------------------------------
// IMPLEMENTATION:
//  From https://en.wikipedia.org/wiki/Josephus_problem
//  f(n, k) = f(n - 1, k) + k % n and f(1, k) = 0
//  We observe that for n number of people, when the kth person is killed, 
//  the problem gets reduced to n-1 people with new starting position of k. 
//  Extending this logic to a non recursive solution, we can caculate
//      Base condition: f(1, k) = 0
//      f(2, k) = f(1, k) + k % 2
//      f(3, k) = f(2, k) + k % 3
//      and so on.
//  But, since here in our problem, n is indexed starting at 1, we have to
//  add 1 at each iteration. So our calculation changes to:
//      Base condition: f(1, k) = 0 + 1
//      f(2, k) = (f(1, k) + 1 + k) % 2
//      f(3, k) = (f(2, k) + 1 + k) % 3
//      ...
//      f(n, k) = (f(n-1, k) + 1 + k) % n
//      Basically,
//      next_position = (previous_position + 1 + k) % n
//
//---------------------------------------------------------------------------
// ASSUMPTIONS:
//    Input:
//       The user is prompted to put in the values of "n" and "k" on new line.
//       For multiple problems, user can continue to input as many values
//    Invalid input and Exceptions:
//       User would continually be prompted for n and k until a valid int input is provided
//       Valid values of n > 0 and k >= 0
//       No exceptions are thrown for invalid input
//    Exiting Program:
//       Enter 0 0 for values of n and k to exit the program
//    
//    Example 1: 
//       For 5 and 1 as values of n and k as user input, 
//       The sample I/O session would look like:
//       5
//       1
//       3
//
//    For multiple problems, user can continue to input as many values
//    Enter n=0 and k=0 for exiting the program
//    Example 2: 
//       5
//       1
//       3
//       6
//       3
//       5
//       0
//       0
//       Thank you and Good Bye!
//
//    User would continually be prompted for a valid integer input
//    Example 3:
//       5
//       a
//       Not a number. Please try again.
//       1
//       3
//    Example 4:
//       6
//       -1
//       Invalid input n=6, k=-1
//       6
//       3
//       5
//---------------------------------------------------------------------------

#include "roulette.h"
#include "input.h"

//----------------------------------------------------------------------------
// main
// The main function to execute the roulette program
int main() {
   int n, k;
   bool shouldExit = false;

   do {
      n = Input::getUserIntInput();
      k = Input::getUserIntInput();

      Roulette roulette(n, k);
      shouldExit = roulette.shouldExit();
      roulette.writeResult();
   } while (!shouldExit);

   return 0;
}