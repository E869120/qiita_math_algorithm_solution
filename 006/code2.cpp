#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  if (N % 4 == 0) cout << N << endl;
  if (N % 4 == 1) cout << (N ^ (N - 1)) << endl;
  if (N % 4 == 2) cout << (N ^ (N - 1) ^ (N - 2)) << endl;
  if (N % 4 == 3) cout << 0 << endl;
  return 0;
}
