// (Arithmetic)
// Program that ask the user to enter two numbers, and obtains the sum, product, difference, and quotients
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main () {
  double number1 = 0; 
  double number2 = 0;

  cout << "Enter two number: " << endl; // prompt user the data
  cin >> number1 >> number2; // Read the two number from teh user

  // Printing the results
  cout << "sum: " << number1 + number2 << endl;
  cout << "product: " << number1 * number2 << endl;
  cout << "difference: " << number1 - number2 << endl;
  cout << "quotient: " << number1 / number2 << endl;
}