#include <iostream>
using namespace std;

int main() {

int num1, num2, sum, product;

cout << "Enter two numbers: ";
cin >> num1;
cin >> num2;

while (((num1 + num2) < 12) || ((num1 * num2) > 45)) {
  sum = num1 + num2;
  product = num1 * num2;
  
  cout << "The sum of your numbers is: " << sum << endl;
  cout << "The product of your numbers is: " << product << endl;

  cin >> num1 >> num2;
}

return 0;

}
