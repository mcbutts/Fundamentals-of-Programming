#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main() {
ofstream datafile;
ifstream infile;

int num1, num2, num3, sum;
infile.open ("thMod.txt");
infile >> num1 >> num2 >> num3;

datafile.open("mydata3.txt");
datafile << num1 << endl;
datafile << num2 << endl;
datafile << num3 << endl;

sum = num1 + num2 + num3;
datafile << sum << endl;

infile.close();
datafile.close();

}
