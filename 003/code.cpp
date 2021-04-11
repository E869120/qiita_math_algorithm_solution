#include <iostream>
using namespace std;

bool func(int N) {
  if (N == 1) {
    return false;
  }
  for (int i = 2; i * i <= N; i++) {
    if (N % i == 0) return false;
  }
  return true;
}

int main() {
  int N; cin >> N;
  bool I = isprime(N);
  if (I == true) cout << N << " is a prime!" << endl;
  if (I == false) cout << N << " is not a prime..." << endl;
  return 0;
}
