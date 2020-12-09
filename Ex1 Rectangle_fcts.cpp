#include <iostream>
using namespace std;
#include<string>
#include"rect.h"

// constructor

Rectangle::Rectangle(int L,int W) : m_L(L),m_W(W)
{

}
// function member that returns the area
int Rectangle::area()
{
    return (m_W*m_L);
}
