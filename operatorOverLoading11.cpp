#include <iostream>
using namespace std;
class complex
{
public:
    int reali = 0, imagi = 0;
    float realf = 0.0, imagf = 0.0;
    complex() {}
    complex(float realf, float imagf)
    {
        this->realf = realf;
        this->imagf = imagf;
    }

    friend istream &operator>>(istream &in, complex &c);
    friend ostream &operator<<(istream &in, complex &c);

    complex operator*(complex c1)
    {
        complex c2;
        c2.realf = (realf * c1.realf) + ((imagf * c1.imagf) * (-1));
        c2.imagf = (realf * c1.imagf) + (imagf * c1.realf);
        return c2;
    }
    bool operator==(complex c)
    {
        if (realf == c.realf && imagf == c.imagf)
        {
            return true;
        }
        return false;
    }
};
istream &operator>>(istream &in, complex &c)
{
    cout << "Enter the Real part of the Complex Number: ";
    cin >> c.reali;
    cout << "Enter the Imaginary part of the Complex Number: ";
    cin >> c.imagi;
    cout << endl;
    return in;
}
ostream &operator<<(ostream &out, complex &c)
{
    cout << "The Complex Number is : " << c.reali << c.imagi << endl
         << endl;
    return out;
}

void numFormtatShow(int real, int imag)
{
    cout << "The Complex Number is: " << real << " + " << imag << "i" << endl
         << endl;
}

void multiplicationFormatShow(int real1, int real2, int imag1, int imag2){
    cout << "( " << real1 << " + " << imag1 << "i " << " )" << real2 << " + " << imag2 << "i ) "; 
}

int main(){
    float real1, real2, imag1, imag2;
    complex c, c1;
    cout << "OverLoading  >> and  << operators for input and output Complex Number" << endl;
    cin >> c1;
    cout << c1;
    cout << "Arithmetic operations and operator OverLoading for Complex Numbers " << endl;
   
    cout << "Enter the Real part of the First Complex Number : ";
    cin >> real1;
    cout << "Enter the Imaginary part of the First Complex Number : ";
    cin >> imag1;
    numFormtatShow(real1, imag1);

    cout << "Enter the Real part of the Second Complex Number : ";
    cin >> real2;
    cout << "Enter the Imaginary part of the Second Complex Number : ";
    cin >> imag2;
    numFormtatShow(real2, imag2);

    complex a(real1, imag1, real2, imag2);

    c = a*c1;
    cout << "Overloading * Operator for Multiplication of Complex Numbers" << endl;
    cout << "Multiplication: ";
    multiplicationFormatShow(real1,imag1,real2, imag2);
    cout << c.realf << " + " << c.imagf << "i " << endl << endl;

    cout << "OverLoading == and != Operation of Complex Number "<< endl;
    if( a == c1){
        cout << "Both Complex Numbers are Equal "<< endl << endl;
    }
    else{
        cout << "The two Complex Number are Not Equal" << endl << endl;
    }

    return 0;
}