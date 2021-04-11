#include <iostream>
using namespace std;

int main() {
  int N, Answer = 0;
  cin >> N;
  
  for (int i = 1; i <= N; i++) {
    Answer ^= i;
  }
  cout << Answer << endl;
  return 0;
}
