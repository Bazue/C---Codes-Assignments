/*
A C++ program of a voting system
Author: Waiguru Ian Muchiri
Reg No:BSCIT-05-0096/2024
Date:23/01/2025
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	cout << "Enter name : ";
	cin >> name ;
	
	int age;
	cout << "Enter age: ";
	cin >> age;
	
	if (age>= 18){
	    cout << name  << " is eligible for voting" << endl;
	}else {
	    cout << name << " is not eligible for voting" << endl;
	    }
	return 0 ;
}