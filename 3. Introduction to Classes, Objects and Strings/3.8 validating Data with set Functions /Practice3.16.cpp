// Implementations of the GradeBook member-Function definitions.
// the setCourseName function perfoms validation.
#include <iostream>
#include "/Users/jakxel/Repositorys/Cpp-Journey/3. Introduction to Classes, Objects and Strings/3.8 validating Data with set Functions /Practice3.15.cpp" // inlcude defiinition of class GradeBook
using namespace std;

//constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name )
{
  setCourseName ( name ); // validate and store coursename
} // end gradeBook constructor

// Function that sets the course name; 
// ensures that the course name as at most 25 characters
void GradeBook::setCourseName( string name )
{
  if ( name.size() <= 25 ) // if name has 25 or fewer characters
    courseName = name; // store the couse name in the object

  if ( name.size() > 25 ) // if name has more than 25 characters
  {
    // set courseName to first 25 characters of parameters  name
    courseName = name.substr(0, 25); // start at 0, lenght of 25

    cerr << "name \"" << name << "\" exceeeds maximum length (25).\n"
    << "limiting courseName to fisrt 25 characters.\n" << endl;
  } // end if
} // end function setCourseName

//function to get the course name
string GradeBook::getCourseName() const 
{
  return courseName; // return objects courseName
} // end function getCourseName 

// display a welcome message to the gradeBook user 
void GradeBook::displayMessage() const 
{
  // call getCourseName to get the courseName
  cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
} // end function displayMessage