/*
	Title:    Lab4b.cpp
	Author:   Liam Rivers
	Date:     6/1/2023
	Purpose:  lab
*/

#include<iostream>
using namespace std;

int main() {

    //assigning num 1 to enter loop
    int num=1;
    while(num>0 && num<=20){

        //gets new value for num
        cout << "Enter the number: ";
        cin >> num;

        //enters loop if valid input, printing number in descending order.
        while (num>=0 && num <=20){
            cout << num << endl;
            num--;
            //once number hits 0 breaks out of loops
        }
    }

    return 0;
}