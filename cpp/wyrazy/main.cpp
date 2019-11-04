#include <iostream>

using namespace std;
#define ROZMIAR 100
int i;

int main(int argc, char **argv)
{
	char tekst[ROZMIAR];
	int wyrazy;
	wyrazy = 1;
	cin.getline(tekst, ROZMIAR);
	for (i=0; i < ROZMIAR; i++){
		if(tekst[i]==' ')
		wyrazy++;
		}
	cout << "W --> " << tekst << "<-- mamy " << wyrazy << " wyrazy." << endl;

	return 0;
}

