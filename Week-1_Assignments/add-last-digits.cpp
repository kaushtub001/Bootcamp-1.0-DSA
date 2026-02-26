#include <iostream>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  N = N % 10;
  M = M % 10;
  cout << N + M << endl;
  return 0;
}
