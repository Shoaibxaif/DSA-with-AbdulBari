#include <iostream>
using namespace std;

// int main()
// {
//     int a = 10;                 // Ek integer variable 'a' ka declaration aur initialization
//     int *p;                     // Ek pointer variable 'p' ka declaration
//     p = &a;                     // Pointer 'p' mein 'a' ka address store karna
//     cout << "Address of a is " << p << endl;   // Pointer se 'a' ka address print karna
//     cout << "Address of a is " << &a << endl; // Directly 'a' ka address print karna
//     cout << "value of a is " << *p << endl;   // Dereference kar ke 'a' ki value access karna

//     return 0;
// }



// // pointer with array
// int main()
// {
//     int A[5] = {2,4,6,8,20};    // Ek array 'A' with 5 integers
//     int *p;                     // Ek pointer 'p' ka declaration
//     p = A;                      // Array ka base address pointer 'p' mein store hota hai (A == &A[0])

//     for(int i = 0 ; i<5 ; ++i)
//         cout<<p[i]<<endl;       // Pointer ke through array ke elements access karna

//     return 0;
// }


// // pointer + heap memory
// int main()
// {
//     int *p;                     // Ek integer pointer 'p' ka declaration
//     p = new int[5];             // Heap memory mein 5 integers allocate karna

//     p[0]=12;
//     p[1]=23;
//     p[2]=34;
//     p[3]=45;
//     p[4]=56;

//     for(int i = 0 ; i<5 ; ++i)
//         cout<<p[i]<<endl;       // Heap memory ke elements ko print karna

//     delete[] p;                 // Heap memory ko free karna (memory leak avoid karne ke liye)

//     return 0;
// }


