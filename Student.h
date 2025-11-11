#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here
class student:public person {
private:
int yearLevel;
string major;
public:
student():person(){
yearlevel=0;
 major=""; 
}
student(yearlevel,major):person(name,id){
  this->yearlevel= yearlevel;
  this->major= major;
}
~student(){}
void display(): display(){
cout<<yearlevel<<endl;
cout<<major<<endl;
}









};


#endif
