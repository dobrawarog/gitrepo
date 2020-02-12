/*
 * zamiana.cpp
 
 */
#include <iostream>
using namespace std;

int Hex2Dec(char tab, int b, int c  ){
     
     
     
return 0;  
}

int Dec2Hex(char tab, int wynik  ){
	if (tab == 0)
	{	
		return tab;
	}
	 wynik = tab%16;
    
	tab /= 16;

	Dec2Hex(tab, wynik);
    
	if (wynik < 10)
	{
		cout << wynik;
	}	
	else
	{
		char litera = wynik + 55;
		cout << litera;
	}
 return 0;
}

int main(int argc, char **argv)
{
     char tab[4]; 
     cout << "Podaj liczbe w systemie dec  " << endl; 
     cin >> tab; 
     Dec2Hex(char tab, int wynik);  
     
	return 0;
}

