#include <iostream>
#include"complex.h"
using namespace std;


Complex:: Complex(int r,int i) : real(r),im(i)
{

}
void Complex:: display()
{
    cout<<real<<"+"<<im<<"i"<<endl;
}

void Complex :: sum(Complex c1, Complex c2)
{
    real=c1.real+c2.real;
    im=c1.im+c2.im;
}
