#include <iostream>
#include <string>
using namespace std;

string S;

int main() {
  cin >> S;
  for (int i = 0; i < (int)S.size() - 4; i++) {
    if (S[i + 0] == 'q' && S[i + 1] == 'i' && S[i + 2] == 'i' && S[i + 3] == 't' && S[i + 4] == 'a') {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
