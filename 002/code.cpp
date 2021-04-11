#include <iostream>
using namespace std;

long long N;
long long Answer = 1;
long long mod = 1000000007;

int main() {
  cin >> N;
  for (int i = 2; i <= N; i++) {
    Answer *= i;
    Answer %= mod;
  }
  cout << Answer << endl;
  return 0;
}
