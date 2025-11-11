#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here
class instructor:public person{
private:
string department;
int exp;
public:
instructor():person(){
  department ="";
  exp=0;
}
instructor(department ,exp):person(name,id){
  this->department=department;
  this->exp=exp;
}
~instructor():~person(){
  
}
void display():display(){
cout<<department<<endl;
cout<<exp<<endl;
}

};






};
#endif
