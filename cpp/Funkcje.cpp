/*
 * Funkcje.cpp
 * 
 * Copyright 2019  <>

 */


#include <iostream>
using namespace std;

void sumuj(int a, int b) 
{
    cout << "Suma: " << a+b << endl;
    }

void podziel(int a, int b)
{
    if (b != 0)
    cout << "Wynik dzielenia:" << (float)a/(float)b << endl;
    else 
    cout << "ERROR" << endl;
    }
// rzytowanie typu (ang.casting)-dynamiczna zmiana zmiennej
//(float) a

int pomnoz(int a, int b) {
    
    return a*b;
}
 int odejmij(int a, int b) {
     return a-b;
 }
int main(int argc, char **argv)
{
	int a, b;
    cout << "Podaj liczby: ";
    cin >> a >> b;
    sumuj(a, b);
   podziel(b, a);
   cout << "Iloczyn:" << pomnoz(a,b) << endl;
   int wynik;
  wynik = pomnoz(a, b);
  cout << "Iloczyn:" << wynik; << endl;
  
  wynik = odejmij(a, b);
  cout << "Odejmowanie:" << wynik;
  
  
	return 0;
}

