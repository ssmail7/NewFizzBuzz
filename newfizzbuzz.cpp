//*************************************************************
// Written by Steven Smail for COP3331
//
// newfizzbuzz.cpp (Project 1)
//
// This program prints the numbers 1-100.
// -For multiples of 3, it prints “Fizz”.
// -For multiples of 5, it prints “Buzz”.
// -For multiples of 3 and 5, it prints “FizzBuzz”.
// -For multiples of 7, it prints “Woof”.
// -For multiples of 3 and 7, it prints “FizzWoof”.
// -For multiples of 5 and 7, it prints “BuzzWoof”.
//*************************************************************

#include <iostream>
#include <iomanip> //For setw
using namespace std;

int main()
{
  int i;

  //Loop to count to 100
  for(i = 1; i <= 100; i++)
  {
    if(((i % 3) == 0 && (i % 5) == 0))
      cout << setw(10) << "FizzBuzz" << endl;
    else if(((i % 3) == 0 && (i % 7) == 0))
      cout << setw(10) << "FizzWoof";
    else if(((i % 5) == 0 && (i % 7) == 0))
      cout << setw(10) << "BuzzWoof" << endl;
    else if((i % 3) == 0)
      cout << setw(10) << "Fizz";
    else if((i % 5) == 0)
      cout << setw(10) << "Buzz" << endl;
    else if((i % 7) == 0)
      cout << setw(10) << "Woof";
    else
      cout << setw(10) << i;
  }
}
