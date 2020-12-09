#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex{
    public:
    Complex(int real, int im);
    void display();
    void sum(Complex c1, Complex c2);

    private:

    int real;
    int im;

};

#endif // COMPLEX_H_INCLUDED
