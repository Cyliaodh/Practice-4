#include <iostream>
#include"num_class.h"
using namespace std;




int main()
{
    int n1,n2;
    cout << "Enter the two numbers of the class " << endl;
    cin >> n1 >> n2;
    num_class numbers(n1,n2);
    cout << "the sum of the two numbers is " << numbers.sum() << endl;
    return 0;
}
