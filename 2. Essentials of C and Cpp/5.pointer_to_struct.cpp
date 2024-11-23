#include<iostream>
using namespace std;

struct Rectangle
{
    int len;
    int bre;
};

// pointer to a structure

// int main()
// {
//     Rectangle r = {10, 5};

//     cout<<r.len<<endl;
//     cout<<r.bre<<endl;

//     cout<<"accesing structure using pointer"<<endl;
//     Rectangle *p = &r;
//     cout<<p->len<<endl;
//     cout<<p->bre<<endl;


    
// return 0;
// }

// pointer to a structure using heap
int main()
{
   
    // Rectangle *p;
    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    Rectangle* p = new Rectangle; // cpp syntax

    p->len = 14;
    p->bre = 7;
  

    cout<<p->len<<endl;
    cout<<p->bre<<endl;


    
return 0;
}