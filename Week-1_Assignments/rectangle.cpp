#include <iostream>
using namespace std;

int main() {
  int lenght, breadth;
  cin >> lenght >> breadth;
  int area = lenght * breadth;
  int perimeter = 2 * (lenght + breadth);
  cout << "Area = " << area << endl << "Perimeter = " << perimeter << endl;
  return 0;
}
