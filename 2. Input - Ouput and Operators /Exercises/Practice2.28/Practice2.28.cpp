// (Digits of a integer)
// Program that separates the number in to digits whit three spaces each

#include <iostream>
using namespace std;

int main() {
  int number = 0; // integer initialize in 0

  cout << "Insert a number: " << endl; // prompt user the data
  cin >> number; // read the number

  // Check if the input number is exactly five digits
    if (number < 10000 || number > 99999) {
        cout << "Please enter a valid five-digit number." << endl;
        return 1;
    }

    // Extract and print each digit with three spaces in between
    cout << (number / 10000) << "   ";          // First digit
    cout << (number / 1000 % 10) << "   ";      // Second digit
    cout << (number / 100 % 10) << "   ";       // Third digit
    cout << (number / 10 % 10) << "   ";        // Fourth digit
    cout << (number % 10) << endl;              // Fifth digit

    return 0;
}