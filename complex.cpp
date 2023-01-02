#include <iostream>
using namespace std;
class Complex
{
  int img;
  int real;

public:
  // Complex c3(c1.real,c1.img);
  Complex(int r, int i)
  {
    real = r;
    img = i;
  }
  void plus(Complex c2)
  {
    cout << "plus = ";
    real += c2.real;
    img += c2.img;
  }
  void sub(Complex c2)
  {
    cout << "sub = ";
    real -= c2.real;
    img -= c2.img;
  }
  void mul(Complex c2)
  {
    int a, b;
    cout << "mul = ";
    a = img;
    b = real;
    real = real * c2.real - img * c2.img;
    img = a * c2.real + b * c2.img;
  }
  void print()
  {
    cout << real << " + " << img << "i";
  }
};
int main()
{
  Complex c1(2, 3);
  Complex c2(4, 5);
  // c1.mul(c2);
  int ch;
  cout << "1)Addition\n2)Subtraction\n";
  cout << "Enter you choice : ";
  cin >> ch; 
  switch (ch)
  {
  case 1:
    c1.sub(c2);
    c1.print();
    break;
  case 2:
    c1.plus(c2);
    c1.print();
    break;
  }

  return 0;
}
