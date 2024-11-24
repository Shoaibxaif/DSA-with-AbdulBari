#include <iostream>
using namespace std;

// void fun(int A[], int n)
// {
//     int i;
//     for (int i = 0; i < n; i++)
//     {
//         cout << A[i] << " " ;
//     }
// }

// int main()
// {
//     int A[] = {1, 2, 3, 4, 5};
//     fun(A, 5);

//     return 0;
// }


//function returing an array

int* fun(int n)
{
    int *p;
    p = new int[n];
   for (int i = 0; i < n; i++)
    {
        p[i] = i + 1; 
        
    }
    return p;
}

int main()
{
    int *A;
    A = fun(5);
    
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}