#include <iomanip>
#include <iostream>
using namespace std;

void printHeader(int size) {
  cout << "\nSubscripts:\n";
  for (int i = 0; i < size; i++)
    cout << setw(3) << i << ' ';
  cout << '\n';
  for (int i = 1; i <= 4 * size; i++)
    cout << '-';
  cout << endl;
}

void printRow(int b[], int low, int mid, int high, int size) {
  for (int i = 0; i < size; i++)
    if (i < low || i > high)
      cout << "    ";
    else if (i == mid) // mark middle value
      cout << setw(3) << b[i] << '*';
    else
      cout << setw(3) << b[i] << ' ';

  cout << endl;
}
// Binary search
int binarySearch(int b[], int searchKey, int low, int high, int size) {
  int middle;
  while (low <= high) {
    middle = (low + high) / 2;
    printRow(b, low, middle, high, size);
    if (searchKey == b[middle]) 
      return middle;
    else if (searchKey < b[middle])
      high = middle - 1; 
    else
      low = middle + 1; 
  }
  return -1; // searchKey not found
}

int main() {
  const int arraySize = 15;
  int a[arraySize], key, result;
  for (int i = 0; i < arraySize; i++)
    a[i] = 2 * i;
  cout << "Enter a number between 0 and 28: ";
  cin >> key;
  printHeader(arraySize);
  result = binarySearch(a, key, 0, arraySize - 1, arraySize);
  if (result != -1)
    cout << '\n' << key << " found in array element " << result << endl;
  else
    cout << '\n' << key << " not found" << endl;
  return 0;
}

