#include<iostream>

using namespace std;

struct Student
{
  string name;
  int roll_no;
  long phNum;
};


int main(){
  Student s[10];
  s[2].name = "Apurva Naruka";
  s[2].roll_no = 33;
  cout<<s[2].name; 
  return 0;
}
