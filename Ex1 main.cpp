#include <iostream>
using namespace std;
#include<string>
#include"rect.h"



// The main is only to try

int main()
{
    int L,W;
    cout << "Enter the lenght and the width of the rectangle" << endl;
    cin >> L >> W;
    Rectangle R(L,W);

    cout << "the area of the rectangle is " << R.area() << endl;
    return 0;
}

