// GradeBook class definition presents the public interface of 
// the class. Member-function definitions appear in Gradebook.cpp.
#include <string>

// GradeBook class definition 
class GradeBook 
{
public : 
  explicit GradeBook ( std::string ); // constructor initialize courseName
  void setCourseName ( std::string ); // stes the course name 
  std::string getCourseName() const; // gets the course name 
  void displayMessage() const; // display a welcome message
private: 
std::string  courseName; //course name for this GradeBook 
}; // end class GradeBook