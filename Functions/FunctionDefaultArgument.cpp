#include <iostream>
using namespace std;

int boxVolume(int = 1, int = 1, int height = 1);

int main() {
  cout << "The default box volume is: " << boxVolume()
       << "\n\nThe volume of a box with length 10,\n"
       << "width 1 and height 1 is: " << boxVolume(10)
       << "\n\nThe volume of a box with length 10,\n"
       << "width 5 and height 1 is: " << boxVolume(10, 5)
       << "\n\nThe volume of a box with length 10,\n"
       << "width 5 and height 2 is: " << boxVolume(10, 5, 2) << endl;

  return 0;
}

int boxVolume(int length, int width, int height) {
  return length * width * height;
}
