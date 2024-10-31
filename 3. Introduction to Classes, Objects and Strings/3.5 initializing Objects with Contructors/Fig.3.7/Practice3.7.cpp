// Instantiating multiple objects of the GradeBook class and using
// the Grade Boook construsctor object is created
// when each GradeBook object is created.
#include <iostream>
#include <string>
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
  // constructor initializes courseName with string supplied as a argument
  explicit GradeBook(string name)
      : courseName(name) // member intializer to initialize courseName
  {
    // empty body
  } // end GradeBook constructor

  // function to set the course name
  void setCourseName(string name)
  {
    courseName = name; // store the course name in the object
  } // end function setCourseName

  // function to get the course name
  string getCourseName() const
  {
    return courseName; // return objects courseName
  } // end function getCourseName

  // display a welcome message to the GradeBook user
  void displayMessage() const
  {
    // call getCoursename to get the courseName
    cout << "Welcome to the grade book for/n" << getCourseName() << "!" << endl;
  } // end function
private:
  string courseName; // course nmae for this GradeBook
}; // end class GradeBook

// function main begins progam execution
int main()
{
  // create two GradeBook objects
  GradeBook GradeBook1("CS101 Introduction to C++ Programming");
  GradeBook GradeBook2("CS102 Data Structures in C++");

  // display initial value of CourseName for each Gradebook
  cout << "GradeBook1 created for course: " << GradeBook1.getCourseName()
       << "/ngradeBook2 created for course: " << GradeBook2.getCourseName()
       << endl;
} // endl main