#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char **argv)
{
	int tab2W[N][M];
	int i, j;

	srand(time(NULL)); // inicjacja generatora liczb pseudolosowych

	for (i =+ 1; i < N; i++){
	for (i = 1; i < N; i++){
		cout << "------->Tablica " << i << "<--------"  << endl;
			 cout << i << "-" << j << endl;
			tab2W[i][j] = i + j;
			cout << setw(2) << tab2W[i][j] << " ";
			}
			cout << endl;
		}
	}
	}
}
