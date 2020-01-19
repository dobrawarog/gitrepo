/*
 * euklides.cpp
 * 
 * Copyright 2019  <>
 * 
 */


#include <iostream>
using namespace std;

int NWD_re1(int a,int b) {
    if (a != 0)
        return NWD_re1(a % b, b - (a % b));
    else
        return b;
}


int NWD_re2(int a,int b) {
    if (b!= 0)
        return NWD_re2(b, a % b);
    else
        return a;
}


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
        cout << NWD_re1(a, b) << endl;
        cout << NWD_re2(a, b) << endl;
	return 0;
}

