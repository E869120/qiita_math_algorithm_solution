#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  int Answer = 0;
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      for (int k = 1; k <= N; k++) {
        Answer += i * j * k;
      }
    }
  }
  cout << Answer << endl;
  return 0;
}
