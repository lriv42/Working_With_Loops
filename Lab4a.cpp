/*
	Title:    Lab4a.cpp
	Author:   Liam Rivers
	Date:     6/1/2023
	Purpose:  debugging lab4a
*/

#include <iostream>
using namespace std;

int main()
{
  //variable declaration
  int number;

//getting input
  cout <<" Enter the times the table needs to be written: ";
  cin >> number;

//prints out the 10 multiplication table as many times as number is written, or once if greater than or equal to 20
  do
  {
    cout << 10 <<" x " << number << " = " << 10 * number << endl;
    number--;
  }while (number > 0 && number <= 20);

return 0;
}