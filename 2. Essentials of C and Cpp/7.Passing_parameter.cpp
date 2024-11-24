#include <iostream>
using namespace std;

// pass by value

// void swap(int x, int y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// int main()
// {
//     int a = 10, b = 20;
//     cout << "Before swapping" << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     swap(a, b);
//     cout << "After swapping" << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     return 0;
// }


// pass by address(using pointers)

// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main()
// {
//     int a = 10, b = 20;
//     cout << "Before swapping" << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     swap(&a, &b);
//     cout << "After swapping" << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     return 0;
// }

// pass by Reference(only valid in cpp)

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10, b = 20;
    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap(a, b);
    cout << "After swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}