#ifndef RECT_H_INCLUDED
#define RECT_H_INCLUDED


#include <iostream>
using namespace std;

class Rectangle {

    public :
    Rectangle(int L, int W);
    int area();

    private:
    int m_L,m_W;



};


#endif // RECT_H_INCLUDED
