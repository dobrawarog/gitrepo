/*
 * petle2.cpp
 * 
 * Copyright 2019  <>

 */


#include <iostream>
#include <iomanip>

using namespace std; 

int main(int argc, char **argv)
{
	int i, j;
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) { 
                cout << setw(4) << i * j << " " ;
            }
    cout << endl;
        }

	return 0;
}

