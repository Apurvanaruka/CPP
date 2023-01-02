#include<iostream>
using namespace std;
class Complex
{
    private:
    int real, imag;
    public:
    Complex(){};
    Complex(int real, int imag){
        this->real = real;
        this->imag = imag;
    }
    Complex operator + (Complex c1){
        real = real + c1.real;
        imag = imag + c1.imag;
    }
    Complex operator - (Complex c1){
        real = real - c1.real;
        imag = imag - c1.imag;
    }
};

void numFormatShow(int real,int imag){
    cout<<"The Complex number is :"<<real<<"+"<<imag<<endl;
}
void additionFormatShow(int real1, int real2, int imag1, int imag2){
    cout<<"\treal-("<<real1<<"+"<<real2<<")="<<real1+real2<<endl;
    cout<<"\timaginary-("<<imag1<<"+"<<imag2<<")="<<imag1+imag2<<endl;
}
void subtractionFormatShow(int real1, int real2, int imag1, int imag2){
    cout<<"\treal-("<<real1<<"-"<<real2<<")="<<real1-real2<<endl;
    cout<<"\timaginary-("<<imag1<<"-"<<imag2<<")="<<imag1-imag2<<endl;
}

int main(){
    int real1,real2,imag1,imag2;
    cout<<"Enter first complex number : ";
    cin>>real1;
    cout<<"Enter second imaginary number : ";
    cin>>imag1;
    cout<<"Enter first complex number : ";
    cin>>real2;
    cout<<"Enter second imaginary number : ";
    cin>>imag2;
    

    
    return 0;
}