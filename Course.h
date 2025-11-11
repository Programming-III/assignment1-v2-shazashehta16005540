#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
class course{
private: 
string coursecode;
string coursename;
int max;
student*student;
int current;
public:
course(){ 
  coursecode ="";
coursename="";
 max=0;
 current=0;
}
course(coursecode,coursename,max,student,current){
  this->coursecode=coursecode;
  this->coursename=coursename;
  this->max=max;
  this->current=current;
}
~course(){
  delete[]student;
}
void addstudent(const student& s){
  
}
void displaycourseinfo(){
  
}

cout<<coursecode<<endl;
 cout<<coursename<<endl;
cout<<max<<endl;
cout<<current<<endl;


};


#endif
