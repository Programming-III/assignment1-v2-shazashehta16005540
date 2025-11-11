#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//#write Person class here
class person{
protected :
string name;
int id;
public:
person(){
name="";
  id=0;
}
person(name,id){
  this->name=name;
  this->id=id;
}
~person(){
  
}
void display()
{
cout<<"name:"<<name<<","<<"id:"<<id<<endl;
}
  
};









#endif
