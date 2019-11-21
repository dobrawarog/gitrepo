/*
 * euklides.cpp
 * 
 * Copyright 2019  <>
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int a;
    int b;
    int i;
    a = b = i = 0;
	cout << "Wprowadź liczbę a: " << endl;
    cin >> a; 
    cout << "Wprowadź liczbę b: " << endl;
    cin >> b; 
    while( a > 0){
        i++; 
            a = a % b; 
            b = b - a;
        }
        cout << b << endl;
        cout <<"pOWTORZENIA: " << i << endl;
	return 0;
}

