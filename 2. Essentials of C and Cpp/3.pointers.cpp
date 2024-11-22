#include <iostream>
using namespace std;
int main()
{

    int a = 10;
    int *p;
    p = &a;
    cout << "Address of a is " << p << endl;
    cout << "Address of a is " << &a << endl;
    cout << "value of a is " << *p << endl; // dereference

    return 0;
}