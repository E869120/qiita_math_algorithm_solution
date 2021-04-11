#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  int ret = N * (N + 1) / 2;
  cout << ret * ret * ret << endl;
  return 0;
}
