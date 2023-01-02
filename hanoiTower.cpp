#include <iostream>
using namespace std;
int Hanoi(char S, char I, char T, int N);
int main()
{
  cout << " Enter No. of Plats : ";
  int N; 
  cin >> N;
  Hanoi('S', 'I', 'T', N);
  return 0;
}
int Hanoi(char S, char I, char T, int N)
{
  if (N == 1)
  {
    cout << S << "=>" << T << endl;
    return 0;

  }
  else
  {
    Hanoi(S, T, I, N - 1);
    Hanoi(S, I, T, 1);
    Hanoi(I, S, T, N - 1);
  }
}

