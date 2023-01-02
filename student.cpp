#include<iostream>
using namespace std;

class Student{
  string name;
  int marks;
  int id;
  public:
 
  Student(string name,int marks,int id){
    this->name = name;
    this->marks = marks;
    this->id = id;
  }
  void show(){
    cout<<name<<" "<<id<<" "<<marks;
  }
};

int main(){
  Student apurva("Apurva",80,2160010);
  apurva.show();

  return 0;
}