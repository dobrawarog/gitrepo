#include <iostream>
#include <iomanip>
using namespace std;

#define	w	5
#define	k	10

int main(int argc, char **argv)
{
	int tab2W[w][k];
    int i;
    int j;
    int n;
   cout << "Podaj wartość n: " << endl;
   cin >> n;
	srand(time(NULL)); 

	for (i =+ 1; i < w; i < i++){
        {
		for (j =+ 1; j < k; j++) {
            {
			cout << i << "-" << j << endl;
			cout << setw(2) << tab2W[i][j] << " ";
            tab2W[i][j]= rand() % n+1;
			}
			cout << endl;
		}
	}
	}
}
