#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  int ret = 0;
  for (int i = 1; i <= N; i++) ret += i;
  cout << ret * ret * ret << endl;
  return 0;
}
