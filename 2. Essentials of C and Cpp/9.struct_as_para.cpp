#include <iostream>
using namespace std;

// CALL BY VALUE

// struct Reactangle
// {
//     int length;
//     int width;
// };

// void fun(struct Reactangle r1)
// {
//     cout << r1.length << endl;
//     cout<< r1.width<<endl;
// }

// int main()
// {
//     struct Reactangle r = {20, 10};
//     fun(r);
//     return 0;
// }

// CALL BY REFERENCE

// struct Reactangle
// {
//     int length;
//     int width;
// };

// void fun(struct Reactangle &r1)
// {
//     r1.length = 8;
//     cout << r1.length << endl;
//     cout<< r1.width<<endl;
// }

// int main()
// {
//     struct Reactangle r = {20, 10};
//     fun(r);
//     return 0;
// }


// CALL BY ADDRESS

// struct Reactangle
// {
//     int length;
//     int width;
// };

// void fun(struct Reactangle *P, int l)
// {
//     P->length=l;
//     cout<<P->length<<endl;
// }

// int main()
// {
//     struct Reactangle r = {20, 10};
//     fun(&r, 40);
//     return 0;
// }


// if structure contain an array

struct test
{
    int A[5];
    int n;
};

void fun(struct test t1 )
{
    cout<<t1.A[0]<<endl;
    cout<<t1.A[1]<<endl;
    cout<<t1.A[2]<<endl;

    cout<<"A[0] is changed"<<endl;
    t1.A[0]=10;
    cout<<t1.A[0]<<endl;
     cout<<t1.A[1]<<endl;
    cout<<t1.A[2]<<endl;
}

int main()
{
    struct test t = {{2,4,6,8,10},5};
    fun(t);
    return 0;
}