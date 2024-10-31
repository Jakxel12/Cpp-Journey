// Define class GradeBook that contains a courseNae data nember
// and member functions to set and get its value;
// create and manipulate a GradeBook object whit these functions.
#include <iostream>
#include <string>
using namespace std;

// GradeBoook class definition
class GradeBook
{
  public:
  // Function that sets the course name
  void setCourseName ( string name )
  {
    courseName = name; // store the course name in the object
  } // end function setCourseName
  
  // function that gets the course name
  string getCourseName() const 
  {
    return courseName; // return the Objects courseName
  } // end function getCoourseName

  // function that displays a welcome message 
  void displayMessage() const 
  {
    // this statements calls getCourseName to get the
    // nae of teh course this GradeBOok represents
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
  } // edn function displayMessage
  private:
  string courseName; // course name for this gradeBook
}; // end class GraeBook

// function main begins program execution
int main() 
{
  string nameOfCourse; // string of the characters to store the course name
  GradeBook myGradeBook; // create a GradeBook object named myGradeBook

  // display initial value of coursename
  cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

  // prompt for, input and set course name
  cout << "\nPlease enter the course name: " << endl;
  getline( cin, nameOfCourse ); // read a course name whit blanks
  myGradeBook.setCourseName( nameOfCourse) ; // set the course name

  cout << endl; // outputs a blanck line
  myGradeBook.displayMessage(); /// display message whit new course name
} // end main 