/*
A C++ program to find the area of a circle
Author: Waiguru Ian Muchiri
Reg No:BSCIT-05-0096/2024
Date:17/01/2025
*/
#include <iostream>
using namespace std;

float area(){
float radius;
cout << "Enter the radius: ";
cin >> radius;
float results = 3.142*radius*radius;
cout << "The area of the circle is : "<<results << endl;

return results;
}

int main(){

area();

return 0;

}

    