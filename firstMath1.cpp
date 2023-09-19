#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
  float num1;
  double val;

  cout << "Enter a number: ";
  cin >> num1;

  val = abs(num1);

  cout << "The absolute value of your number is: " << val << endl;
  
  return 0;

}
