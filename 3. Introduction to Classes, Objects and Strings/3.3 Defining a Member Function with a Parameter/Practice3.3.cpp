// Define class GradeBook wwith a member function that takes a parameter,
// create a GradeBook object and call its displayMessage function.
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// gradeBook class definition 
class GradeBook {
  public:
  // function that display a welcome message to the GradeBook user
  void displayMessage ( string courseName ) const {
    cout << "Welcome to the grade book for\n" << courseName <<  "!" << endl;
  } // end function displayMessage
}; // end class GradeBook

// Function main begins program executions 
int main() {
  string nameOfCourse; //string of the characters to store teh course name
  GradeBook myGradeBook; // create a gradeBook object named myGradeBook

  // prompt for and input course name
  cout << "Please enter the course name: " << endl;
  getline ( cin, nameOfCourse); /// read course name whit blanks
  cout << endl; // output a blank line 

  // call myGradeBooks displayMessage function
  // and pass nameOfCourse as an argument 
  myGradeBook.displayMessage( nameOfCourse);
} // end main 