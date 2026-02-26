#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int M = N % 2;
  if (M == 1) {
    cout << "Odd" << endl;
  } else {
    cout << "Even" << endl;
  }
  return 0;
}
