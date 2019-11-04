#include <iostream>
#include <iomanip>
using namespace std;

#define	w	5
#define	k	7

int main(int argc, char **argv)
{
	int tab2W[w][k];
    int i;
    int j;
    int r;
   cout << "Podaj wartość r: " << endl;
   cin >> r;
   cout << "Podaj wartość i: " << endl;
   cin >> i;
   cout << "Podaj wartość j: " << endl;
   cin >> j;
	srand(time(NULL)); 

	for (i=0; i < w; i++){
        {
		for (j=0; j < k; j++) {
            {
            tab2W[i][j] = a(i*r)*a(j*r); 
			cout << i << "-" << j << endl;
			cout << setw(2)<< " ";
			}
			cout << endl;
		}
	}
	}
  return 0;
}
