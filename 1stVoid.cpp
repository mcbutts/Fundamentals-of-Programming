#include <iostream>
using namespace std;

void printName (string fn, string ln) {
  cout << ln << ", " << fn << endl;
}

int main () {
  string a;
  printName("jack", "smith");
  printName("betty", "boo");

  string p, q;
  cout << "Give me your name: ";
  cin >> p >> q;
  printName(p,q);
}
