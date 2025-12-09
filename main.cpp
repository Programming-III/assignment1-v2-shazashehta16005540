#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================








// ==================== Student Class Implementation ====================

friend student operator<<(ostream & out,student&s) {
  out<<s.yearlevel<<","<<s.major<<endl;
  return out;
}
friend instructor operator<<(ostream & out,instructor&i) { 
  out<<i.department<<","<<i.exp<<endl;
  return out;
}
friend course operator<<(ostream & out,course&c) { 
  out<<c.coursename<<","<<c.coursecode<<endl;
  return out;
}
student operator[](int i){
  return student[i];
}

bool operator==(course&c){
  if(this->coursecode=c.coursecode&&
  this->coursename=c.coursename)
  return true;
  else 
  return false;
}
course operator +=(student&s){
  student.student(s);
  return*this;
}


// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
