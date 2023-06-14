/*
	Title:    Lab4c.cpp
	Author:   Liam Rivers
	Date:     6/1/2023
	Purpose:  lab
*/

#include<iostream>
using namespace std;

int main() {
    //declaring variables
    int num=0;

    //enters loop since i == 0 and gets input
    for(int i = 0; i<=0; i++){
        cout << "Enter the number: ";
        cin >> num;

        //enters new loop to print inputted number in ascending order
        for(int i = 1; i <= num && i<=20; i++ ) {
            cout << i << endl;
        }
    }
    return 0;
}