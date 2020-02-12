/*
 * zad_12_110.cpp

 */

#include <iostream>
using namespace std; 

void wyswietl(int tab[], int n){
    for (int i=0; i < n; i++){
        cout << tab[i] << " ";
    }
        cout << endl;
}

void zamien(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
} 

void bubble_sort(int tab[], int n) {
	int ile = 0;
	for (int i=n-1; i>0; i--) {
		cout << "Indeks i=" << i << endl;
		for (int j=0; j<i; j++) {
			if (tab[j] > tab[j+1]) {
				zamien(tab[j], tab[j+1]);
				ile++;
			}
		}
		cout << endl;
	}
	cout << "Zamian: " << ile << endl;
} 

int main()
{
    
    int wartosc;
    cout << "Podaj wartosc: ";
    cin >> wartosc;
    cout << "Dzielniki liczby " << wartosc << " wynosza: ";
    for (int i = wartosc; i > 0; i--)
    {
        if (wartosc % i == 0)
            cout << wartosc / i << " ";
    }
    int tab[100];
    bubble_sort(tab, wartosc);
    return 0;
}
