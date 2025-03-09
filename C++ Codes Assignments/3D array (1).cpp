/*
A C++ program for a 3D array
Author: Waiguru Ian Muchiri
Reg No:BSCIT-05-0096/2024
Date:6/03/2025
*/




#include <iostream>
using namespace std;

int main() {
        // 3D matrix (array)
    int threeD[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };
    cout << "3D Matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << threeD[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}

