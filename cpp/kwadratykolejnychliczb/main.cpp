
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
  int n;
  do
  {
    cout << "Podaj liczbê liczb n=";
    cin  >> n;
  }while(n <= 0);
  for(int k = 1; k <= n; k++)
     cout<<k*k<<endl;

  return 0;
}
