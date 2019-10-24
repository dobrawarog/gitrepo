/*
 * tablica2w.cpp

 */


#include <iostream>
using namespace std;
#define N   10
#define M   10
int main(int argc, char **argv)
{
	int tab2W[N][M];
    int i, j;
    srand(time(NULL)); //inicjacja genertaora liczb pseudolosowych
    for(i=0; i < N; i++ ){
    //cout << "++++ Tablica" << i <<  "++++Tablica" << endl;
        for (j=0; j<M;j++ ){
            //cout << i << "-" << j << endl;
            tab2W[i][j] = rand() %10;
            cout << tab2W[i][j] << " ";
        }
        cout << endl;
    }
	return 0;
}

