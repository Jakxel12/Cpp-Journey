// Define class GradeBook with a memeber function displayMessage,
// create a GradeBook object, and call its displaysMessage function.
#include <iostream> 
using namespace std;

//gradeBook class definition
class GradeBook
{
  public:
  // function that displays a welcome messsage to the GradeBok user
  void displayMessage() const {
    cout << "Welcome to the Grade Book" << endl;
  } // end function displayMessage
}; // end class GradeBook

// function main begins program execution
int main() {
  GradeBook myGradebok; // create a GradeBook object named myGradeBook
  myGradebok.displayMessage(); // call objects displayMessage function
} // end main