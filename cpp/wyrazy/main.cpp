#include <iostream>

using namespace std;
#define ROZMIAR 100

using namespace std;
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
	cout << "W --> " << tekst << "<-- mamy " << wyrazy << " wyrazów." << endl;

	return 0;
}

