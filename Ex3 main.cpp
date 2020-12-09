#include <iostream>
#include"complex.h"
using namespace std;




int main()
{
    int r1,r2,im1,im2;
    cout << "Enter the real and the imaginary part of the first complex number\n" <<endl;
    cin >> r1 >> im1;
    cout << "Enter the real and the imaginary part of the second complex number\n" <<endl;
    cin >> r2 >> im2;
    Complex C1(r1,im1);
    Complex C2(r2,im2);
    Complex S(0,0);
    S.sum(C1,C2);
    cout << "\nThe value of the sum of the 2 complex numbers is:  " << endl;
    S.display();

    return 0;
}
