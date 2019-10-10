#include <iostream>

using namespace std;

int zarobek = 1000;
int staz = 1;

void drukuj( ) {
    cout << "Pracujesz " << staz << "lat i zarabiasz " << zarobek << endl;
    cout << "Pracujesz " << staz << " lat i zarabiasz " << zarobek << endl;
}

void awans(int &staz, int &zarobek) {
for (staz=1; staz <= lata; staz +=1)
zarobek = zarobek * 1.1; }
 

int main(int argc, char **argv)
{
    int lata;
    cout << "Podaj staz pracy w latach: " << endl;
    cin >> lata;
	awans(staz, zarobek);
    drukuj();
	return 0;
}
