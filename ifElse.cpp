#include <iostream>
using namespace std;

int main() {
  int temp;

  cout << "Enter a temperature: ";
  cin >> temp;

  if (temp > 90) {
    cout << "It's hot outside." << endl;
  }
  if (temp < 90) {
    cout << "It's a nice day outside." << endl;
  }
  return 0;
}
