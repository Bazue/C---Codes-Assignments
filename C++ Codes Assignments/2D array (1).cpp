/*
A C++ program for a 2D array
Author: Waiguru Ian Muchiri
Reg No:BSCIT-05-0096/2024
Date:6/03/2025
*/



#include <iostream>
using namespace std;

int main() {
    // 2D matrix (array)
    int twoD[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "2D Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << twoD[i][j] << " ";
        }
        cout << endl;
    }
