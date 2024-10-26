// Comparing integers using if statements, relational operators
// adn equality operators.
#include <iostream>

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; //program uses endl

// Function main begins main execution
int main() {
  int number1 = 0; // fisrt integer to compare ( initialize to 0)
  int number2= 0; // second integer to compare ( initialize to 0)

  cout << "Enter two integers to compare: "; //prompt user to data
  cin >> number1 >> number2; // read to integers from user

  // if statements to compare integers and visualize his relational statement
  if (number1 == number2) 
    cout << number1 << "==" << number2 << endl;
  
  if (number1 != number2) 
    cout << number1 << "!=" << number2 << endl;

  if (number1 > number2) 
    cout << number1 << ">" << number2 << endl;

  if (number1 < number2) 
    cout << number1 << "<" << number2 << endl;

  if (number1 <= number2) 
    cout << number1 << "<=" << number2 << endl;

  if (number1 >= number2) 
    cout << number1 << ">=" << number2 << endl;
    
} // end function main