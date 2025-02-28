/*
A C++ program of a class Animal and a class Dog that inherits from the Animal class
Author: Waiguru Ian Muchiri
Reg No:BSCIT-05-0096/2024
Date:25/02/2025
*/
#include<iostream>
using namespace std;

class Animal{
    public:
    
    void eat() {
    cout<< "I can eat" << endl;
    }
    
    void sleep(){
    cout << "I can sleep" << endl;
    }
};

class Dog: public Animal{
    public:
    
    void bark(){
    cout << "I can bark woof! woof!" << endl;
    }
    
};


int main()
{
    Dog dog1;
    
    dog1.eat();
    dog1.sleep();
    
    dog1.bark();
    
    return 0;
 }