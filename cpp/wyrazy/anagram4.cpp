#include <iostream>

using namespace std;
#define ROZMIAR 100
int i; 
int main(int argc, char **argv)
{  
	char tekst[ROZMIAR];
    cout << "Podaj tekst: " << endl;
    cin >> tekst;
	cin.getline(tekst, ROZMIAR);
	for (i = ROZMIAR; i >= 0; i--)
    {
     if(tekst[i]==' '){
        cout << tekst[i];
    }}
	

	return 0;
}

