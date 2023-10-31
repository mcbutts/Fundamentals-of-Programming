#include <iostream>
using namespace std;

int main() {

int opt, num, num1, num2, sum, product;

do {
  cout << "1. Add two or more numbers " << endl;
  cout << "2. Subtract two numbers " << endl;
  cout << "3. Multiply two or more numbers " << endl;
  cout << "4. Quit" << endl;

  cout << "Choose an option between 1-4: ";
  cin >> opt;

  if (opt == 1) {
    sum = 0;
    do {
      cout << "Enter a number: ";
      cin >> num;
          if (num != -9999) {
            sum = sum + num;
            // cout << sum << endl;
          }
    }
    while (num != -9999);
    cout << sum << endl;
    /* do {
      cout << "Enter a number: ";
      cin >> num;
      sum = sum + num;
      cout << sum << endl;
    }
    while (num != -9999);
    */
}
  else if (opt == 2){
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Your answer is: " << (num1 - num2) << endl;
}
  else if (opt == 3){
    product = 1;
    do {
      cout << "Enter a number: ";
      cin >> num;
          if (num != -9999) {
            product = product * num;
            // cout << product << endl;
          }
    }
    while (num != -9999);
    cout << product << endl;
}
  else if (opt == 4){
  cout << "Quit" << endl;
}
  else {
    cout << "Invalid menu choice" << endl;
  }
}
while  (opt <= 4);

return 0;

}
